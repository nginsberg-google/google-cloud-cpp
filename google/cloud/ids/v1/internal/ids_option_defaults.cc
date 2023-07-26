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
// source: google/cloud/ids/v1/ids.proto

#include "google/cloud/ids/v1/internal/ids_option_defaults.h"
#include "google/cloud/ids/v1/ids_connection.h"
#include "google/cloud/ids/v1/ids_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace ids_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options IDSDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_IDS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_IDS_AUTHORITY", "ids.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<ids_v1::IDSRetryPolicyOption>()) {
    options.set<ids_v1::IDSRetryPolicyOption>(
        ids_v1::IDSLimitedTimeRetryPolicy(std::chrono::minutes(30)).clone());
  }
  if (!options.has<ids_v1::IDSBackoffPolicyOption>()) {
    options.set<ids_v1::IDSBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<ids_v1::IDSPollingPolicyOption>()) {
    options.set<ids_v1::IDSPollingPolicyOption>(
        GenericPollingPolicy<ids_v1::IDSRetryPolicyOption::Type,
                             ids_v1::IDSBackoffPolicyOption::Type>(
            options.get<ids_v1::IDSRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<ids_v1::IDSConnectionIdempotencyPolicyOption>()) {
    options.set<ids_v1::IDSConnectionIdempotencyPolicyOption>(
        ids_v1::MakeDefaultIDSConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1_internal
}  // namespace cloud
}  // namespace google
