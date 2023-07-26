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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_option_defaults.h"
#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_connection.h"
#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AppGatewaysServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_APP_GATEWAYS_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_APP_GATEWAYS_SERVICE_AUTHORITY",
      "beyondcorp.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<
          beyondcorp_appgateways_v1::AppGatewaysServiceRetryPolicyOption>()) {
    options.set<beyondcorp_appgateways_v1::AppGatewaysServiceRetryPolicyOption>(
        beyondcorp_appgateways_v1::AppGatewaysServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          beyondcorp_appgateways_v1::AppGatewaysServiceBackoffPolicyOption>()) {
    options
        .set<beyondcorp_appgateways_v1::AppGatewaysServiceBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<
          beyondcorp_appgateways_v1::AppGatewaysServicePollingPolicyOption>()) {
    options.set<
        beyondcorp_appgateways_v1::AppGatewaysServicePollingPolicyOption>(
        GenericPollingPolicy<beyondcorp_appgateways_v1::
                                 AppGatewaysServiceRetryPolicyOption::Type,
                             beyondcorp_appgateways_v1::
                                 AppGatewaysServiceBackoffPolicyOption::Type>(
            options
                .get<beyondcorp_appgateways_v1::
                         AppGatewaysServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<beyondcorp_appgateways_v1::
                       AppGatewaysServiceConnectionIdempotencyPolicyOption>()) {
    options.set<beyondcorp_appgateways_v1::
                    AppGatewaysServiceConnectionIdempotencyPolicyOption>(
        beyondcorp_appgateways_v1::
            MakeDefaultAppGatewaysServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1_internal
}  // namespace cloud
}  // namespace google
