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
// source: google/cloud/networkmanagement/v1/reachability.proto

#include "google/cloud/networkmanagement/v1/internal/reachability_option_defaults.h"
#include "google/cloud/networkmanagement/v1/reachability_connection.h"
#include "google/cloud/networkmanagement/v1/reachability_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkmanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ReachabilityServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_REACHABILITY_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_REACHABILITY_SERVICE_AUTHORITY",
      "networkmanagement.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options
           .has<networkmanagement_v1::ReachabilityServiceRetryPolicyOption>()) {
    options.set<networkmanagement_v1::ReachabilityServiceRetryPolicyOption>(
        networkmanagement_v1::ReachabilityServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          networkmanagement_v1::ReachabilityServiceBackoffPolicyOption>()) {
    options.set<networkmanagement_v1::ReachabilityServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          networkmanagement_v1::ReachabilityServicePollingPolicyOption>()) {
    options.set<networkmanagement_v1::ReachabilityServicePollingPolicyOption>(
        GenericPollingPolicy<
            networkmanagement_v1::ReachabilityServiceRetryPolicyOption::Type,
            networkmanagement_v1::ReachabilityServiceBackoffPolicyOption::Type>(
            options
                .get<networkmanagement_v1::
                         ReachabilityServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<networkmanagement_v1::
                    ReachabilityServiceConnectionIdempotencyPolicyOption>()) {
    options.set<networkmanagement_v1::
                    ReachabilityServiceConnectionIdempotencyPolicyOption>(
        networkmanagement_v1::
            MakeDefaultReachabilityServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement_v1_internal
}  // namespace cloud
}  // namespace google
