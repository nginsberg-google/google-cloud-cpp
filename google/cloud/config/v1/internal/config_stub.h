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
// source: google/cloud/config/v1/config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_INTERNAL_CONFIG_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_INTERNAL_CONFIG_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/config/v1/config.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfigStub {
 public:
  virtual ~ConfigStub() = 0;

  virtual StatusOr<google::cloud::config::v1::ListDeploymentsResponse>
  ListDeployments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListDeploymentsRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::Deployment> GetDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::CreateDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::UpdateDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::DeleteDeploymentRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::ListRevisionsResponse>
  ListRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListRevisionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::Revision> GetRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetRevisionRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::Resource> GetResource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetResourceRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::ListResourcesResponse>
  ListResources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListResourcesRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::Statefile>
  ExportDeploymentStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportDeploymentStatefileRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::config::v1::Statefile>
  ExportRevisionStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportRevisionStatefileRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::config::v1::Statefile> ImportStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ImportStatefileRequest const& request) = 0;

  virtual Status DeleteStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::DeleteStatefileRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncLockDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::LockDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUnlockDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::UnlockDeploymentRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::LockInfo> ExportLockInfo(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportLockInfoRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreatePreview(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::CreatePreviewRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::Preview> GetPreview(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetPreviewRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::ListPreviewsResponse>
  ListPreviews(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListPreviewsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeletePreview(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::DeletePreviewRequest const& request) = 0;

  virtual StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
  ExportPreviewResult(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportPreviewResultRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultConfigStub : public ConfigStub {
 public:
  DefaultConfigStub(
      std::unique_ptr<google::cloud::config::v1::Config::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::config::v1::ListDeploymentsResponse> ListDeployments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListDeploymentsRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::Deployment> GetDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::CreateDeploymentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::UpdateDeploymentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::DeleteDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::ListRevisionsResponse> ListRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListRevisionsRequest const& request) override;

  StatusOr<google::cloud::config::v1::Revision> GetRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetRevisionRequest const& request) override;

  StatusOr<google::cloud::config::v1::Resource> GetResource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetResourceRequest const& request) override;

  StatusOr<google::cloud::config::v1::ListResourcesResponse> ListResources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListResourcesRequest const& request) override;

  StatusOr<google::cloud::config::v1::Statefile> ExportDeploymentStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportDeploymentStatefileRequest const&
          request) override;

  StatusOr<google::cloud::config::v1::Statefile> ExportRevisionStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportRevisionStatefileRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::Statefile> ImportStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ImportStatefileRequest const& request)
      override;

  Status DeleteStatefile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::DeleteStatefileRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncLockDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::LockDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUnlockDeployment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::UnlockDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::config::v1::LockInfo> ExportLockInfo(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportLockInfoRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePreview(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::CreatePreviewRequest const& request) override;

  StatusOr<google::cloud::config::v1::Preview> GetPreview(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::GetPreviewRequest const& request) override;

  StatusOr<google::cloud::config::v1::ListPreviewsResponse> ListPreviews(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ListPreviewsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePreview(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::config::v1::DeletePreviewRequest const& request) override;

  StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
  ExportPreviewResult(
      grpc::ClientContext& context, Options const& options,
      google::cloud::config::v1::ExportPreviewResultRequest const& request)
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
  std::unique_ptr<google::cloud::config::v1::Config::StubInterface> grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_INTERNAL_CONFIG_STUB_H
