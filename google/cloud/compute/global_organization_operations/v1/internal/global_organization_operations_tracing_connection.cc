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
// source:
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GlobalOrganizationOperationsTracingConnection::
    GlobalOrganizationOperationsTracingConnection(
        std::shared_ptr<compute_global_organization_operations_v1::
                            GlobalOrganizationOperationsConnection>
            child)
    : child_(std::move(child)) {}

Status GlobalOrganizationOperationsTracingConnection::
    DeleteGlobalOrganizationOperations(
        google::cloud::cpp::compute::global_organization_operations::v1::
            DeleteGlobalOrganizationOperationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_global_organization_operations_v1::"
      "GlobalOrganizationOperationsConnection::"
      "DeleteGlobalOrganizationOperations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteGlobalOrganizationOperations(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsTracingConnection::GetGlobalOrganizationOperations(
    google::cloud::cpp::compute::global_organization_operations::v1::
        GetGlobalOrganizationOperationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_global_organization_operations_v1::"
      "GlobalOrganizationOperationsConnection::"
      "GetGlobalOrganizationOperations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetGlobalOrganizationOperations(request));
}

StreamRange<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsTracingConnection::ListGlobalOrganizationOperations(
    google::cloud::cpp::compute::global_organization_operations::v1::
        ListGlobalOrganizationOperationsRequest request) {
  auto span = internal::MakeSpan(
      "compute_global_organization_operations_v1::"
      "GlobalOrganizationOperationsConnection::"
      "ListGlobalOrganizationOperations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListGlobalOrganizationOperations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Operation>(std::move(span),
                                                  std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_global_organization_operations_v1::
                    GlobalOrganizationOperationsConnection>
MakeGlobalOrganizationOperationsTracingConnection(
    std::shared_ptr<compute_global_organization_operations_v1::
                        GlobalOrganizationOperationsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<GlobalOrganizationOperationsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1_internal
}  // namespace cloud
}  // namespace google
