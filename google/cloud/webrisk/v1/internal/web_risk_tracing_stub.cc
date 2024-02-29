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
// source: google/cloud/webrisk/v1/webrisk.proto

#include "google/cloud/webrisk/v1/internal/web_risk_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace webrisk_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WebRiskServiceTracingStub::WebRiskServiceTracingStub(
    std::shared_ptr<WebRiskServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
WebRiskServiceTracingStub::ComputeThreatListDiff(
    grpc::ClientContext& context, Options const& options,
    google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.webrisk.v1.WebRiskService",
                                     "ComputeThreatListDiff");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ComputeThreatListDiff(context, options, request));
}

StatusOr<google::cloud::webrisk::v1::SearchUrisResponse>
WebRiskServiceTracingStub::SearchUris(
    grpc::ClientContext& context, Options const& options,
    google::cloud::webrisk::v1::SearchUrisRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.webrisk.v1.WebRiskService",
                                     "SearchUris");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchUris(context, options, request));
}

StatusOr<google::cloud::webrisk::v1::SearchHashesResponse>
WebRiskServiceTracingStub::SearchHashes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::webrisk::v1::SearchHashesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.webrisk.v1.WebRiskService",
                                     "SearchHashes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchHashes(context, options, request));
}

StatusOr<google::cloud::webrisk::v1::Submission>
WebRiskServiceTracingStub::CreateSubmission(
    grpc::ClientContext& context, Options const& options,
    google::cloud::webrisk::v1::CreateSubmissionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.webrisk.v1.WebRiskService",
                                     "CreateSubmission");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSubmission(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
WebRiskServiceTracingStub::AsyncSubmitUri(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::webrisk::v1::SubmitUriRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.webrisk.v1.WebRiskService",
                                     "SubmitUri");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSubmitUri(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
WebRiskServiceTracingStub::AsyncGetOperation(
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

future<Status> WebRiskServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<WebRiskServiceStub> MakeWebRiskServiceTracingStub(
    std::shared_ptr<WebRiskServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<WebRiskServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1_internal
}  // namespace cloud
}  // namespace google
