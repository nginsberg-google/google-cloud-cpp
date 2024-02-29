// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminRestMetadata::InstanceAdminRestMetadata(
    std::shared_ptr<InstanceAdminRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
InstanceAdminRestMetadata::ListInstanceConfigs(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListInstanceConfigs(rest_context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminRestMetadata::GetInstanceConfig(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetInstanceConfig(rest_context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncCreateInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCreateInstanceConfig(cq, std::move(rest_context),
                                           std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncUpdateInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateInstanceConfig(cq, std::move(rest_context),
                                           std::move(options), request);
}

Status InstanceAdminRestMetadata::DeleteInstanceConfig(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteInstanceConfig(rest_context, options, request);
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
InstanceAdminRestMetadata::ListInstanceConfigOperations(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListInstanceConfigOperations(rest_context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
InstanceAdminRestMetadata::ListInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListInstances(rest_context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancePartitionsResponse>
InstanceAdminRestMetadata::ListInstancePartitions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::ListInstancePartitionsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListInstancePartitions(rest_context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminRestMetadata::GetInstance(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetInstance(rest_context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncCreateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCreateInstance(cq, std::move(rest_context),
                                     std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncUpdateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateInstance(cq, std::move(rest_context),
                                     std::move(options), request);
}

Status InstanceAdminRestMetadata::DeleteInstance(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteInstance(rest_context, options, request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

StatusOr<google::spanner::admin::instance::v1::InstancePartition>
InstanceAdminRestMetadata::GetInstancePartition(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetInstancePartition(rest_context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncCreateInstancePartition(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCreateInstancePartition(cq, std::move(rest_context),
                                              std::move(options), request);
}

Status InstanceAdminRestMetadata::DeleteInstancePartition(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::DeleteInstancePartitionRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteInstancePartition(rest_context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncUpdateInstancePartition(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateInstancePartition(cq, std::move(rest_context),
                                              std::move(options), request);
}

StatusOr<google::spanner::admin::instance::v1::
             ListInstancePartitionOperationsResponse>
InstanceAdminRestMetadata::ListInstancePartitionOperations(
    rest_internal::RestContext& rest_context, Options const& options,
    google::spanner::admin::instance::v1::
        ListInstancePartitionOperationsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListInstancePartitionOperations(rest_context, options,
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> InstanceAdminRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void InstanceAdminRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
