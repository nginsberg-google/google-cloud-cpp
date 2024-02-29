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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_auth_decorator.h"
#include <google/cloud/gkemulticloud/v1/attached_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AttachedClustersAuth::AttachedClustersAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AttachedClustersStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersAuth::AsyncCreateAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAttachedCluster(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersAuth::AsyncUpdateAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAttachedCluster(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersAuth::AsyncImportAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncImportAttachedCluster(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersAuth::GetAttachedCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAttachedCluster(context, options, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAttachedClustersResponse>
AttachedClustersAuth::ListAttachedClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAttachedClusters(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersAuth::AsyncDeleteAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAttachedCluster(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
AttachedClustersAuth::GetAttachedServerConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAttachedServerConfig(context, options, request);
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
AttachedClustersAuth::GenerateAttachedClusterInstallManifest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterInstallManifestRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateAttachedClusterInstallManifest(context, options,
                                                        request);
}

StatusOr<
    google::cloud::gkemulticloud::v1::GenerateAttachedClusterAgentTokenResponse>
AttachedClustersAuth::GenerateAttachedClusterAgentToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterAgentTokenRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateAttachedClusterAgentToken(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersAuth::AsyncGetOperation(
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

future<Status> AttachedClustersAuth::AsyncCancelOperation(
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
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
