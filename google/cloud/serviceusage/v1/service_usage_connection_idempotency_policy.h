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
// source: google/api/serviceusage/v1/serviceusage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_SERVICE_USAGE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_SERVICE_USAGE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/api/serviceusage/v1/serviceusage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace serviceusage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceUsageConnectionIdempotencyPolicy {
 public:
  virtual ~ServiceUsageConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ServiceUsageConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency EnableService(
      google::api::serviceusage::v1::EnableServiceRequest const& request);

  virtual google::cloud::Idempotency DisableService(
      google::api::serviceusage::v1::DisableServiceRequest const& request);

  virtual google::cloud::Idempotency GetService(
      google::api::serviceusage::v1::GetServiceRequest const& request);

  virtual google::cloud::Idempotency ListServices(
      google::api::serviceusage::v1::ListServicesRequest request);

  virtual google::cloud::Idempotency BatchEnableServices(
      google::api::serviceusage::v1::BatchEnableServicesRequest const& request);

  virtual google::cloud::Idempotency BatchGetServices(
      google::api::serviceusage::v1::BatchGetServicesRequest const& request);
};

std::unique_ptr<ServiceUsageConnectionIdempotencyPolicy>
MakeDefaultServiceUsageConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_SERVICE_USAGE_CONNECTION_IDEMPOTENCY_POLICY_H
