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
// source: google/cloud/sql/v1/cloud_sql_flags.proto

#include "google/cloud/sql/v1/internal/sql_flags_option_defaults.h"
#include "google/cloud/sql/v1/sql_flags_connection.h"
#include "google/cloud/sql/v1/sql_flags_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SqlFlagsServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SQL_FLAGS_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_SQL_FLAGS_SERVICE_AUTHORITY",
      "sqladmin.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<sql_v1::SqlFlagsServiceRetryPolicyOption>()) {
    options.set<sql_v1::SqlFlagsServiceRetryPolicyOption>(
        sql_v1::SqlFlagsServiceLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<sql_v1::SqlFlagsServiceBackoffPolicyOption>()) {
    options.set<sql_v1::SqlFlagsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<sql_v1::SqlFlagsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<sql_v1::SqlFlagsServiceConnectionIdempotencyPolicyOption>(
        sql_v1::MakeDefaultSqlFlagsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
