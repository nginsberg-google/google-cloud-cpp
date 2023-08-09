// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/curl/client.h"
#include "google/cloud/storage/iam_policy.h"
#include "google/cloud/storage/internal/curl/request_builder.h"
#include "google/cloud/storage/oauth2/credentials.h"
#include "google/cloud/storage/oauth2/google_credentials.h"
#include "google/cloud/testing_util/scoped_environment.h"
#include "google/cloud/testing_util/setenv.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <memory>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

using ::google::cloud::storage::oauth2::Credentials;
using ::google::cloud::testing_util::StatusIs;
using ::testing::HasSubstr;
using ::testing::Not;

StatusCode const kStatusErrorCode = StatusCode::kUnavailable;
std::string const kStatusErrorMsg = "FailingCredentials doing its job, failing";

// We create a credential class that always fails to fetch an access token; this
// allows us to check that CurlClient methods fail early when their setup steps
// (which include adding the authorization header) return a failure Status.
// Note that if the methods performing the setup steps were not templated, we
// could simply mock those out instead via MOCK_METHOD<N> macros.
class FailingCredentials : public Credentials {
 public:
  StatusOr<std::string> AuthorizationHeader() override {
    return Status(kStatusErrorCode, kStatusErrorMsg);
  }
};

class CurlClientTest : public ::testing::Test,
                       public ::testing::WithParamInterface<std::string> {
 protected:
  CurlClientTest() : endpoint_("CLOUD_STORAGE_EMULATOR_ENDPOINT", {}) {}

  void SetUp() override {
    std::string const error_type = GetParam();
    if (error_type == "credentials-failure") {
      options_ = Options{}.set<Oauth2CredentialsOption>(
          std::make_shared<FailingCredentials>());
      client_ = std::make_unique<CurlClient>(options_);
      // We know exactly what error to expect, so setup the assertions to be
      // very strict.
      check_status_ = [](Status const& actual) {
        EXPECT_THAT(actual,
                    StatusIs(kStatusErrorCode, HasSubstr(kStatusErrorMsg)));
      };
    } else if (error_type == "libcurl-failure") {
      google::cloud::testing_util::SetEnv("CLOUD_STORAGE_EMULATOR_ENDPOINT",
                                          "http://localhost:1");
      options_ = Options{}
                     .set<Oauth2CredentialsOption>(
                         oauth2::CreateAnonymousCredentials())
                     .set<RestEndpointOption>("http://localhost:1");
      client_ = std::make_unique<CurlClient>(options_);
      // We do not know what libcurl will return. Some kind of error, but varies
      // by version of libcurl. Just make sure it is an error and the CURL
      // details are included in the error message.
      check_status_ = [](Status const& actual) {
        EXPECT_THAT(actual,
                    StatusIs(Not(StatusCode::kOk), HasSubstr("CURL error")));
      };
    } else {
      FAIL() << "Invalid test parameter value: " << error_type
             << ", expected either credentials-failure or libcurl-failure";
    }
  }

  void CheckStatus(Status const& actual) { check_status_(actual); }

  void TearDown() override { client_.reset(); }

  Options options_;
  std::unique_ptr<CurlClient> client_;
  std::function<void(Status const& status)> check_status_;
  testing_util::ScopedEnvironment endpoint_;
};

TEST(CurlClientStandaloneFunctions, HostHeader) {
  struct Test {
    std::string endpoint;
    std::string authority;
    std::string service;
    std::string expected;
  } cases[] = {
      {"https://storage.googleapis.com", "", "storage",
       "Host: storage.googleapis.com"},
      {"https://storage.googleapis.com", "auth", "storage", "Host: auth"},
      {"https://storage.googleapis.com:443", "", "storage",
       "Host: storage.googleapis.com"},
      {"https://restricted.googleapis.com", "", "storage",
       "Host: storage.googleapis.com"},
      {"https://private.googleapis.com", "", "storage",
       "Host: storage.googleapis.com"},
      {"https://restricted.googleapis.com", "", "iamcredentials",
       "Host: iamcredentials.googleapis.com"},
      {"https://private.googleapis.com", "", "iamcredentials",
       "Host: iamcredentials.googleapis.com"},
      {"http://localhost:8080", "", "", ""},
      {"http://localhost:8080", "auth", "", "Host: auth"},
      {"http://[::1]", "", "", ""},
      {"http://[::1]/", "", "", ""},
      {"http://[::1]/foo/bar", "", "", ""},
      {"http://[::1]:8080/", "", "", ""},
      {"http://[::1]:8080/foo/bar", "", "", ""},
      {"http://localhost:8080", "", "", ""},
      {"https://storage-download.127.0.0.1.nip.io/xmlapi/", "", "", ""},
      {"https://gcs.127.0.0.1.nip.io/storage/v1/", "", "", ""},
      {"https://gcs.127.0.0.1.nip.io:4443/upload/storage/v1/", "", "", ""},
      {"https://gcs.127.0.0.1.nip.io:4443/upload/storage/v1/", "", "", ""},
  };

  for (auto const& test : cases) {
    SCOPED_TRACE("Testing for " + test.endpoint + ", " + test.service);
    auto options = Options{}.set<RestEndpointOption>(test.endpoint);
    if (!test.authority.empty()) options.set<AuthorityOption>(test.authority);
    auto const actual = HostHeader(options, test.service.c_str());
    EXPECT_EQ(test.expected, actual);
  }
}

