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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/v1/internal/product_search_option_defaults.h"
#include "google/cloud/vision/v1/product_search_connection.h"
#include "google/cloud/vision/v1/product_search_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ProductSearchDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_PRODUCT_SEARCH_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_PRODUCT_SEARCH_AUTHORITY", "vision.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<vision_v1::ProductSearchRetryPolicyOption>()) {
    options.set<vision_v1::ProductSearchRetryPolicyOption>(
        vision_v1::ProductSearchLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<vision_v1::ProductSearchBackoffPolicyOption>()) {
    options.set<vision_v1::ProductSearchBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<vision_v1::ProductSearchPollingPolicyOption>()) {
    options.set<vision_v1::ProductSearchPollingPolicyOption>(
        GenericPollingPolicy<vision_v1::ProductSearchRetryPolicyOption::Type,
                             vision_v1::ProductSearchBackoffPolicyOption::Type>(
            options.get<vision_v1::ProductSearchRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<vision_v1::ProductSearchConnectionIdempotencyPolicyOption>()) {
    options.set<vision_v1::ProductSearchConnectionIdempotencyPolicyOption>(
        vision_v1::MakeDefaultProductSearchConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
