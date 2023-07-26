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
// source: google/cloud/resourcemanager/v3/tag_keys.proto

#include "google/cloud/resourcemanager/v3/internal/tag_keys_option_defaults.h"
#include "google/cloud/resourcemanager/v3/tag_keys_connection.h"
#include "google/cloud/resourcemanager/v3/tag_keys_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TagKeysDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TAG_KEYS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TAG_KEYS_AUTHORITY",
      "cloudresourcemanager.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<resourcemanager_v3::TagKeysRetryPolicyOption>()) {
    options.set<resourcemanager_v3::TagKeysRetryPolicyOption>(
        resourcemanager_v3::TagKeysLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<resourcemanager_v3::TagKeysBackoffPolicyOption>()) {
    options.set<resourcemanager_v3::TagKeysBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<resourcemanager_v3::TagKeysPollingPolicyOption>()) {
    options.set<resourcemanager_v3::TagKeysPollingPolicyOption>(
        GenericPollingPolicy<
            resourcemanager_v3::TagKeysRetryPolicyOption::Type,
            resourcemanager_v3::TagKeysBackoffPolicyOption::Type>(
            options.get<resourcemanager_v3::TagKeysRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          resourcemanager_v3::TagKeysConnectionIdempotencyPolicyOption>()) {
    options.set<resourcemanager_v3::TagKeysConnectionIdempotencyPolicyOption>(
        resourcemanager_v3::MakeDefaultTagKeysConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
