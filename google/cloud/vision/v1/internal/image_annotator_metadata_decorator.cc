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
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/v1/internal/image_annotator_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vision/v1/image_annotator.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageAnnotatorMetadata::ImageAnnotatorMetadata(
    std::shared_ptr<ImageAnnotatorStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
ImageAnnotatorMetadata::BatchAnnotateImages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::BatchAnnotateImagesRequest const& request) {
  SetMetadata(context, options);
  return child_->BatchAnnotateImages(context, options, request);
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
ImageAnnotatorMetadata::BatchAnnotateFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::BatchAnnotateFilesRequest const& request) {
  SetMetadata(context, options);
  return child_->BatchAnnotateFiles(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ImageAnnotatorMetadata::AsyncAsyncBatchAnnotateImages(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request) {
  SetMetadata(*context, *options);
  return child_->AsyncAsyncBatchAnnotateImages(cq, std::move(context),
                                               std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ImageAnnotatorMetadata::AsyncAsyncBatchAnnotateFiles(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request) {
  SetMetadata(*context, *options);
  return child_->AsyncAsyncBatchAnnotateFiles(cq, std::move(context),
                                              std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ImageAnnotatorMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ImageAnnotatorMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ImageAnnotatorMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ImageAnnotatorMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
