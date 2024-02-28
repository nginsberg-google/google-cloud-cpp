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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#include "google/cloud/vpcaccess/v1/internal/vpc_access_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace vpcaccess_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VpcAccessServiceTracingStub::VpcAccessServiceTracingStub(
    std::shared_ptr<VpcAccessServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
VpcAccessServiceTracingStub::AsyncCreateConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::vpcaccess::v1::CreateConnectorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vpcaccess.v1.VpcAccessService", "CreateConnector");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateConnector(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceTracingStub::GetConnector(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vpcaccess::v1::GetConnectorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vpcaccess.v1.VpcAccessService", "GetConnector");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConnector(context, options, request));
}

StatusOr<google::cloud::vpcaccess::v1::ListConnectorsResponse>
VpcAccessServiceTracingStub::ListConnectors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vpcaccess::v1::ListConnectorsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vpcaccess.v1.VpcAccessService", "ListConnectors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListConnectors(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
VpcAccessServiceTracingStub::AsyncDeleteConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.vpcaccess.v1.VpcAccessService", "DeleteConnector");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteConnector(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VpcAccessServiceTracingStub::AsyncGetOperation(
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

future<Status> VpcAccessServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<VpcAccessServiceStub> MakeVpcAccessServiceTracingStub(
    std::shared_ptr<VpcAccessServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<VpcAccessServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1_internal
}  // namespace cloud
}  // namespace google
