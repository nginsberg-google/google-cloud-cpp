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
// source: google/cloud/functions/v2/functions.proto

#include "google/cloud/functions/v2/internal/function_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/functions/v2/functions.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace functions_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FunctionServiceStub::~FunctionServiceStub() = default;

StatusOr<google::cloud::functions::v2::Function>
DefaultFunctionServiceStub::GetFunction(
    grpc::ClientContext& context,
    google::cloud::functions::v2::GetFunctionRequest const& request) {
  google::cloud::functions::v2::Function response;
  auto status = grpc_stub_->GetFunction(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::functions::v2::ListFunctionsResponse>
DefaultFunctionServiceStub::ListFunctions(
    grpc::ClientContext& context,
    google::cloud::functions::v2::ListFunctionsRequest const& request) {
  google::cloud::functions::v2::ListFunctionsResponse response;
  auto status = grpc_stub_->ListFunctions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFunctionServiceStub::AsyncCreateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::functions::v2::CreateFunctionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::functions::v2::CreateFunctionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::functions::v2::CreateFunctionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFunction(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFunctionServiceStub::AsyncUpdateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::functions::v2::UpdateFunctionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::functions::v2::UpdateFunctionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::functions::v2::UpdateFunctionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFunction(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFunctionServiceStub::AsyncDeleteFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::functions::v2::DeleteFunctionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::functions::v2::DeleteFunctionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::functions::v2::DeleteFunctionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFunction(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::functions::v2::GenerateUploadUrlResponse>
DefaultFunctionServiceStub::GenerateUploadUrl(
    grpc::ClientContext& context,
    google::cloud::functions::v2::GenerateUploadUrlRequest const& request) {
  google::cloud::functions::v2::GenerateUploadUrlResponse response;
  auto status = grpc_stub_->GenerateUploadUrl(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::functions::v2::GenerateDownloadUrlResponse>
DefaultFunctionServiceStub::GenerateDownloadUrl(
    grpc::ClientContext& context,
    google::cloud::functions::v2::GenerateDownloadUrlRequest const& request) {
  google::cloud::functions::v2::GenerateDownloadUrlResponse response;
  auto status = grpc_stub_->GenerateDownloadUrl(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::functions::v2::ListRuntimesResponse>
DefaultFunctionServiceStub::ListRuntimes(
    grpc::ClientContext& context,
    google::cloud::functions::v2::ListRuntimesRequest const& request) {
  google::cloud::functions::v2::ListRuntimesResponse response;
  auto status = grpc_stub_->ListRuntimes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFunctionServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
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

future<Status> DefaultFunctionServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
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
}  // namespace functions_v2_internal
}  // namespace cloud
}  // namespace google
