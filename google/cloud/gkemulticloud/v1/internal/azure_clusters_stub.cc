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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkemulticloud/v1/azure_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AzureClustersStub::~AzureClustersStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncCreateAzureClient(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::CreateAzureClientRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::CreateAzureClientRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAzureClient(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
DefaultAzureClustersStub::GetAzureClient(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request) {
  google::cloud::gkemulticloud::v1::AzureClient response;
  auto status = grpc_stub_->GetAzureClient(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureClientsResponse>
DefaultAzureClustersStub::ListAzureClients(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest const& request) {
  google::cloud::gkemulticloud::v1::ListAzureClientsResponse response;
  auto status = grpc_stub_->ListAzureClients(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncDeleteAzureClient(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::DeleteAzureClientRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAzureClient(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncCreateAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::CreateAzureClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAzureCluster(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncUpdateAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAzureCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
DefaultAzureClustersStub::GetAzureCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request) {
  google::cloud::gkemulticloud::v1::AzureCluster response;
  auto status = grpc_stub_->GetAzureCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureClustersResponse>
DefaultAzureClustersStub::ListAzureClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest const& request) {
  google::cloud::gkemulticloud::v1::ListAzureClustersResponse response;
  auto status = grpc_stub_->ListAzureClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncDeleteAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAzureCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<
    google::cloud::gkemulticloud::v1::GenerateAzureClusterAgentTokenResponse>
DefaultAzureClustersStub::GenerateAzureClusterAgentToken(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::
        GenerateAzureClusterAgentTokenRequest const& request) {
  google::cloud::gkemulticloud::v1::GenerateAzureClusterAgentTokenResponse
      response;
  auto status =
      grpc_stub_->GenerateAzureClusterAgentToken(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
DefaultAzureClustersStub::GenerateAzureAccessToken(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
        request) {
  google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse response;
  auto status =
      grpc_stub_->GenerateAzureAccessToken(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncCreateAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAzureNodePool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncUpdateAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAzureNodePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
DefaultAzureClustersStub::GetAzureNodePool(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request) {
  google::cloud::gkemulticloud::v1::AzureNodePool response;
  auto status = grpc_stub_->GetAzureNodePool(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureNodePoolsResponse>
DefaultAzureClustersStub::ListAzureNodePools(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest const&
        request) {
  google::cloud::gkemulticloud::v1::ListAzureNodePoolsResponse response;
  auto status = grpc_stub_->ListAzureNodePools(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncDeleteAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAzureNodePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AzureOpenIdConfig>
DefaultAzureClustersStub::GetAzureOpenIdConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAzureOpenIdConfigRequest const&
        request) {
  google::cloud::gkemulticloud::v1::AzureOpenIdConfig response;
  auto status = grpc_stub_->GetAzureOpenIdConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::AzureJsonWebKeys>
DefaultAzureClustersStub::GetAzureJsonWebKeys(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAzureJsonWebKeysRequest const&
        request) {
  google::cloud::gkemulticloud::v1::AzureJsonWebKeys response;
  auto status = grpc_stub_->GetAzureJsonWebKeys(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
DefaultAzureClustersStub::GetAzureServerConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
        request) {
  google::cloud::gkemulticloud::v1::AzureServerConfig response;
  auto status = grpc_stub_->GetAzureServerConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAzureClustersStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAzureClustersStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
