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
// source: google/cloud/aiplatform/v1/index_service.proto

#include "google/cloud/aiplatform/v1/internal/index_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IndexServiceTracingConnection::IndexServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::IndexServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::Index>>
IndexServiceTracingConnection::CreateIndex(
    google::cloud::aiplatform::v1::CreateIndexRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::IndexServiceConnection::CreateIndex");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateIndex(request));
}

StatusOr<google::cloud::aiplatform::v1::Index>
IndexServiceTracingConnection::GetIndex(
    google::cloud::aiplatform::v1::GetIndexRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::IndexServiceConnection::GetIndex");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIndex(request));
}

StreamRange<google::cloud::aiplatform::v1::Index>
IndexServiceTracingConnection::ListIndexes(
    google::cloud::aiplatform::v1::ListIndexesRequest request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::IndexServiceConnection::ListIndexes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListIndexes(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::aiplatform::v1::Index>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::Index>>
IndexServiceTracingConnection::UpdateIndex(
    google::cloud::aiplatform::v1::UpdateIndexRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::IndexServiceConnection::UpdateIndex");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateIndex(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
IndexServiceTracingConnection::DeleteIndex(
    google::cloud::aiplatform::v1::DeleteIndexRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::IndexServiceConnection::DeleteIndex");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteIndex(request));
}

StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
IndexServiceTracingConnection::UpsertDatapoints(
    google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexServiceConnection::UpsertDatapoints");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpsertDatapoints(request));
}

StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
IndexServiceTracingConnection::RemoveDatapoints(
    google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexServiceConnection::RemoveDatapoints");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RemoveDatapoints(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::IndexServiceConnection>
MakeIndexServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::IndexServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<IndexServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
