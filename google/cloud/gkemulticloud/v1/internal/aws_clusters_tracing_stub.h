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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_TRACING_STUB_H

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AwsClustersTracingStub : public AwsClustersStub {
 public:
  ~AwsClustersTracingStub() override = default;

  explicit AwsClustersTracingStub(std::shared_ptr<AwsClustersStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
  ListAwsClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request)
      override;

  StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
  GenerateAwsClusterAgentToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::
          GenerateAwsClusterAgentTokenRequest const& request) override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncRollbackAwsNodePoolUpdate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool> GetAwsNodePool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
  ListAwsNodePools(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
  GetAwsOpenIdConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys> GetAwsJsonWebKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<AwsClustersStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<AwsClustersStub> MakeAwsClustersTracingStub(
    std::shared_ptr<AwsClustersStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_TRACING_STUB_H
