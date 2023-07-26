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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_TRACING_CONNECTION_H

#include "google/cloud/resourcemanager/v3/tag_values_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TagValuesTracingConnection
    : public resourcemanager_v3::TagValuesConnection {
 public:
  ~TagValuesTracingConnection() override = default;

  explicit TagValuesTracingConnection(
      std::shared_ptr<resourcemanager_v3::TagValuesConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::resourcemanager::v3::TagValue> ListTagValues(
      google::cloud::resourcemanager::v3::ListTagValuesRequest request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagValue> GetTagValue(
      google::cloud::resourcemanager::v3::GetTagValueRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagValue> GetNamespacedTagValue(
      google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
          request) override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagValue>> CreateTagValue(
      google::cloud::resourcemanager::v3::CreateTagValueRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagValue>> UpdateTagValue(
      google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagValue>> DeleteTagValue(
      google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<resourcemanager_v3::TagValuesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<resourcemanager_v3::TagValuesConnection>
MakeTagValuesTracingConnection(
    std::shared_ptr<resourcemanager_v3::TagValuesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_VALUES_TRACING_CONNECTION_H
