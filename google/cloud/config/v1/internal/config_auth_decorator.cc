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

#include "google/cloud/config/v1/internal/config_auth_decorator.h"
#include <google/cloud/config/v1/config.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigAuth::ConfigAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConfigStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::config::v1::ListDeploymentsResponse>
ConfigAuth::ListDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListDeploymentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDeployments(context, options, request);
}

StatusOr<google::cloud::config::v1::Deployment> ConfigAuth::GetDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigAuth::AsyncCreateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateDeployment(cq, *std::move(context),
                                            std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConfigAuth::AsyncUpdateDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateDeployment(cq, *std::move(context),
                                            std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConfigAuth::AsyncDeleteDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteDeployment(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::cloud::config::v1::ListRevisionsResponse>
ConfigAuth::ListRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListRevisionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRevisions(context, options, request);
}

StatusOr<google::cloud::config::v1::Revision> ConfigAuth::GetRevision(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetRevisionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRevision(context, options, request);
}

StatusOr<google::cloud::config::v1::Resource> ConfigAuth::GetResource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetResourceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetResource(context, options, request);
}

StatusOr<google::cloud::config::v1::ListResourcesResponse>
ConfigAuth::ListResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListResourcesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListResources(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigAuth::ExportDeploymentStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportDeploymentStatefile(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigAuth::ExportRevisionStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportRevisionStatefile(context, options, request);
}

StatusOr<google::cloud::config::v1::Statefile> ConfigAuth::ImportStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportStatefile(context, options, request);
}

Status ConfigAuth::DeleteStatefile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteStatefile(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigAuth::AsyncLockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncLockDeployment(cq, *std::move(context),
                                          std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConfigAuth::AsyncUnlockDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUnlockDeployment(cq, *std::move(context),
                                            std::move(options), request);
      });
}

StatusOr<google::cloud::config::v1::LockInfo> ConfigAuth::ExportLockInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportLockInfo(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> ConfigAuth::AsyncCreatePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreatePreview(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::cloud::config::v1::Preview> ConfigAuth::GetPreview(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::GetPreviewRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPreview(context, options, request);
}

StatusOr<google::cloud::config::v1::ListPreviewsResponse>
ConfigAuth::ListPreviews(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ListPreviewsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPreviews(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> ConfigAuth::AsyncDeletePreview(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeletePreview(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
ConfigAuth::ExportPreviewResult(
    grpc::ClientContext& context, Options const& options,
    google::cloud::config::v1::ExportPreviewResultRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportPreviewResult(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> ConfigAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> ConfigAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
