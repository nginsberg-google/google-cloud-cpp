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
// source: google/cloud/networkconnectivity/v1/hub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_INTERNAL_HUB_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_INTERNAL_HUB_AUTH_DECORATOR_H

#include "google/cloud/networkconnectivity/v1/internal/hub_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace networkconnectivity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class HubServiceAuth : public HubServiceStub {
 public:
  ~HubServiceAuth() override = default;
  HubServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<HubServiceStub> child);

  StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse> ListHubs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::ListHubsRequest const& request)
      override;

  StatusOr<google::cloud::networkconnectivity::v1::Hub> GetHub(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::GetHubRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateHub(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::CreateHubRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateHub(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::UpdateHubRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteHub(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::DeleteHubRequest const& request)
      override;

  StatusOr<google::cloud::networkconnectivity::v1::ListHubSpokesResponse>
  ListHubSpokes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::ListHubSpokesRequest const&
          request) override;

  StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
  ListSpokes(grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListSpokesRequest const&
                 request) override;

  StatusOr<google::cloud::networkconnectivity::v1::Spoke> GetSpoke(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::GetSpokeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSpoke(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSpoke(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRejectHubSpoke(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncAcceptHubSpoke(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSpoke(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request)
      override;

  StatusOr<google::cloud::networkconnectivity::v1::RouteTable> GetRouteTable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
          request) override;

  StatusOr<google::cloud::networkconnectivity::v1::Route> GetRoute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::GetRouteRequest const& request)
      override;

  StatusOr<google::cloud::networkconnectivity::v1::ListRoutesResponse>
  ListRoutes(grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListRoutesRequest const&
                 request) override;

  StatusOr<google::cloud::networkconnectivity::v1::ListRouteTablesResponse>
  ListRouteTables(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::ListRouteTablesRequest const&
          request) override;

  StatusOr<google::cloud::networkconnectivity::v1::Group> GetGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networkconnectivity::v1::GetGroupRequest const& request)
      override;

  StatusOr<google::cloud::networkconnectivity::v1::ListGroupsResponse>
  ListGroups(grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListGroupsRequest const&
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
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<HubServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_INTERNAL_HUB_AUTH_DECORATOR_H
