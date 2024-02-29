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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#include "google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies_connection.h"
#include "google/cloud/compute/target_grpc_proxies/v1/internal/target_grpc_proxies_option_defaults.h"
#include "google/cloud/compute/target_grpc_proxies/v1/internal/target_grpc_proxies_tracing_connection.h"
#include "google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetGrpcProxiesConnection::~TargetGrpcProxiesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesConnection::DeleteTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        DeleteTargetGrpcProxyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
TargetGrpcProxiesConnection::GetTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        GetTargetGrpcProxyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesConnection::InsertTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        InsertTargetGrpcProxyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::TargetGrpcProxy>
TargetGrpcProxiesConnection::ListTargetGrpcProxies(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        ListTargetGrpcProxiesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::TargetGrpcProxy>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesConnection::PatchTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        PatchTargetGrpcProxyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1
}  // namespace cloud
}  // namespace google
