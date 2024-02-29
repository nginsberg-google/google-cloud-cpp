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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#include "google/cloud/kms/inventory/v1/internal/key_tracking_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace kms_inventory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

KeyTrackingServiceTracingStub::KeyTrackingServiceTracingStub(
    std::shared_ptr<KeyTrackingServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
KeyTrackingServiceTracingStub::GetProtectedResourcesSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::inventory::v1::
        GetProtectedResourcesSummaryRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.kms.inventory.v1.KeyTrackingService",
                             "GetProtectedResourcesSummary");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetProtectedResourcesSummary(context, options, request));
}

StatusOr<google::cloud::kms::inventory::v1::SearchProtectedResourcesResponse>
KeyTrackingServiceTracingStub::SearchProtectedResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.kms.inventory.v1.KeyTrackingService",
                             "SearchProtectedResources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SearchProtectedResources(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<KeyTrackingServiceStub> MakeKeyTrackingServiceTracingStub(
    std::shared_ptr<KeyTrackingServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<KeyTrackingServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1_internal
}  // namespace cloud
}  // namespace google
