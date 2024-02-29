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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/v2/internal/export_option_defaults.h"
#include "google/cloud/profiler/v2/export_connection.h"
#include "google/cloud/profiler/v2/export_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace profiler_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ExportServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_EXPORT_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_EXPORT_SERVICE_AUTHORITY",
      "cloudprofiler.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<profiler_v2::ExportServiceRetryPolicyOption>()) {
    options.set<profiler_v2::ExportServiceRetryPolicyOption>(
        profiler_v2::ExportServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<profiler_v2::ExportServiceBackoffPolicyOption>()) {
    options.set<profiler_v2::ExportServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          profiler_v2::ExportServiceConnectionIdempotencyPolicyOption>()) {
    options.set<profiler_v2::ExportServiceConnectionIdempotencyPolicyOption>(
        profiler_v2::MakeDefaultExportServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_v2_internal
}  // namespace cloud
}  // namespace google
