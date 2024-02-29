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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/internal/config_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/config/v1/config.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigMetadata::ConfigMetadata(
    std::shared_ptr<ConfigStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::config::v1::ListDeploymentsResponse>
ConfigMetadata::ListDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListDeploymentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDeployments(context, options, request);
}

StatusOr<google::cloud::config::v1::Deployment> ConfigMetadata::GetDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncCreateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDeployment(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncUpdateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("deployment.name=",
                           internal::UrlEncode(request.deployment().name())));
  return child_->AsyncUpdateDeployment(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncDeleteDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDeployment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::cloud::config::v1::ListRevisionsResponse>
ConfigMetadata::ListRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListRevisionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRevisions(context, options, request);
}

StatusOr<google::cloud::config::v1::Revision> ConfigMetadata::GetRevision(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetRevisionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRevision(context, options, request);
}

StatusOr<google::cloud::config::v1::Resource> ConfigMetadata::GetResource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetResourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetResource(context, options, request);
}

StatusOr<google::cloud::config::v1::ListResourcesResponse>
ConfigMetadata::ListResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListResourcesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListResources(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigMetadata::ExportDeploymentStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportDeploymentStatefile(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigMetadata::ExportRevisionStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportRevisionStatefile(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile> ConfigMetadata::ImportStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportStatefile(context, options, request);
}

Status ConfigMetadata::DeleteStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteStatefile(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncLockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncLockDeployment(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncUnlockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUnlockDeployment(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::cloud::config::v1::LockInfo> ConfigMetadata::ExportLockInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ExportLockInfo(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncCreatePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreatePreview(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::cloud::config::v1::Preview> ConfigMetadata::GetPreview(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetPreviewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPreview(context, options, request);
}

StatusOr<google::cloud::config::v1::ListPreviewsResponse>
ConfigMetadata::ListPreviews(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListPreviewsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPreviews(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncDeletePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePreview(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
ConfigMetadata::ExportPreviewResult(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportPreviewResultRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExportPreviewResult(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ConfigMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ConfigMetadata::SetMetadata(grpc::ClientContext& context,
                                 Options const& options,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ConfigMetadata::SetMetadata(grpc::ClientContext& context,
                                 Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
