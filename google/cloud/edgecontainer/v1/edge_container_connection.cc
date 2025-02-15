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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/edge_container_connection.h"
#include "google/cloud/edgecontainer/v1/edge_container_options.h"
#include "google/cloud/edgecontainer/v1/internal/edge_container_connection_impl.h"
#include "google/cloud/edgecontainer/v1/internal/edge_container_option_defaults.h"
#include "google/cloud/edgecontainer/v1/internal/edge_container_stub_factory.h"
#include "google/cloud/edgecontainer/v1/internal/edge_container_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeContainerConnection::~EdgeContainerConnection() = default;

StreamRange<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerConnection::ListClusters(
    google::cloud::edgecontainer::v1::
        ListClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::Cluster>>();
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerConnection::GetCluster(
    google::cloud::edgecontainer::v1::GetClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerConnection::CreateCluster(
    google::cloud::edgecontainer::v1::CreateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerConnection::UpdateCluster(
    google::cloud::edgecontainer::v1::UpdateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerConnection::DeleteCluster(
    google::cloud::edgecontainer::v1::DeleteClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerConnection::GenerateAccessToken(
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerConnection::ListNodePools(
    google::cloud::edgecontainer::v1::
        ListNodePoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::NodePool>>();
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerConnection::GetNodePool(
    google::cloud::edgecontainer::v1::GetNodePoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerConnection::CreateNodePool(
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::NodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerConnection::UpdateNodePool(
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::NodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerConnection::DeleteNodePool(
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::edgecontainer::v1::Machine>
EdgeContainerConnection::ListMachines(
    google::cloud::edgecontainer::v1::
        ListMachinesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::Machine>>();
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerConnection::GetMachine(
    google::cloud::edgecontainer::v1::GetMachineRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerConnection::ListVpnConnections(
    google::cloud::edgecontainer::v1::
        ListVpnConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::VpnConnection>>();
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerConnection::GetVpnConnection(
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
EdgeContainerConnection::CreateVpnConnection(
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerConnection::DeleteVpnConnection(
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<EdgeContainerConnection> MakeEdgeContainerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 EdgeContainerPolicyOptionList>(options,
                                                                __func__);
  options = edgecontainer_v1_internal::EdgeContainerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = edgecontainer_v1_internal::CreateDefaultEdgeContainerStub(
      std::move(auth), options);
  return edgecontainer_v1_internal::MakeEdgeContainerTracingConnection(
      std::make_shared<edgecontainer_v1_internal::EdgeContainerConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1
}  // namespace cloud
}  // namespace google
