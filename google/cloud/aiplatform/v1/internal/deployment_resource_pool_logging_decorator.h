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
// source: google/cloud/aiplatform/v1/deployment_resource_pool_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DEPLOYMENT_RESOURCE_POOL_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DEPLOYMENT_RESOURCE_POOL_LOGGING_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/deployment_resource_pool_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DeploymentResourcePoolServiceLogging
    : public DeploymentResourcePoolServiceStub {
 public:
  ~DeploymentResourcePoolServiceLogging() override = default;
  DeploymentResourcePoolServiceLogging(
      std::shared_ptr<DeploymentResourcePoolServiceStub> child,
      TracingOptions tracing_options, std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateDeploymentResourcePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateDeploymentResourcePoolRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>
  GetDeploymentResourcePool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetDeploymentResourcePoolRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListDeploymentResourcePoolsResponse>
  ListDeploymentResourcePools(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListDeploymentResourcePoolsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDeploymentResourcePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteDeploymentResourcePoolRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<DeploymentResourcePoolServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // DeploymentResourcePoolServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DEPLOYMENT_RESOURCE_POOL_LOGGING_DECORATOR_H
