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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/instances_connection.h"
#include "google/cloud/appengine/v1/instances_options.h"
#include "google/cloud/appengine/v1/internal/instances_connection_impl.h"
#include "google/cloud/appengine/v1/internal/instances_option_defaults.h"
#include "google/cloud/appengine/v1/internal/instances_stub_factory.h"
#include "google/cloud/appengine/v1/internal/instances_tracing_connection.h"
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
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstancesConnection::~InstancesConnection() = default;

StreamRange<google::appengine::v1::Instance> InstancesConnection::ListInstances(
    google::appengine::v1::
        ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::appengine::v1::Instance>>();
}

StatusOr<google::appengine::v1::Instance> InstancesConnection::GetInstance(
    google::appengine::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
InstancesConnection::DeleteInstance(
    google::appengine::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Instance>>
InstancesConnection::DebugInstance(
    google::appengine::v1::DebugInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<InstancesConnection> MakeInstancesConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 InstancesPolicyOptionList>(options, __func__);
  options = appengine_v1_internal::InstancesDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = appengine_v1_internal::CreateDefaultInstancesStub(std::move(auth),
                                                                options);
  return appengine_v1_internal::MakeInstancesTracingConnection(
      std::make_shared<appengine_v1_internal::InstancesConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google
