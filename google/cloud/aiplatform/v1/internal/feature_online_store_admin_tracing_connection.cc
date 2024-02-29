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

#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FeatureOnlineStoreAdminServiceTracingConnection::
    FeatureOnlineStoreAdminServiceTracingConnection(
        std::shared_ptr<aiplatform_v1::FeatureOnlineStoreAdminServiceConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
FeatureOnlineStoreAdminServiceTracingConnection::CreateFeatureOnlineStore(
    google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "CreateFeatureOnlineStore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateFeatureOnlineStore(request));
}

StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>
FeatureOnlineStoreAdminServiceTracingConnection::GetFeatureOnlineStore(
    google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "GetFeatureOnlineStore");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeatureOnlineStore(request));
}

StreamRange<google::cloud::aiplatform::v1::FeatureOnlineStore>
FeatureOnlineStoreAdminServiceTracingConnection::ListFeatureOnlineStores(
    google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "ListFeatureOnlineStores");
  internal::OTelScope scope(span);
  auto sr = child_->ListFeatureOnlineStores(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::FeatureOnlineStore>(std::move(span),
                                                         std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>>
FeatureOnlineStoreAdminServiceTracingConnection::UpdateFeatureOnlineStore(
    google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "UpdateFeatureOnlineStore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateFeatureOnlineStore(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureOnlineStoreAdminServiceTracingConnection::DeleteFeatureOnlineStore(
    google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "DeleteFeatureOnlineStore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeatureOnlineStore(request));
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
FeatureOnlineStoreAdminServiceTracingConnection::CreateFeatureView(
    google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "CreateFeatureView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFeatureView(request));
}

StatusOr<google::cloud::aiplatform::v1::FeatureView>
FeatureOnlineStoreAdminServiceTracingConnection::GetFeatureView(
    google::cloud::aiplatform::v1::GetFeatureViewRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "GetFeatureView");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeatureView(request));
}

StreamRange<google::cloud::aiplatform::v1::FeatureView>
FeatureOnlineStoreAdminServiceTracingConnection::ListFeatureViews(
    google::cloud::aiplatform::v1::ListFeatureViewsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "ListFeatureViews");
  internal::OTelScope scope(span);
  auto sr = child_->ListFeatureViews(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::FeatureView>(std::move(span),
                                                  std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureView>>
FeatureOnlineStoreAdminServiceTracingConnection::UpdateFeatureView(
    google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "UpdateFeatureView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateFeatureView(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureOnlineStoreAdminServiceTracingConnection::DeleteFeatureView(
    google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "DeleteFeatureView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFeatureView(request));
}

StatusOr<google::cloud::aiplatform::v1::SyncFeatureViewResponse>
FeatureOnlineStoreAdminServiceTracingConnection::SyncFeatureView(
    google::cloud::aiplatform::v1::SyncFeatureViewRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "SyncFeatureView");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SyncFeatureView(request));
}

StatusOr<google::cloud::aiplatform::v1::FeatureViewSync>
FeatureOnlineStoreAdminServiceTracingConnection::GetFeatureViewSync(
    google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "GetFeatureViewSync");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeatureViewSync(request));
}

StreamRange<google::cloud::aiplatform::v1::FeatureViewSync>
FeatureOnlineStoreAdminServiceTracingConnection::ListFeatureViewSyncs(
    google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeatureOnlineStoreAdminServiceConnection::"
      "ListFeatureViewSyncs");
  internal::OTelScope scope(span);
  auto sr = child_->ListFeatureViewSyncs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::FeatureViewSync>(std::move(span),
                                                      std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::FeatureOnlineStoreAdminServiceConnection>
MakeFeatureOnlineStoreAdminServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeatureOnlineStoreAdminServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<FeatureOnlineStoreAdminServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
