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
// google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_notification_endpoints_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionNotificationEndpointsConnectionIdempotencyPolicy {
 public:
  virtual ~RegionNotificationEndpointsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      RegionNotificationEndpointsConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency DeleteRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          DeleteRegionNotificationEndpointsRequest const& request);

  virtual google::cloud::Idempotency GetRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          GetRegionNotificationEndpointsRequest const& request);

  virtual google::cloud::Idempotency InsertRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          InsertRegionNotificationEndpointsRequest const& request);

  virtual google::cloud::Idempotency ListRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          ListRegionNotificationEndpointsRequest request);
};

std::unique_ptr<RegionNotificationEndpointsConnectionIdempotencyPolicy>
MakeDefaultRegionNotificationEndpointsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_notification_endpoints_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CONNECTION_IDEMPOTENCY_POLICY_H
