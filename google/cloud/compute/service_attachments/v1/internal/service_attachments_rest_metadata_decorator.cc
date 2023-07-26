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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceAttachmentsRestMetadata::ServiceAttachmentsRestMetadata(
    std::shared_ptr<ServiceAttachmentsRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentAggregatedList>
ServiceAttachmentsRestMetadata::AggregatedListServiceAttachments(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        AggregatedListServiceAttachmentsRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListServiceAttachments(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsRestMetadata::AsyncDeleteServiceAttachments(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        DeleteServiceAttachmentsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteServiceAttachments(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsRestMetadata::GetServiceAttachments(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        GetServiceAttachmentsRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetServiceAttachments(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsRestMetadata::AsyncInsertServiceAttachments(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        InsertServiceAttachmentsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertServiceAttachments(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentList>
ServiceAttachmentsRestMetadata::ListServiceAttachments(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        ListServiceAttachmentsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListServiceAttachments(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsRestMetadata::AsyncPatchServiceAttachments(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        PatchServiceAttachmentsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchServiceAttachments(cq, std::move(rest_context),
                                              request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ServiceAttachmentsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::service_attachments::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> ServiceAttachmentsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void ServiceAttachmentsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
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
}  // namespace compute_service_attachments_v1_internal
}  // namespace cloud
}  // namespace google
