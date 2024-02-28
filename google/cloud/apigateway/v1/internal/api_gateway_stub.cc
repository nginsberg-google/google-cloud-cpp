// Copyright 2022 Google LLC
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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/v1/internal/api_gateway_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/apigateway/v1/apigateway_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apigateway_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiGatewayServiceStub::~ApiGatewayServiceStub() = default;

StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>
DefaultApiGatewayServiceStub::ListGateways(
    grpc::ClientContext& context, Options const&,
    google::cloud::apigateway::v1::ListGatewaysRequest const& request) {
  google::cloud::apigateway::v1::ListGatewaysResponse response;
  auto status = grpc_stub_->ListGateways(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apigateway::v1::Gateway>
DefaultApiGatewayServiceStub::GetGateway(
    grpc::ClientContext& context, Options const&,
    google::cloud::apigateway::v1::GetGatewayRequest const& request) {
  google::cloud::apigateway::v1::Gateway response;
  auto status = grpc_stub_->GetGateway(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::CreateGatewayRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apigateway::v1::CreateGatewayRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGateway(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::UpdateGatewayRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apigateway::v1::UpdateGatewayRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGateway(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::DeleteGatewayRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apigateway::v1::DeleteGatewayRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGateway(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::apigateway::v1::ListApisResponse>
DefaultApiGatewayServiceStub::ListApis(
    grpc::ClientContext& context, Options const&,
    google::cloud::apigateway::v1::ListApisRequest const& request) {
  google::cloud::apigateway::v1::ListApisResponse response;
  auto status = grpc_stub_->ListApis(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apigateway::v1::Api>
DefaultApiGatewayServiceStub::GetApi(
    grpc::ClientContext& context, Options const&,
    google::cloud::apigateway::v1::GetApiRequest const& request) {
  google::cloud::apigateway::v1::Api response;
  auto status = grpc_stub_->GetApi(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncCreateApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::CreateApiRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::CreateApiRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apigateway::v1::CreateApiRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateApi(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncUpdateApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::UpdateApiRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::UpdateApiRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apigateway::v1::UpdateApiRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateApi(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncDeleteApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::DeleteApiRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::DeleteApiRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::apigateway::v1::DeleteApiRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteApi(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
DefaultApiGatewayServiceStub::ListApiConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::apigateway::v1::ListApiConfigsRequest const& request) {
  google::cloud::apigateway::v1::ListApiConfigsResponse response;
  auto status = grpc_stub_->ListApiConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
DefaultApiGatewayServiceStub::GetApiConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
  google::cloud::apigateway::v1::ApiConfig response;
  auto status = grpc_stub_->GetApiConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncCreateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::CreateApiConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::CreateApiConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::apigateway::v1::CreateApiConfigRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateApiConfig(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncUpdateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::UpdateApiConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::apigateway::v1::UpdateApiConfigRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateApiConfig(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncDeleteApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::apigateway::v1::DeleteApiConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::apigateway::v1::DeleteApiConfigRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteApiConfig(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiGatewayServiceStub::AsyncGetOperation(
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

future<Status> DefaultApiGatewayServiceStub::AsyncCancelOperation(
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
}  // namespace apigateway_v1_internal
}  // namespace cloud
}  // namespace google
