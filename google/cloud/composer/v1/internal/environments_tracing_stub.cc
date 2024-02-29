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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/v1/internal/environments_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EnvironmentsTracingStub::EnvironmentsTracingStub(
    std::shared_ptr<EnvironmentsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "CreateEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateEnvironment(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsTracingStub::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEnvironment(context, options, request));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse>
EnvironmentsTracingStub::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListEnvironmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "ListEnvironments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEnvironments(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "UpdateEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateEnvironment(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "DeleteEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteEnvironment(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ExecuteAirflowCommandResponse>
EnvironmentsTracingStub::ExecuteAirflowCommand(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ExecuteAirflowCommandRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "ExecuteAirflowCommand");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ExecuteAirflowCommand(context, options, request));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             StopAirflowCommandResponse>
EnvironmentsTracingStub::StopAirflowCommand(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        StopAirflowCommandRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "StopAirflowCommand");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->StopAirflowCommand(context, options, request));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             PollAirflowCommandResponse>
EnvironmentsTracingStub::PollAirflowCommand(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        PollAirflowCommandRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "PollAirflowCommand");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->PollAirflowCommand(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::ListWorkloadsResponse>
EnvironmentsTracingStub::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListWorkloadsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "ListWorkloads");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListWorkloads(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsTracingStub::CreateUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "CreateUserWorkloadsSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateUserWorkloadsSecret(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsTracingStub::GetUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "GetUserWorkloadsSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetUserWorkloadsSecret(context, options, request));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListUserWorkloadsSecretsResponse>
EnvironmentsTracingStub::ListUserWorkloadsSecrets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsSecretsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "ListUserWorkloadsSecrets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListUserWorkloadsSecrets(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsTracingStub::UpdateUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "UpdateUserWorkloadsSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateUserWorkloadsSecret(context, options, request));
}

Status EnvironmentsTracingStub::DeleteUserWorkloadsSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "DeleteUserWorkloadsSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteUserWorkloadsSecret(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsTracingStub::CreateUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsConfigMapRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "CreateUserWorkloadsConfigMap");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateUserWorkloadsConfigMap(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsTracingStub::GetUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsConfigMapRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "GetUserWorkloadsConfigMap");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetUserWorkloadsConfigMap(context, options, request));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListUserWorkloadsConfigMapsResponse>
EnvironmentsTracingStub::ListUserWorkloadsConfigMaps(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsConfigMapsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "ListUserWorkloadsConfigMaps");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListUserWorkloadsConfigMaps(context, options, request));
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsTracingStub::UpdateUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsConfigMapRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "UpdateUserWorkloadsConfigMap");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateUserWorkloadsConfigMap(context, options, request));
}

Status EnvironmentsTracingStub::DeleteUserWorkloadsConfigMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsConfigMapRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "DeleteUserWorkloadsConfigMap");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteUserWorkloadsConfigMap(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncSaveSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "SaveSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncSaveSnapshot(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncLoadSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "LoadSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncLoadSnapshot(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncDatabaseFailover(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "DatabaseFailover");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDatabaseFailover(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             FetchDatabasePropertiesResponse>
EnvironmentsTracingStub::FetchDatabaseProperties(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orchestration::airflow::service::v1::
        FetchDatabasePropertiesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "FetchDatabaseProperties");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->FetchDatabaseProperties(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> EnvironmentsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<EnvironmentsStub> MakeEnvironmentsTracingStub(
    std::shared_ptr<EnvironmentsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EnvironmentsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
