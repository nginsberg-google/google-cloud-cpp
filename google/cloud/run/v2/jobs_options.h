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
// source: google/cloud/run/v2/job.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_JOBS_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_JOBS_OPTIONS_H

#include "google/cloud/run/v2/jobs_connection.h"
#include "google/cloud/run/v2/jobs_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-run-options
 */
struct JobsRetryPolicyOption {
  using Type = std::shared_ptr<JobsRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-run-options
 */
struct JobsBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-run-options
 */
struct JobsConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<JobsConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-run-options
 */
struct JobsPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to Jobs.
 *
 * @ingroup google-cloud-run-options
 */
using JobsPolicyOptionList =
    OptionList<JobsRetryPolicyOption, JobsBackoffPolicyOption,
               JobsPollingPolicyOption, JobsConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_JOBS_OPTIONS_H
