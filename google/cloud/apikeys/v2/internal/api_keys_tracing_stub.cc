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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/v2/internal/api_keys_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace apikeys_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ApiKeysTracingStub::ApiKeysTracingStub(std::shared_ptr<ApiKeysStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
ApiKeysTracingStub::AsyncCreateKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::apikeys::v2::CreateKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "CreateKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateKey(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::apikeys::v2::ListKeysResponse>
ApiKeysTracingStub::ListKeys(
    grpc::ClientContext& context, Options const& options,
    google::api::apikeys::v2::ListKeysRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "ListKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListKeys(context, options, request));
}

StatusOr<google::api::apikeys::v2::Key> ApiKeysTracingStub::GetKey(
    grpc::ClientContext& context, Options const& options,
    google::api::apikeys::v2::GetKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "GetKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetKey(context, options, request));
}

StatusOr<google::api::apikeys::v2::GetKeyStringResponse>
ApiKeysTracingStub::GetKeyString(
    grpc::ClientContext& context, Options const& options,
    google::api::apikeys::v2::GetKeyStringRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "GetKeyString");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetKeyString(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysTracingStub::AsyncUpdateKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::apikeys::v2::UpdateKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "UpdateKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateKey(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysTracingStub::AsyncDeleteKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::apikeys::v2::DeleteKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "DeleteKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteKey(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysTracingStub::AsyncUndeleteKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::apikeys::v2::UndeleteKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "UndeleteKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUndeleteKey(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::apikeys::v2::LookupKeyResponse>
ApiKeysTracingStub::LookupKey(
    grpc::ClientContext& context, Options const& options,
    google::api::apikeys::v2::LookupKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.api.apikeys.v2.ApiKeys", "LookupKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->LookupKey(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysTracingStub::AsyncGetOperation(
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

future<Status> ApiKeysTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ApiKeysStub> MakeApiKeysTracingStub(
    std::shared_ptr<ApiKeysStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ApiKeysTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_v2_internal
}  // namespace cloud
}  // namespace google
