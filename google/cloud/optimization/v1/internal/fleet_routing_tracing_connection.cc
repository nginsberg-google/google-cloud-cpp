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
// source: google/cloud/optimization/v1/fleet_routing.proto

#include "google/cloud/optimization/v1/internal/fleet_routing_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace optimization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FleetRoutingTracingConnection::FleetRoutingTracingConnection(
    std::shared_ptr<optimization_v1::FleetRoutingConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::optimization::v1::OptimizeToursResponse>
FleetRoutingTracingConnection::OptimizeTours(
    google::cloud::optimization::v1::OptimizeToursRequest const& request) {
  auto span = internal::MakeSpan(
      "optimization_v1::FleetRoutingConnection::OptimizeTours");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->OptimizeTours(request));
}

future<StatusOr<google::cloud::optimization::v1::BatchOptimizeToursResponse>>
FleetRoutingTracingConnection::BatchOptimizeTours(
    google::cloud::optimization::v1::BatchOptimizeToursRequest const& request) {
  auto span = internal::MakeSpan(
      "optimization_v1::FleetRoutingConnection::BatchOptimizeTours");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchOptimizeTours(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<optimization_v1::FleetRoutingConnection>
MakeFleetRoutingTracingConnection(
    std::shared_ptr<optimization_v1::FleetRoutingConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<FleetRoutingTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization_v1_internal
}  // namespace cloud
}  // namespace google
