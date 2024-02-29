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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#include "google/cloud/managedidentities/v1/internal/managed_identities_option_defaults.h"
#include "google/cloud/managedidentities/v1/managed_identities_connection.h"
#include "google/cloud/managedidentities/v1/managed_identities_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedidentities_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ManagedIdentitiesServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_MANAGED_IDENTITIES_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_MANAGED_IDENTITIES_SERVICE_AUTHORITY",
      "managedidentities.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          managedidentities_v1::ManagedIdentitiesServiceRetryPolicyOption>()) {
    options.set<
        managedidentities_v1::ManagedIdentitiesServiceRetryPolicyOption>(
        managedidentities_v1::ManagedIdentitiesServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<managedidentities_v1::
                       ManagedIdentitiesServiceBackoffPolicyOption>()) {
    options
        .set<managedidentities_v1::ManagedIdentitiesServiceBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<managedidentities_v1::
                       ManagedIdentitiesServicePollingPolicyOption>()) {
    options
        .set<managedidentities_v1::ManagedIdentitiesServicePollingPolicyOption>(
            GenericPollingPolicy<
                managedidentities_v1::
                    ManagedIdentitiesServiceRetryPolicyOption::Type,
                managedidentities_v1::
                    ManagedIdentitiesServiceBackoffPolicyOption::Type>(
                options
                    .get<managedidentities_v1::
                             ManagedIdentitiesServiceRetryPolicyOption>()
                    ->clone(),
                ExponentialBackoffPolicy(std::chrono::seconds(1),
                                         std::chrono::minutes(5),
                                         kBackoffScaling)
                    .clone())
                .clone());
  }
  if (!options.has<
          managedidentities_v1::
              ManagedIdentitiesServiceConnectionIdempotencyPolicyOption>()) {
    options.set<managedidentities_v1::
                    ManagedIdentitiesServiceConnectionIdempotencyPolicyOption>(
        managedidentities_v1::
            MakeDefaultManagedIdentitiesServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1_internal
}  // namespace cloud
}  // namespace google
