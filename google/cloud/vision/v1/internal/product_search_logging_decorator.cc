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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/v1/internal/product_search_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vision/v1/product_search_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductSearchLogging::ProductSearchLogging(
    std::shared_ptr<ProductSearchStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchLogging::CreateProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::CreateProductSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::CreateProductSetRequest const& request) {
        return child_->CreateProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ListProductSetsResponse>
ProductSearchLogging::ListProductSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListProductSetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::ListProductSetsRequest const& request) {
        return child_->ListProductSets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchLogging::GetProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::GetProductSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::GetProductSetRequest const& request) {
        return child_->GetProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchLogging::UpdateProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::UpdateProductSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::UpdateProductSetRequest const& request) {
        return child_->UpdateProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ProductSearchLogging::DeleteProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::DeleteProductSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::DeleteProductSetRequest const& request) {
        return child_->DeleteProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchLogging::CreateProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::CreateProductRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::CreateProductRequest const& request) {
        return child_->CreateProduct(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ListProductsResponse>
ProductSearchLogging::ListProducts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListProductsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::ListProductsRequest const& request) {
        return child_->ListProducts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchLogging::GetProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::GetProductRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::GetProductRequest const& request) {
        return child_->GetProduct(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchLogging::UpdateProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::UpdateProductRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::UpdateProductRequest const& request) {
        return child_->UpdateProduct(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ProductSearchLogging::DeleteProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::DeleteProductRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::DeleteProductRequest const& request) {
        return child_->DeleteProduct(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchLogging::CreateReferenceImage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::CreateReferenceImageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::CreateReferenceImageRequest const&
                 request) {
        return child_->CreateReferenceImage(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ProductSearchLogging::DeleteReferenceImage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::DeleteReferenceImageRequest const&
                 request) {
        return child_->DeleteReferenceImage(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ListReferenceImagesResponse>
ProductSearchLogging::ListReferenceImages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListReferenceImagesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::ListReferenceImagesRequest const&
                 request) {
        return child_->ListReferenceImages(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchLogging::GetReferenceImage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::GetReferenceImageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::GetReferenceImageRequest const& request) {
        return child_->GetReferenceImage(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ProductSearchLogging::AddProductToProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::AddProductToProductSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::AddProductToProductSetRequest const&
                 request) {
        return child_->AddProductToProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ProductSearchLogging::RemoveProductFromProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
              request) {
        return child_->RemoveProductFromProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::vision::v1::ListProductsInProductSetResponse>
ProductSearchLogging::ListProductsInProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListProductsInProductSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::ListProductsInProductSetRequest const&
                 request) {
        return child_->ListProductsInProductSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchLogging::AsyncImportProductSets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::vision::v1::ImportProductSetsRequest const& request) {
        return child_->AsyncImportProductSets(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchLogging::AsyncPurgeProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::vision::v1::PurgeProductsRequest const& request) {
        return child_->AsyncPurgeProducts(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> ProductSearchLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
