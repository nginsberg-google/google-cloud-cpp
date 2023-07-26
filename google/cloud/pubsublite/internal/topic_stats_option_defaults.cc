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
// source: google/cloud/pubsublite/v1/topic_stats.proto

#include "google/cloud/pubsublite/internal/topic_stats_option_defaults.h"
#include "google/cloud/pubsublite/topic_stats_connection.h"
#include "google/cloud/pubsublite/topic_stats_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TopicStatsServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TOPIC_STATS_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TOPIC_STATS_SERVICE_AUTHORITY",
      "pubsublite.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<pubsublite::TopicStatsServiceRetryPolicyOption>()) {
    options.set<pubsublite::TopicStatsServiceRetryPolicyOption>(
        pubsublite::TopicStatsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<pubsublite::TopicStatsServiceBackoffPolicyOption>()) {
    options.set<pubsublite::TopicStatsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          pubsublite::TopicStatsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<pubsublite::TopicStatsServiceConnectionIdempotencyPolicyOption>(
        pubsublite::MakeDefaultTopicStatsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
