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
// source: google/cloud/compute/interconnects/v1/interconnects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECTS_V1_INTERNAL_INTERCONNECTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECTS_V1_INTERNAL_INTERCONNECTS_TRACING_CONNECTION_H

#include "google/cloud/compute/interconnects/v1/interconnects_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnects_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class InterconnectsTracingConnection
    : public compute_interconnects_v1::InterconnectsConnection {
 public:
  ~InterconnectsTracingConnection() override = default;

  explicit InterconnectsTracingConnection(
      std::shared_ptr<compute_interconnects_v1::InterconnectsConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInterconnects(google::cloud::cpp::compute::interconnects::v1::
                          DeleteInterconnectsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Interconnect> GetInterconnects(
      google::cloud::cpp::compute::interconnects::v1::
          GetInterconnectsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectsGetDiagnosticsResponse>
  GetDiagnostics(google::cloud::cpp::compute::interconnects::v1::
                     GetDiagnosticsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInterconnects(google::cloud::cpp::compute::interconnects::v1::
                          InsertInterconnectsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Interconnect> ListInterconnects(
      google::cloud::cpp::compute::interconnects::v1::ListInterconnectsRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInterconnects(google::cloud::cpp::compute::interconnects::v1::
                         PatchInterconnectsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest const&
          request) override;

 private:
  std::shared_ptr<compute_interconnects_v1::InterconnectsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_interconnects_v1::InterconnectsConnection>
MakeInterconnectsTracingConnection(
    std::shared_ptr<compute_interconnects_v1::InterconnectsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnects_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECTS_V1_INTERNAL_INTERCONNECTS_TRACING_CONNECTION_H
