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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AwsClustersTracingStub::AwsClustersTracingStub(
    std::shared_ptr<AwsClustersStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncCreateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "CreateAwsCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateAwsCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncUpdateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "UpdateAwsCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateAwsCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersTracingStub::GetAwsCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "GetAwsCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAwsCluster(context, options, request));
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
AwsClustersTracingStub::ListAwsClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "ListAwsClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAwsClusters(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncDeleteAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "DeleteAwsCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteAwsCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
AwsClustersTracingStub::GenerateAwsClusterAgentToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.gkemulticloud.v1.AwsClusters",
                             "GenerateAwsClusterAgentToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateAwsClusterAgentToken(context, options, request));
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
AwsClustersTracingStub::GenerateAwsAccessToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "GenerateAwsAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateAwsAccessToken(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncCreateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "CreateAwsNodePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateAwsNodePool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncUpdateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "UpdateAwsNodePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateAwsNodePool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncRollbackAwsNodePoolUpdate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "RollbackAwsNodePoolUpdate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRollbackAwsNodePoolUpdate(cq, context,
                                                  std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersTracingStub::GetAwsNodePool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "GetAwsNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAwsNodePool(context, options, request));
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
AwsClustersTracingStub::ListAwsNodePools(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "ListAwsNodePools");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAwsNodePools(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncDeleteAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "DeleteAwsNodePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteAwsNodePool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
AwsClustersTracingStub::GetAwsOpenIdConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "GetAwsOpenIdConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetAwsOpenIdConfig(context, options, request));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys>
AwsClustersTracingStub::GetAwsJsonWebKeys(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "GetAwsJsonWebKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetAwsJsonWebKeys(context, options, request));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
AwsClustersTracingStub::GetAwsServerConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.gkemulticloud.v1.AwsClusters", "GetAwsServerConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetAwsServerConfig(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersTracingStub::AsyncGetOperation(
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

future<Status> AwsClustersTracingStub::AsyncCancelOperation(
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

std::shared_ptr<AwsClustersStub> MakeAwsClustersTracingStub(
    std::shared_ptr<AwsClustersStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AwsClustersTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
