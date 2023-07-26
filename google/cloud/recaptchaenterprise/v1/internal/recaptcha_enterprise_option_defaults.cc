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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_option_defaults.h"
#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_connection.h"
#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options RecaptchaEnterpriseServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_RECAPTCHA_ENTERPRISE_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_RECAPTCHA_ENTERPRISE_SERVICE_AUTHORITY",
      "recaptchaenterprise.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<recaptchaenterprise_v1::
                       RecaptchaEnterpriseServiceRetryPolicyOption>()) {
    options.set<
        recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicyOption>(
        recaptchaenterprise_v1::
            RecaptchaEnterpriseServiceLimitedTimeRetryPolicy(
                std::chrono::minutes(30))
                .clone());
  }
  if (!options.has<recaptchaenterprise_v1::
                       RecaptchaEnterpriseServiceBackoffPolicyOption>()) {
    options.set<
        recaptchaenterprise_v1::RecaptchaEnterpriseServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          recaptchaenterprise_v1::
              RecaptchaEnterpriseServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        recaptchaenterprise_v1::
            RecaptchaEnterpriseServiceConnectionIdempotencyPolicyOption>(
        recaptchaenterprise_v1::
            MakeDefaultRecaptchaEnterpriseServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
