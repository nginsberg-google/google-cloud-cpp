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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GoldenThingAdminTracingStub::GoldenThingAdminTracingStub(
    std::shared_ptr<GoldenThingAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::test::admin::database::v1::ListDatabasesResponse> GoldenThingAdminTracingStub::ListDatabases(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListDatabasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "ListDatabases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDatabases(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminTracingStub::AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "CreateDatabase");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateDatabase(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::test::admin::database::v1::Database> GoldenThingAdminTracingStub::GetDatabase(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GetDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "GetDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDatabase(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminTracingStub::AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "UpdateDatabaseDdl");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateDatabaseDdl(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status GoldenThingAdminTracingStub::DropDatabase(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::DropDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "DropDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DropDatabase(context, options, request));
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse> GoldenThingAdminTracingStub::GetDatabaseDdl(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "GetDatabaseDdl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDatabaseDdl(context, options, request));
}

StatusOr<google::iam::v1::Policy> GoldenThingAdminTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> GoldenThingAdminTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse> GoldenThingAdminTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminTracingStub::AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "CreateBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBackup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::test::admin::database::v1::Backup> GoldenThingAdminTracingStub::GetBackup(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBackup(context, options, request));
}

StatusOr<google::test::admin::database::v1::Backup> GoldenThingAdminTracingStub::UpdateBackup(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateBackup(context, options, request));
}

Status GoldenThingAdminTracingStub::DeleteBackup(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteBackup(context, options, request));
}

StatusOr<google::test::admin::database::v1::ListBackupsResponse> GoldenThingAdminTracingStub::ListBackups(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminTracingStub::AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "RestoreDatabase");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRestoreDatabase(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse> GoldenThingAdminTracingStub::ListDatabaseOperations(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "ListDatabaseOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDatabaseOperations(context, options, request));
}

StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse> GoldenThingAdminTracingStub::ListBackupOperations(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "ListBackupOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackupOperations(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminTracingStub::AsyncLongRunningWithoutRouting(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "LongRunningWithoutRouting");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncLongRunningWithoutRouting(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::test::admin::database::v1::Database>> GoldenThingAdminTracingStub::AsyncGetDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::GetDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "GetDatabase");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetDatabase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> GoldenThingAdminTracingStub::AsyncDropDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::DropDatabaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenThingAdmin", "DropDatabase");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDropDatabase(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> GoldenThingAdminTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<GoldenThingAdminStub> MakeGoldenThingAdminTracingStub(
    std::shared_ptr<GoldenThingAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<GoldenThingAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
