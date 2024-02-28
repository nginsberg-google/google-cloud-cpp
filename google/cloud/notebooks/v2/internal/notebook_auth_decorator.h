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
// source: google/cloud/notebooks/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_INTERNAL_NOTEBOOK_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_INTERNAL_NOTEBOOK_AUTH_DECORATOR_H

#include "google/cloud/notebooks/v2/internal/notebook_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace notebooks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotebookServiceAuth : public NotebookServiceStub {
 public:
  ~NotebookServiceAuth() override = default;
  NotebookServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<NotebookServiceStub> child);

  StatusOr<google::cloud::notebooks::v2::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v2::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v2::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::StartInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::StopInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::ResetInstanceRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>
  CheckInstanceUpgradability(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::UpgradeInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRollbackInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::RollbackInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDiagnoseInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request)
      override;

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
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<NotebookServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_INTERNAL_NOTEBOOK_AUTH_DECORATOR_H
