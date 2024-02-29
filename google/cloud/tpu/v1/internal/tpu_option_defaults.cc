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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/v1/internal/tpu_option_defaults.h"
#include "google/cloud/tpu/v1/tpu_connection.h"
#include "google/cloud/tpu/v1/tpu_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TpuDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TPU_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TPU_AUTHORITY", "tpu.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<tpu_v1::TpuRetryPolicyOption>()) {
    options.set<tpu_v1::TpuRetryPolicyOption>(
        tpu_v1::TpuLimitedTimeRetryPolicy(std::chrono::minutes(30)).clone());
  }
  if (!options.has<tpu_v1::TpuBackoffPolicyOption>()) {
    options.set<tpu_v1::TpuBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<tpu_v1::TpuPollingPolicyOption>()) {
    options.set<tpu_v1::TpuPollingPolicyOption>(
        GenericPollingPolicy<tpu_v1::TpuRetryPolicyOption::Type,
                             tpu_v1::TpuBackoffPolicyOption::Type>(
            options.get<tpu_v1::TpuRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<tpu_v1::TpuConnectionIdempotencyPolicyOption>()) {
    options.set<tpu_v1::TpuConnectionIdempotencyPolicyOption>(
        tpu_v1::MakeDefaultTpuConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google
