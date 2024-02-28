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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/commerce/consumer/procurement/v1/procurement_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConsumerProcurementServiceStub::~ConsumerProcurementServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultConsumerProcurementServiceStub::AsyncPlaceOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::commerce::consumer::procurement::v1::
                 PlaceOrderRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPlaceOrder(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
DefaultConsumerProcurementServiceStub::GetOrder(
    grpc::ClientContext& context, Options const&,
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  google::cloud::commerce::consumer::procurement::v1::Order response;
  auto status = grpc_stub_->GetOrder(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse>
DefaultConsumerProcurementServiceStub::ListOrders(
    grpc::ClientContext& context, Options const&,
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest const&
        request) {
  google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse
      response;
  auto status = grpc_stub_->ListOrders(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConsumerProcurementServiceStub::AsyncGetOperation(
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

future<Status> DefaultConsumerProcurementServiceStub::AsyncCancelOperation(
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
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
