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

#include "google/cloud/networkconnectivity/v1/internal/hub_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networkconnectivity/v1/hub.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkconnectivity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HubServiceLogging::HubServiceLogging(std::shared_ptr<HubServiceStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse>
HubServiceLogging::ListHubs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListHubsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListHubsRequest const&
                 request) {
        return child_->ListHubs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::Hub> HubServiceLogging::GetHub(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::GetHubRequest const&
                 request) { return child_->GetHub(context, options, request); },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncCreateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networkconnectivity::v1::CreateHubRequest const&
                 request) {
        return child_->AsyncCreateHub(cq, std::move(context),
                                      std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncUpdateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networkconnectivity::v1::UpdateHubRequest const&
                 request) {
        return child_->AsyncUpdateHub(cq, std::move(context),
                                      std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncDeleteHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networkconnectivity::v1::DeleteHubRequest const&
                 request) {
        return child_->AsyncDeleteHub(cq, std::move(context),
                                      std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::ListHubSpokesResponse>
HubServiceLogging::ListHubSpokes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListHubSpokesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListHubSpokesRequest const&
                 request) {
        return child_->ListHubSpokes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
HubServiceLogging::ListSpokes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListSpokesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListSpokesRequest const&
                 request) {
        return child_->ListSpokes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceLogging::GetSpoke(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::GetSpokeRequest const&
                 request) {
        return child_->GetSpoke(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncCreateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
                 request) {
        return child_->AsyncCreateSpoke(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncUpdateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
                 request) {
        return child_->AsyncUpdateSpoke(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncRejectHubSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
              request) {
        return child_->AsyncRejectHubSpoke(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncAcceptHubSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
              request) {
        return child_->AsyncAcceptHubSpoke(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncDeleteSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
                 request) {
        return child_->AsyncDeleteSpoke(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceLogging::GetRouteTable(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
                 request) {
        return child_->GetRouteTable(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::Route>
HubServiceLogging::GetRoute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetRouteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::GetRouteRequest const&
                 request) {
        return child_->GetRoute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::ListRoutesResponse>
HubServiceLogging::ListRoutes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListRoutesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListRoutesRequest const&
                 request) {
        return child_->ListRoutes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::ListRouteTablesResponse>
HubServiceLogging::ListRouteTables(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListRouteTablesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::networkconnectivity::v1::ListRouteTablesRequest const&
              request) {
        return child_->ListRouteTables(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::Group>
HubServiceLogging::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::GetGroupRequest const&
                 request) {
        return child_->GetGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::ListGroupsResponse>
HubServiceLogging::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkconnectivity::v1::ListGroupsRequest const&
                 request) {
        return child_->ListGroups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> HubServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1_internal
}  // namespace cloud
}  // namespace google
