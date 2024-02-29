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
// source: google/cloud/compute/license_codes/v1/license_codes.proto

#include "google/cloud/compute/license_codes/v1/license_codes_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_license_codes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicenseCodesClient::LicenseCodesClient(
    std::shared_ptr<LicenseCodesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
LicenseCodesClient::~LicenseCodesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::LicenseCode>
LicenseCodesClient::GetLicenseCode(std::string const& project,
                                   std::string const& license_code,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::license_codes::v1::GetLicenseCodeRequest request;
  request.set_project(project);
  request.set_license_code(license_code);
  return connection_->GetLicenseCode(request);
}

StatusOr<google::cloud::cpp::compute::v1::LicenseCode>
LicenseCodesClient::GetLicenseCode(
    google::cloud::cpp::compute::license_codes::v1::GetLicenseCodeRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLicenseCode(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicenseCodesClient::TestIamPermissions(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::license_codes::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicenseCodesClient::TestIamPermissions(
    google::cloud::cpp::compute::license_codes::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_license_codes_v1
}  // namespace cloud
}  // namespace google
