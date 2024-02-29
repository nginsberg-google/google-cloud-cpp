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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#include "google/cloud/managedidentities/v1/internal/managed_identities_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace managedidentities_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ManagedIdentitiesServiceTracingStub::ManagedIdentitiesServiceTracingStub(
    std::shared_ptr<ManagedIdentitiesServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncCreateMicrosoftAdDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "CreateMicrosoftAdDomain");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateMicrosoftAdDomain(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
ManagedIdentitiesServiceTracingStub::ResetAdminPassword(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "ResetAdminPassword");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ResetAdminPassword(context, options, request));
}

StatusOr<google::cloud::managedidentities::v1::ListDomainsResponse>
ManagedIdentitiesServiceTracingStub::ListDomains(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedidentities::v1::ListDomainsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "ListDomains");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDomains(context, options, request));
}

StatusOr<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceTracingStub::GetDomain(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedidentities::v1::GetDomainRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "GetDomain");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDomain(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncUpdateDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::UpdateDomainRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "UpdateDomain");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateDomain(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncDeleteDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::DeleteDomainRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "DeleteDomain");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDomain(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncAttachTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::AttachTrustRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "AttachTrust");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncAttachTrust(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncReconfigureTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "ReconfigureTrust");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncReconfigureTrust(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncDetachTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::DetachTrustRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "DetachTrust");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDetachTrust(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncValidateTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedidentities::v1::ValidateTrustRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.managedidentities.v1.ManagedIdentitiesService",
      "ValidateTrust");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncValidateTrust(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ManagedIdentitiesServiceTracingStub::AsyncGetOperation(
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

future<Status> ManagedIdentitiesServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ManagedIdentitiesServiceStub>
MakeManagedIdentitiesServiceTracingStub(
    std::shared_ptr<ManagedIdentitiesServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ManagedIdentitiesServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1_internal
}  // namespace cloud
}  // namespace google
