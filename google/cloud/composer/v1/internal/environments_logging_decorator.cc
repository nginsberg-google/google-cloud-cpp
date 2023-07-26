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

#include "google/cloud/composer/v1/internal/environments_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orchestration/airflow/service/v1/environments.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsLogging::EnvironmentsLogging(
    std::shared_ptr<EnvironmentsStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 CreateEnvironmentRequest const& request) {
        return child_->AsyncCreateEnvironment(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsLogging::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 GetEnvironmentRequest const& request) {
        return child_->GetEnvironment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse>
EnvironmentsLogging::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        ListEnvironmentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 ListEnvironmentsRequest const& request) {
        return child_->ListEnvironments(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateEnvironmentRequest const& request) {
        return child_->AsyncUpdateEnvironment(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteEnvironmentRequest const& request) {
        return child_->AsyncDeleteEnvironment(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ExecuteAirflowCommandResponse>
EnvironmentsLogging::ExecuteAirflowCommand(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        ExecuteAirflowCommandRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 ExecuteAirflowCommandRequest const& request) {
        return child_->ExecuteAirflowCommand(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             StopAirflowCommandResponse>
EnvironmentsLogging::StopAirflowCommand(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        StopAirflowCommandRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 StopAirflowCommandRequest const& request) {
        return child_->StopAirflowCommand(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             PollAirflowCommandResponse>
EnvironmentsLogging::PollAirflowCommand(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        PollAirflowCommandRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 PollAirflowCommandRequest const& request) {
        return child_->PollAirflowCommand(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncSaveSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 SaveSnapshotRequest const& request) {
        return child_->AsyncSaveSnapshot(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncLoadSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 LoadSnapshotRequest const& request) {
        return child_->AsyncLoadSnapshot(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncDatabaseFailover(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 DatabaseFailoverRequest const& request) {
        return child_->AsyncDatabaseFailover(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             FetchDatabasePropertiesResponse>
EnvironmentsLogging::FetchDatabaseProperties(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        FetchDatabasePropertiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 FetchDatabasePropertiesRequest const& request) {
        return child_->FetchDatabaseProperties(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> EnvironmentsLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
