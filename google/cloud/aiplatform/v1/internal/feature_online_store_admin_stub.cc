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
// source: google/cloud/aiplatform/v1/feature_online_store_admin_service.proto

#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/feature_online_store_admin_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeatureOnlineStoreAdminServiceStub::~FeatureOnlineStoreAdminServiceStub() =
    default;

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncCreateFeatureOnlineStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFeatureOnlineStore(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>
DefaultFeatureOnlineStoreAdminServiceStub::GetFeatureOnlineStore(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
        request) {
  google::cloud::aiplatform::v1::FeatureOnlineStore response;
  auto status = grpc_stub_->GetFeatureOnlineStore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListFeatureOnlineStoresResponse>
DefaultFeatureOnlineStoreAdminServiceStub::ListFeatureOnlineStores(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest const&
        request) {
  google::cloud::aiplatform::v1::ListFeatureOnlineStoresResponse response;
  auto status =
      grpc_stub_->ListFeatureOnlineStores(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncUpdateFeatureOnlineStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFeatureOnlineStore(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncDeleteFeatureOnlineStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFeatureOnlineStore(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncCreateFeatureView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateFeatureViewRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateFeatureViewRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFeatureView(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::FeatureView>
DefaultFeatureOnlineStoreAdminServiceStub::GetFeatureView(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetFeatureViewRequest const& request) {
  google::cloud::aiplatform::v1::FeatureView response;
  auto status = grpc_stub_->GetFeatureView(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListFeatureViewsResponse>
DefaultFeatureOnlineStoreAdminServiceStub::ListFeatureViews(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListFeatureViewsRequest const& request) {
  google::cloud::aiplatform::v1::ListFeatureViewsResponse response;
  auto status = grpc_stub_->ListFeatureViews(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncUpdateFeatureView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateFeatureViewRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::UpdateFeatureViewRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFeatureView(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncDeleteFeatureView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteFeatureViewRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteFeatureViewRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFeatureView(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::SyncFeatureViewResponse>
DefaultFeatureOnlineStoreAdminServiceStub::SyncFeatureView(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::SyncFeatureViewRequest const& request) {
  google::cloud::aiplatform::v1::SyncFeatureViewResponse response;
  auto status = grpc_stub_->SyncFeatureView(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::FeatureViewSync>
DefaultFeatureOnlineStoreAdminServiceStub::GetFeatureViewSync(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const& request) {
  google::cloud::aiplatform::v1::FeatureViewSync response;
  auto status = grpc_stub_->GetFeatureViewSync(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListFeatureViewSyncsResponse>
DefaultFeatureOnlineStoreAdminServiceStub::ListFeatureViewSyncs(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest const& request) {
  google::cloud::aiplatform::v1::ListFeatureViewSyncsResponse response;
  auto status = grpc_stub_->ListFeatureViewSyncs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeatureOnlineStoreAdminServiceStub::AsyncGetOperation(
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

future<Status> DefaultFeatureOnlineStoreAdminServiceStub::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
