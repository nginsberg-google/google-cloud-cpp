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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_option_defaults.h"
#include "google/cloud/networksecurity/v1/network_security_connection.h"
#include "google/cloud/networksecurity/v1/network_security_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NetworkSecurityDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_NETWORK_SECURITY_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NETWORK_SECURITY_AUTHORITY",
      "networksecurity.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<networksecurity_v1::NetworkSecurityRetryPolicyOption>()) {
    options.set<networksecurity_v1::NetworkSecurityRetryPolicyOption>(
        networksecurity_v1::NetworkSecurityLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<networksecurity_v1::NetworkSecurityBackoffPolicyOption>()) {
    options.set<networksecurity_v1::NetworkSecurityBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<networksecurity_v1::NetworkSecurityPollingPolicyOption>()) {
    options.set<networksecurity_v1::NetworkSecurityPollingPolicyOption>(
        GenericPollingPolicy<
            networksecurity_v1::NetworkSecurityRetryPolicyOption::Type,
            networksecurity_v1::NetworkSecurityBackoffPolicyOption::Type>(
            options.get<networksecurity_v1::NetworkSecurityRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<networksecurity_v1::
                       NetworkSecurityConnectionIdempotencyPolicyOption>()) {
    options.set<
        networksecurity_v1::NetworkSecurityConnectionIdempotencyPolicyOption>(
        networksecurity_v1::
            MakeDefaultNetworkSecurityConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
