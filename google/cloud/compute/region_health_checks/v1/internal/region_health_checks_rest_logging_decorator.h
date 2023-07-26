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
// google/cloud/compute/region_health_checks/v1/region_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_HEALTH_CHECKS_V1_INTERNAL_REGION_HEALTH_CHECKS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_HEALTH_CHECKS_V1_INTERNAL_REGION_HEALTH_CHECKS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/region_health_checks/v1/internal/region_health_checks_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_health_checks/v1/region_health_checks.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionHealthChecksRestLogging : public RegionHealthChecksRestStub {
 public:
  ~RegionHealthChecksRestLogging() override = default;
  RegionHealthChecksRestLogging(
      std::shared_ptr<RegionHealthChecksRestStub> child,
      TracingOptions tracing_options, std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteRegionHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_health_checks::v1::
          DeleteRegionHealthChecksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::HealthCheck> GetRegionHealthChecks(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_health_checks::v1::
          GetRegionHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertRegionHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_health_checks::v1::
          InsertRegionHealthChecksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::HealthCheckList>
  ListRegionHealthChecks(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_health_checks::v1::
          ListRegionHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRegionHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_health_checks::v1::
          PatchRegionHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateRegionHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_health_checks::v1::
          UpdateRegionHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest const& request) override;

 private:
  std::shared_ptr<RegionHealthChecksRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_checks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_HEALTH_CHECKS_V1_INTERNAL_REGION_HEALTH_CHECKS_REST_LOGGING_DECORATOR_H