TEST_P(CurlClientTest, UploadChunk) {
  // Use http://localhost:1 to force a libcurl failure
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->UploadChunk(context, options_,
                                  UploadChunkRequest(
                                      "http://localhost:1/invalid-session-id",
                                      0, {ConstBuffer{std::string{}}},
                                      internal::CreateNullHashFunction()))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, QueryResumableUpload) {
  // Use http://localhost:1 to force a libcurl failure
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->QueryResumableUpload(context, options_,
                                 QueryResumableUploadRequest(
                                     "http://localhost:9/invalid-session-id"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListBuckets) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_->ListBuckets(context, options_, ListBucketsRequest{"project_id"})
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CreateBucket) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->CreateBucket(context, options_,
                                   CreateBucketRequest(
                                       "bkt", BucketMetadata().set_name("bkt")))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetBucketMetadata) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->GetBucketMetadata(context, options_,
                                        GetBucketMetadataRequest("bkt"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteBucket) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_->DeleteBucket(context, options_, DeleteBucketRequest("bkt"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, UpdateBucket) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->UpdateBucket(context, options_,
                         UpdateBucketRequest(BucketMetadata().set_name("bkt")))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, PatchBucket) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->PatchBucket(context, options_,
                                  PatchBucketRequest(
                                      "bkt", BucketMetadata().set_name("bkt"),
                                      BucketMetadata().set_name("bkt")))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetNativeBucketIamPolicy) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->GetNativeBucketIamPolicy(context, options_,
                                               GetBucketIamPolicyRequest("bkt"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, SetNativeBucketIamPolicy) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->SetNativeBucketIamPolicy(
              context, options_,
              SetNativeBucketIamPolicyRequest(
                  "bkt", NativeIamPolicy(std::vector<NativeIamBinding>())))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, TestBucketIamPermissions) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->TestBucketIamPermissions(context, options_,
                                     TestBucketIamPermissionsRequest("bkt", {}))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, LockBucketRetentionPolicy) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->LockBucketRetentionPolicy(
              context, options_, LockBucketRetentionPolicyRequest("bkt", 0))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, InsertObjectMediaSimple) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->InsertObjectMedia(
                        context, options_,
                        InsertObjectMediaRequest("bkt", "obj", "contents")
                            .set_multiple_options(DisableMD5Hash(true),
                                                  DisableCrc32cChecksum(true)))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, InsertObjectMediaMultipart) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->InsertObjectMedia(
                        context, options_,
                        InsertObjectMediaRequest("bkt", "obj", "contents"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetObjectMetadata) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->GetObjectMetadata(context, options_,
                                        GetObjectMetadataRequest("bkt", "obj"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ReadObjectJson) {
  auto context = rest_internal::RestContext{};
  if (GetParam() == "libcurl-failure") GTEST_SKIP();
  auto actual =
      client_
          ->ReadObject(context, options_,
                       ReadObjectRangeRequest("bkt", "obj")
                           .set_multiple_options(IfGenerationNotMatch(0)))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListObjects) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_->ListObjects(context, options_, ListObjectsRequest("bkt"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteObject) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->DeleteObject(context, options_, DeleteObjectRequest("bkt", "obj"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, UpdateObject) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->UpdateObject(context, options_,
                         UpdateObjectRequest("bkt", "obj", ObjectMetadata()))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, PatchObject) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->PatchObject(context, options_,
                        PatchObjectRequest("bkt", "obj", ObjectMetadata(),
                                           ObjectMetadata()))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ComposeObject) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->ComposeObject(context, options_,
                                    ComposeObjectRequest("bkt", {}, "obj"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListBucketAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_->ListBucketAcl(context, options_, ListBucketAclRequest("bkt"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CopyObject) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->CopyObject(context, options_,
                       CopyObjectRequest("bkt", "obj1", "bkt", "obj2"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CreateBucketAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->CreateBucketAcl(context, options_,
                            CreateBucketAclRequest("bkt", "entity", "role"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetBucketAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->GetBucketAcl(context, options_,
                                   GetBucketAclRequest("bkt", "entity"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteBucketAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->DeleteBucketAcl(context, options_,
                                      DeleteBucketAclRequest("bkt", "entity"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, UpdateBucketAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->UpdateBucketAcl(context, options_,
                            UpdateBucketAclRequest("bkt", "entity", "role"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, PatchBucketAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->PatchBucketAcl(context, options_,
                                     PatchBucketAclRequest(
                                         "bkt", "entity", BucketAccessControl(),
                                         BucketAccessControl()))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->ListObjectAcl(context, options_, ListObjectAclRequest("bkt", "obj"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CreateObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->CreateObjectAcl(
                        context, options_,
                        CreateObjectAclRequest("bkt", "obj", "entity", "role"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->DeleteObjectAcl(context, options_,
                            DeleteObjectAclRequest("bkt", "obj", "entity"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->GetObjectAcl(context, options_,
                                   GetObjectAclRequest("bkt", "obj", "entity"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, UpdateObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->UpdateObjectAcl(
                        context, options_,
                        UpdateObjectAclRequest("bkt", "obj", "entity", "role"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, PatchObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->PatchObjectAcl(context, options_,
                           PatchObjectAclRequest("bkt", "obj", "entity",
                                                 ObjectAccessControl(),
                                                 ObjectAccessControl()))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, RewriteObject) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->RewriteObject(context, options_,
                                    RewriteObjectRequest("bkt", "obj", "bkt2",
                                                         "obj2", "token"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CreateResumableUpload) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->CreateResumableUpload(
                        context, options_,
                        ResumableUploadRequest("test-bucket", "test-object"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteResumableUpload) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->DeleteResumableUpload(
                        context, options_,
                        DeleteResumableUploadRequest("test-upload-session-url"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListDefaultObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->ListDefaultObjectAcl(context, options_,
                                           ListDefaultObjectAclRequest("bkt"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CreateDefaultObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->CreateDefaultObjectAcl(
                        context, options_,
                        CreateDefaultObjectAclRequest("bkt", "entity", "role"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteDefaultObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->DeleteDefaultObjectAcl(
              context, options_, DeleteDefaultObjectAclRequest("bkt", "entity"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetDefaultObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->GetDefaultObjectAcl(context, options_,
                                GetDefaultObjectAclRequest("bkt", "entity"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, UpdateDefaultObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->UpdateDefaultObjectAcl(
                        context, options_,
                        UpdateDefaultObjectAclRequest("bkt", "entity", "role"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, PatchDefaultObjectAcl) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->PatchDefaultObjectAcl(context, options_,
                                  PatchDefaultObjectAclRequest(
                                      "bkt", "entity", ObjectAccessControl(),
                                      ObjectAccessControl()))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetServiceAccount) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->GetServiceAccount(context, options_,
                              GetProjectServiceAccountRequest("project_id"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListHmacKeyRequest) {
  auto context = rest_internal::RestContext{};
  auto status =
      client_
          ->ListHmacKeys(context, options_, ListHmacKeysRequest("project_id"))
          .status();
  CheckStatus(status);
}

TEST_P(CurlClientTest, CreateHmacKeyRequest) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->CreateHmacKey(context, options_,
                          CreateHmacKeyRequest("project_id", "service-account"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, SignBlob) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->SignBlob(context, options_,
                     SignBlobRequest("test-service-account", "test-blob", {}))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, ListNotifications) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->ListNotifications(context, options_,
                                        ListNotificationsRequest("bkt"))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, CreateNotification) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->CreateNotification(context, options_,
                                         CreateNotificationRequest(
                                             "bkt", NotificationMetadata()))
                    .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, GetNotification) {
  auto context = rest_internal::RestContext{};
  auto actual =
      client_
          ->GetNotification(context, options_,
                            GetNotificationRequest("bkt", "notification_id"))
          .status();
  CheckStatus(actual);
}

TEST_P(CurlClientTest, DeleteNotification) {
  auto context = rest_internal::RestContext{};
  auto actual = client_
                    ->DeleteNotification(
                        context, options_,
                        DeleteNotificationRequest("bkt", "notification_id"))
                    .status();
  CheckStatus(actual);
}

INSTANTIATE_TEST_SUITE_P(CredentialsFailure, CurlClientTest,
                         ::testing::Values("credentials-failure"));

INSTANTIATE_TEST_SUITE_P(LibCurlFailure, CurlClientTest,
                         ::testing::Values("libcurl-failure"));

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google
