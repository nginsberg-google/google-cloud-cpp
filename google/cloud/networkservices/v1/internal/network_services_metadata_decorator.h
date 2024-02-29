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
// source: google/cloud/networkservices/v1/network_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_NETWORK_SERVICES_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_NETWORK_SERVICES_METADATA_DECORATOR_H

#include "google/cloud/networkservices/v1/internal/network_services_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkServicesMetadata : public NetworkServicesStub {
 public:
  ~NetworkServicesMetadata() override = default;
  NetworkServicesMetadata(
      std::shared_ptr<NetworkServicesStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::networkservices::v1::ListEndpointPoliciesResponse>
  ListEndpointPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::ListEndpointPoliciesRequest const&
          request) override;

  StatusOr<google::cloud::networkservices::v1::EndpointPolicy>
  GetEndpointPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEndpointPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEndpointPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEndpointPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
          request) override;

  StatusOr<google::cloud::networkservices::v1::ListGatewaysResponse>
  ListGateways(grpc::ClientContext& context, Options const& options,
               google::cloud::networkservices::v1::ListGatewaysRequest const&
                   request) override;

  StatusOr<google::cloud::networkservices::v1::Gateway> GetGateway(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetGatewayRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateGatewayRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateGatewayRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteGatewayRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::ListGrpcRoutesResponse>
  ListGrpcRoutes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::ListGrpcRoutesRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::GrpcRoute> GetGrpcRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetGrpcRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGrpcRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateGrpcRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGrpcRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateGrpcRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGrpcRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteGrpcRouteRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::ListHttpRoutesResponse>
  ListHttpRoutes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::ListHttpRoutesRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::HttpRoute> GetHttpRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetHttpRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateHttpRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateHttpRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateHttpRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateHttpRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteHttpRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteHttpRouteRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::ListTcpRoutesResponse>
  ListTcpRoutes(grpc::ClientContext& context, Options const& options,
                google::cloud::networkservices::v1::ListTcpRoutesRequest const&
                    request) override;

  StatusOr<google::cloud::networkservices::v1::TcpRoute> GetTcpRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetTcpRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTcpRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateTcpRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTcpRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateTcpRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTcpRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteTcpRouteRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::ListTlsRoutesResponse>
  ListTlsRoutes(grpc::ClientContext& context, Options const& options,
                google::cloud::networkservices::v1::ListTlsRoutesRequest const&
                    request) override;

  StatusOr<google::cloud::networkservices::v1::TlsRoute> GetTlsRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetTlsRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTlsRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateTlsRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTlsRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateTlsRouteRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTlsRoute(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteTlsRouteRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::ListServiceBindingsResponse>
  ListServiceBindings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::ListServiceBindingsRequest const&
          request) override;

  StatusOr<google::cloud::networkservices::v1::ServiceBinding>
  GetServiceBinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetServiceBindingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateServiceBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateServiceBindingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteServiceBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
          request) override;

  StatusOr<google::cloud::networkservices::v1::ListMeshesResponse> ListMeshes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::ListMeshesRequest const& request)
      override;

  StatusOr<google::cloud::networkservices::v1::Mesh> GetMesh(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkservices::v1::GetMeshRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMesh(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::CreateMeshRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMesh(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::UpdateMeshRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMesh(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkservices::v1::DeleteMeshRequest const& request)
      override;

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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<NetworkServicesStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_NETWORK_SERVICES_METADATA_DECORATOR_H
