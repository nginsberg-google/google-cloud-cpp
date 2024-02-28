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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/featurestore_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeaturestoreServiceStub::~FeaturestoreServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncCreateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateFeaturestoreRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFeaturestore(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
DefaultFeaturestoreServiceStub::GetFeaturestore(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  google::cloud::aiplatform::v1::Featurestore response;
  auto status = grpc_stub_->GetFeaturestore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
DefaultFeaturestoreServiceStub::ListFeaturestores(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListFeaturestoresRequest const& request) {
  google::cloud::aiplatform::v1::ListFeaturestoresResponse response;
  auto status = grpc_stub_->ListFeaturestores(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncUpdateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFeaturestore(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncDeleteFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFeaturestore(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncCreateEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateEntityTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEntityType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
DefaultFeaturestoreServiceStub::GetEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  google::cloud::aiplatform::v1::EntityType response;
  auto status = grpc_stub_->GetEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
DefaultFeaturestoreServiceStub::ListEntityTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListEntityTypesRequest const& request) {
  google::cloud::aiplatform::v1::ListEntityTypesResponse response;
  auto status = grpc_stub_->ListEntityTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
DefaultFeaturestoreServiceStub::UpdateEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  google::cloud::aiplatform::v1::EntityType response;
  auto status = grpc_stub_->UpdateEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncDeleteEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEntityType(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateFeatureRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateFeatureRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFeature(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncBatchCreateFeatures(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateFeatures(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
DefaultFeaturestoreServiceStub::GetFeature(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  google::cloud::aiplatform::v1::Feature response;
  auto status = grpc_stub_->GetFeature(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse>
DefaultFeaturestoreServiceStub::ListFeatures(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListFeaturesRequest const& request) {
  google::cloud::aiplatform::v1::ListFeaturesResponse response;
  auto status = grpc_stub_->ListFeatures(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Feature>
DefaultFeaturestoreServiceStub::UpdateFeature(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  google::cloud::aiplatform::v1::Feature response;
  auto status = grpc_stub_->UpdateFeature(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteFeatureRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteFeatureRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFeature(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncImportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::ImportFeatureValuesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportFeatureValues(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncBatchReadFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchReadFeatureValues(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncExportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::ExportFeatureValuesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportFeatureValues(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncDeleteFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFeatureValues(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
DefaultFeaturestoreServiceStub::SearchFeatures(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::SearchFeaturesRequest const& request) {
  google::cloud::aiplatform::v1::SearchFeaturesResponse response;
  auto status = grpc_stub_->SearchFeatures(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFeaturestoreServiceStub::AsyncGetOperation(
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

future<Status> DefaultFeaturestoreServiceStub::AsyncCancelOperation(
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
