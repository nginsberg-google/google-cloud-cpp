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
// source: google/cloud/compute/snapshots/v1/snapshots.proto

#include "google/cloud/compute/snapshots/v1/internal/snapshots_option_defaults.h"
#include "google/cloud/compute/snapshots/v1/snapshots_connection.h"
#include "google/cloud/compute/snapshots/v1/snapshots_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_snapshots_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SnapshotsDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SNAPSHOTS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_SNAPSHOTS_AUTHORITY", "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<compute_snapshots_v1::SnapshotsRetryPolicyOption>()) {
    options.set<compute_snapshots_v1::SnapshotsRetryPolicyOption>(
        compute_snapshots_v1::SnapshotsLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_snapshots_v1::SnapshotsBackoffPolicyOption>()) {
    options.set<compute_snapshots_v1::SnapshotsBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_snapshots_v1::SnapshotsPollingPolicyOption>()) {
    options.set<compute_snapshots_v1::SnapshotsPollingPolicyOption>(
        GenericPollingPolicy<
            compute_snapshots_v1::SnapshotsRetryPolicyOption::Type,
            compute_snapshots_v1::SnapshotsBackoffPolicyOption::Type>(
            options.get<compute_snapshots_v1::SnapshotsRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          compute_snapshots_v1::SnapshotsConnectionIdempotencyPolicyOption>()) {
    options
        .set<compute_snapshots_v1::SnapshotsConnectionIdempotencyPolicyOption>(
            compute_snapshots_v1::
                MakeDefaultSnapshotsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshots_v1_internal
}  // namespace cloud
}  // namespace google
