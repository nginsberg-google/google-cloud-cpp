// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/resourcemanager/v3/tag_values.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_TAG_VALUES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_TAG_VALUES_CONNECTION_H

#include "google/cloud/resourcemanager/v3/tag_values_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace resourcemanager_v3_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TagValuesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TagValuesClient`. To do so,
 * construct an object of type `TagValuesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTagValuesConnection : public resourcemanager_v3::TagValuesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::resourcemanager::v3::TagValue>, ListTagValues,
      (google::cloud::resourcemanager::v3::ListTagValuesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::resourcemanager::v3::TagValue>, GetTagValue,
      (google::cloud::resourcemanager::v3::GetTagValueRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::resourcemanager::v3::TagValue>,
      GetNamespacedTagValue,
      (google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::TagValue>>,
              CreateTagValue,
              (google::cloud::resourcemanager::v3::CreateTagValueRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::TagValue>>,
              UpdateTagValue,
              (google::cloud::resourcemanager::v3::UpdateTagValueRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::TagValue>>,
              DeleteTagValue,
              (google::cloud::resourcemanager::v3::DeleteTagValueRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_TAG_VALUES_CONNECTION_H
