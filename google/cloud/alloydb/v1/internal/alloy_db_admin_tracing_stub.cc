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
// source: google/cloud/alloydb/v1/service.proto

#include "google/cloud/alloydb/v1/internal/alloy_db_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace alloydb_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AlloyDBAdminTracingStub::AlloyDBAdminTracingStub(
    std::shared_ptr<AlloyDBAdminStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::alloydb::v1::ListClustersResponse>
AlloyDBAdminTracingStub::ListClusters(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, request));
}

StatusOr<google::cloud::alloydb::v1::Cluster>
AlloyDBAdminTracingStub::GetCluster(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::CreateClusterRequest const& request) {
  return child_->AsyncCreateCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::UpdateClusterRequest const& request) {
  return child_->AsyncUpdateCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::DeleteClusterRequest const& request) {
  return child_->AsyncDeleteCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncRestoreCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::RestoreClusterRequest const& request) {
  return child_->AsyncRestoreCluster(cq, std::move(context), request);
}

StatusOr<google::cloud::alloydb::v1::ListInstancesResponse>
AlloyDBAdminTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::alloydb::v1::Instance>
AlloyDBAdminTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::CreateInstanceRequest const& request) {
  return child_->AsyncCreateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncBatchCreateInstances(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request) {
  return child_->AsyncBatchCreateInstances(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::UpdateInstanceRequest const& request) {
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::DeleteInstanceRequest const& request) {
  return child_->AsyncDeleteInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncFailoverInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::FailoverInstanceRequest const& request) {
  return child_->AsyncFailoverInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncRestartInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::RestartInstanceRequest const& request) {
  return child_->AsyncRestartInstance(cq, std::move(context), request);
}

StatusOr<google::cloud::alloydb::v1::ListBackupsResponse>
AlloyDBAdminTracingStub::ListBackups(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, request));
}

StatusOr<google::cloud::alloydb::v1::Backup> AlloyDBAdminTracingStub::GetBackup(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetBackup(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::CreateBackupRequest const& request) {
  return child_->AsyncCreateBackup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::UpdateBackupRequest const& request) {
  return child_->AsyncUpdateBackup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::alloydb::v1::DeleteBackupRequest const& request) {
  return child_->AsyncDeleteBackup(cq, std::move(context), request);
}

StatusOr<google::cloud::alloydb::v1::ListSupportedDatabaseFlagsResponse>
AlloyDBAdminTracingStub::ListSupportedDatabaseFlags(
    grpc::ClientContext& context,
    google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.alloydb.v1.AlloyDBAdmin",
                                     "ListSupportedDatabaseFlags");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->ListSupportedDatabaseFlags(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AlloyDBAdminTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AlloyDBAdminTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AlloyDBAdminStub> MakeAlloyDBAdminTracingStub(
    std::shared_ptr<AlloyDBAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AlloyDBAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1_internal
}  // namespace cloud
}  // namespace google
