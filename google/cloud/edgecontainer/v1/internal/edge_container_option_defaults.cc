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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_option_defaults.h"
#include "google/cloud/edgecontainer/v1/edge_container_connection.h"
#include "google/cloud/edgecontainer/v1/edge_container_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options EdgeContainerDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_EDGE_CONTAINER_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_EDGE_CONTAINER_AUTHORITY",
      "edgecontainer.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<edgecontainer_v1::EdgeContainerRetryPolicyOption>()) {
    options.set<edgecontainer_v1::EdgeContainerRetryPolicyOption>(
        edgecontainer_v1::EdgeContainerLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<edgecontainer_v1::EdgeContainerBackoffPolicyOption>()) {
    options.set<edgecontainer_v1::EdgeContainerBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<edgecontainer_v1::EdgeContainerPollingPolicyOption>()) {
    options.set<edgecontainer_v1::EdgeContainerPollingPolicyOption>(
        GenericPollingPolicy<
            edgecontainer_v1::EdgeContainerRetryPolicyOption::Type,
            edgecontainer_v1::EdgeContainerBackoffPolicyOption::Type>(
            options.get<edgecontainer_v1::EdgeContainerRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          edgecontainer_v1::EdgeContainerConnectionIdempotencyPolicyOption>()) {
    options
        .set<edgecontainer_v1::EdgeContainerConnectionIdempotencyPolicyOption>(
            edgecontainer_v1::
                MakeDefaultEdgeContainerConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
