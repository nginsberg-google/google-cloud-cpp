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

#include "google/cloud/vision/v1/internal/image_annotator_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ImageAnnotatorTracingConnection::ImageAnnotatorTracingConnection(
    std::shared_ptr<vision_v1::ImageAnnotatorConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
ImageAnnotatorTracingConnection::BatchAnnotateImages(
    google::cloud::vision::v1::BatchAnnotateImagesRequest const& request) {
  auto span = internal::MakeSpan(
      "vision_v1::ImageAnnotatorConnection::BatchAnnotateImages");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->BatchAnnotateImages(request));
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
ImageAnnotatorTracingConnection::BatchAnnotateFiles(
    google::cloud::vision::v1::BatchAnnotateFilesRequest const& request) {
  auto span = internal::MakeSpan(
      "vision_v1::ImageAnnotatorConnection::BatchAnnotateFiles");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->BatchAnnotateFiles(request));
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
ImageAnnotatorTracingConnection::AsyncBatchAnnotateImages(
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request) {
  auto span = internal::MakeSpan(
      "vision_v1::ImageAnnotatorConnection::AsyncBatchAnnotateImages");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AsyncBatchAnnotateImages(request));
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
ImageAnnotatorTracingConnection::AsyncBatchAnnotateFiles(
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request) {
  auto span = internal::MakeSpan(
      "vision_v1::ImageAnnotatorConnection::AsyncBatchAnnotateFiles");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AsyncBatchAnnotateFiles(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<vision_v1::ImageAnnotatorConnection>
MakeImageAnnotatorTracingConnection(
    std::shared_ptr<vision_v1::ImageAnnotatorConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ImageAnnotatorTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
