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
// source:
// google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto

#include "google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNetworkEndpointGroupsClient::RegionNetworkEndpointGroupsClient(
    ExperimentalTag,
    std::shared_ptr<RegionNetworkEndpointGroupsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionNetworkEndpointGroupsClient::~RegionNetworkEndpointGroupsClient() =
    default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsClient::DeleteRegionNetworkEndpointGroups(
    std::string const& project, std::string const& region,
    std::string const& network_endpoint_group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_endpoint_groups::v1::
      DeleteRegionNetworkEndpointGroupsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_network_endpoint_group(network_endpoint_group);
  return connection_->DeleteRegionNetworkEndpointGroups(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsClient::DeleteRegionNetworkEndpointGroups(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DeleteRegionNetworkEndpointGroupsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionNetworkEndpointGroups(request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsClient::GetRegionNetworkEndpointGroups(
    std::string const& project, std::string const& region,
    std::string const& network_endpoint_group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_endpoint_groups::v1::
      GetRegionNetworkEndpointGroupsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_network_endpoint_group(network_endpoint_group);
  return connection_->GetRegionNetworkEndpointGroups(request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsClient::GetRegionNetworkEndpointGroups(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        GetRegionNetworkEndpointGroupsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionNetworkEndpointGroups(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsClient::InsertRegionNetworkEndpointGroups(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::NetworkEndpointGroup const&
        network_endpoint_group_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_endpoint_groups::v1::
      InsertRegionNetworkEndpointGroupsRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_network_endpoint_group_resource() =
      network_endpoint_group_resource;
  return connection_->InsertRegionNetworkEndpointGroups(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsClient::InsertRegionNetworkEndpointGroups(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        InsertRegionNetworkEndpointGroupsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionNetworkEndpointGroups(request);
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsClient::ListRegionNetworkEndpointGroups(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_endpoint_groups::v1::
      ListRegionNetworkEndpointGroupsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionNetworkEndpointGroups(request);
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsClient::ListRegionNetworkEndpointGroups(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListRegionNetworkEndpointGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionNetworkEndpointGroups(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google
