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
// source: google/cloud/metastore/v1/metastore.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataprocMetastoreTracingStub::DataprocMetastoreTracingStub(
    std::shared_ptr<DataprocMetastoreStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::metastore::v1::ListServicesResponse>
DataprocMetastoreTracingStub::ListServices(
    grpc::ClientContext& context,
    google::cloud::metastore::v1::ListServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListServices(context, request));
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreTracingStub::GetService(
    grpc::ClientContext& context,
    google::cloud::metastore::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "GetService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetService(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "CreateService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "UpdateService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "DeleteService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::metastore::v1::ListMetadataImportsResponse>
DataprocMetastoreTracingStub::ListMetadataImports(
    grpc::ClientContext& context,
    google::cloud::metastore::v1::ListMetadataImportsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "ListMetadataImports");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListMetadataImports(context, request));
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreTracingStub::GetMetadataImport(
    grpc::ClientContext& context,
    google::cloud::metastore::v1::GetMetadataImportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "GetMetadataImport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetMetadataImport(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncCreateMetadataImport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "CreateMetadataImport");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateMetadataImport(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncUpdateMetadataImport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "UpdateMetadataImport");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateMetadataImport(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncExportMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "ExportMetadata");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncExportMetadata(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncRestoreService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "RestoreService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncRestoreService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::metastore::v1::ListBackupsResponse>
DataprocMetastoreTracingStub::ListBackups(
    grpc::ClientContext& context,
    google::cloud::metastore::v1::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, request));
}

StatusOr<google::cloud::metastore::v1::Backup>
DataprocMetastoreTracingStub::GetBackup(
    grpc::ClientContext& context,
    google::cloud::metastore::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetBackup(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "CreateBackup");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateBackup(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "DeleteBackup");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteBackup(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncQueryMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "QueryMetadata");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncQueryMetadata(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncMoveTableToDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastore", "MoveTableToDatabase");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncMoveTableToDatabase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncAlterMetadataResourceLocation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.metastore.v1.DataprocMetastore",
                             "AlterMetadataResourceLocation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncAlterMetadataResourceLocation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DataprocMetastoreTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DataprocMetastoreStub> MakeDataprocMetastoreTracingStub(
    std::shared_ptr<DataprocMetastoreStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataprocMetastoreTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
