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
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_NETWORK_ENDPOINT_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_NETWORK_ENDPOINT_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkEndpointGroupsConnectionIdempotencyPolicy {
 public:
  virtual ~NetworkEndpointGroupsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetworkEndpointGroupsConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AggregatedListNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AggregatedListNetworkEndpointGroupsRequest const& request);

  virtual google::cloud::Idempotency AttachNetworkEndpoints(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request);

  virtual google::cloud::Idempotency DeleteNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupsRequest const& request);

  virtual google::cloud::Idempotency DetachNetworkEndpoints(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request);

  virtual google::cloud::Idempotency GetNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          GetNetworkEndpointGroupsRequest const& request);

  virtual google::cloud::Idempotency InsertNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          InsertNetworkEndpointGroupsRequest const& request);

  virtual google::cloud::Idempotency ListNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointGroupsRequest request);

  virtual google::cloud::Idempotency ListNetworkEndpoints(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointsRequest request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<NetworkEndpointGroupsConnectionIdempotencyPolicy>
MakeDefaultNetworkEndpointGroupsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_NETWORK_ENDPOINT_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H
