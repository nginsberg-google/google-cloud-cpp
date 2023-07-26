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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_INTERNAL_HTTPS_HEALTH_CHECKS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_INTERNAL_HTTPS_HEALTH_CHECKS_TRACING_CONNECTION_H

#include "google/cloud/compute/https_health_checks/v1/https_health_checks_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_https_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class HttpsHealthChecksTracingConnection
    : public compute_https_health_checks_v1::HttpsHealthChecksConnection {
 public:
  ~HttpsHealthChecksTracingConnection() override = default;

  explicit HttpsHealthChecksTracingConnection(
      std::shared_ptr<
          compute_https_health_checks_v1::HttpsHealthChecksConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          DeleteHttpsHealthChecksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::HttpsHealthCheck>
  GetHttpsHealthChecks(google::cloud::cpp::compute::https_health_checks::v1::
                           GetHttpsHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          InsertHttpsHealthChecksRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::HttpsHealthCheck>
  ListHttpsHealthChecks(google::cloud::cpp::compute::https_health_checks::v1::
                            ListHttpsHealthChecksRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          PatchHttpsHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          UpdateHttpsHealthChecksRequest const& request) override;

 private:
  std::shared_ptr<compute_https_health_checks_v1::HttpsHealthChecksConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_https_health_checks_v1::HttpsHealthChecksConnection>
MakeHttpsHealthChecksTracingConnection(
    std::shared_ptr<compute_https_health_checks_v1::HttpsHealthChecksConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_INTERNAL_HTTPS_HEALTH_CHECKS_TRACING_CONNECTION_H
