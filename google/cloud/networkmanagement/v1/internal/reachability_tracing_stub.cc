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
// source: google/cloud/networkmanagement/v1/reachability.proto

#include "google/cloud/networkmanagement/v1/internal/reachability_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace networkmanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ReachabilityServiceTracingStub::ReachabilityServiceTracingStub(
    std::shared_ptr<ReachabilityServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::networkmanagement::v1::ListConnectivityTestsResponse>
ReachabilityServiceTracingStub::ListConnectivityTests(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkmanagement::v1::ListConnectivityTestsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkmanagement.v1.ReachabilityService",
      "ListConnectivityTests");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListConnectivityTests(context, options, request));
}

StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceTracingStub::GetConnectivityTest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkmanagement.v1.ReachabilityService",
      "GetConnectivityTest");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetConnectivityTest(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceTracingStub::AsyncCreateConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkmanagement.v1.ReachabilityService",
      "CreateConnectivityTest");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateConnectivityTest(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceTracingStub::AsyncUpdateConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkmanagement.v1.ReachabilityService",
      "UpdateConnectivityTest");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateConnectivityTest(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceTracingStub::AsyncRerunConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkmanagement.v1.ReachabilityService",
      "RerunConnectivityTest");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRerunConnectivityTest(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceTracingStub::AsyncDeleteConnectivityTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkmanagement.v1.ReachabilityService",
      "DeleteConnectivityTest");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteConnectivityTest(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ReachabilityServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ReachabilityServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ReachabilityServiceStub> MakeReachabilityServiceTracingStub(
    std::shared_ptr<ReachabilityServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ReachabilityServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement_v1_internal
}  // namespace cloud
}  // namespace google
