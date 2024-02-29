// Copyright 2024 Google LLC
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
// source: google/cloud/servicehealth/v1/event_service.proto

#include "google/cloud/servicehealth/v1/internal/service_health_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace servicehealth_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceHealthTracingStub::ServiceHealthTracingStub(
    std::shared_ptr<ServiceHealthStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::servicehealth::v1::ListEventsResponse>
ServiceHealthTracingStub::ListEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListEventsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicehealth.v1.ServiceHealth", "ListEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEvents(context, options, request));
}

StatusOr<google::cloud::servicehealth::v1::Event>
ServiceHealthTracingStub::GetEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicehealth.v1.ServiceHealth", "GetEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEvent(context, options, request));
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationEventsResponse>
ServiceHealthTracingStub::ListOrganizationEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicehealth.v1.ServiceHealth", "ListOrganizationEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListOrganizationEvents(context, options, request));
}

StatusOr<google::cloud::servicehealth::v1::OrganizationEvent>
ServiceHealthTracingStub::GetOrganizationEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicehealth.v1.ServiceHealth", "GetOrganizationEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetOrganizationEvent(context, options, request));
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationImpactsResponse>
ServiceHealthTracingStub::ListOrganizationImpacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListOrganizationImpactsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicehealth.v1.ServiceHealth", "ListOrganizationImpacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListOrganizationImpacts(context, options, request));
}

StatusOr<google::cloud::servicehealth::v1::OrganizationImpact>
ServiceHealthTracingStub::GetOrganizationImpact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicehealth.v1.ServiceHealth", "GetOrganizationImpact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetOrganizationImpact(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ServiceHealthStub> MakeServiceHealthTracingStub(
    std::shared_ptr<ServiceHealthStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ServiceHealthTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1_internal
}  // namespace cloud
}  // namespace google
