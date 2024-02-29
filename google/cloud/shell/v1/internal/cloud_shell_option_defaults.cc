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
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/v1/internal/cloud_shell_option_defaults.h"
#include "google/cloud/shell/v1/cloud_shell_connection.h"
#include "google/cloud/shell/v1/cloud_shell_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace shell_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudShellServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CLOUD_SHELL_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CLOUD_SHELL_SERVICE_AUTHORITY",
      "cloudshell.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<shell_v1::CloudShellServiceRetryPolicyOption>()) {
    options.set<shell_v1::CloudShellServiceRetryPolicyOption>(
        shell_v1::CloudShellServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<shell_v1::CloudShellServiceBackoffPolicyOption>()) {
    options.set<shell_v1::CloudShellServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<shell_v1::CloudShellServicePollingPolicyOption>()) {
    options.set<shell_v1::CloudShellServicePollingPolicyOption>(
        GenericPollingPolicy<
            shell_v1::CloudShellServiceRetryPolicyOption::Type,
            shell_v1::CloudShellServiceBackoffPolicyOption::Type>(
            options.get<shell_v1::CloudShellServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          shell_v1::CloudShellServiceConnectionIdempotencyPolicyOption>()) {
    options.set<shell_v1::CloudShellServiceConnectionIdempotencyPolicyOption>(
        shell_v1::MakeDefaultCloudShellServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1_internal
}  // namespace cloud
}  // namespace google
