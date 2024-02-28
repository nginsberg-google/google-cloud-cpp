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

#include "google/cloud/composer/v1/internal/environments_connection_impl.h"
#include "google/cloud/composer/v1/internal/environments_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<composer_v1::EnvironmentsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<composer_v1::EnvironmentsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<composer_v1::EnvironmentsBackoffPolicyOption>()->clone();
}

std::unique_ptr<composer_v1::EnvironmentsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<composer_v1::EnvironmentsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<composer_v1::EnvironmentsPollingPolicyOption>()->clone();
}

}  // namespace

EnvironmentsConnectionImpl::EnvironmentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<composer_v1_internal::EnvironmentsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EnvironmentsConnection::options())) {}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsConnectionImpl::CreateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateEnvironment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::Environment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::orchestration::airflow::service::v1::
                         CreateEnvironmentRequest const& request) {
        return stub->AsyncCreateEnvironment(cq, std::move(context),
                                            std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::orchestration::airflow::service::v1::Environment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsConnectionImpl::GetEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEnvironment(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 GetEnvironmentRequest const& request) {
        return stub_->GetEnvironment(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsConnectionImpl::ListEnvironments(
    google::cloud::orchestration::airflow::service::v1::ListEnvironmentsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEnvironments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::orchestration::airflow::service::v1::Environment>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<composer_v1::EnvironmentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::orchestration::airflow::service::v1::
              ListEnvironmentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest const& request) {
              return stub->ListEnvironments(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse r) {
        std::vector<
            google::cloud::orchestration::airflow::service::v1::Environment>
            result(r.environments().size());
        auto& messages = *r.mutable_environments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsConnectionImpl::UpdateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateEnvironment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::Environment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::orchestration::airflow::service::v1::
                         UpdateEnvironmentRequest const& request) {
        return stub->AsyncUpdateEnvironment(cq, std::move(context),
                                            std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::orchestration::airflow::service::v1::Environment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
EnvironmentsConnectionImpl::DeleteEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteEnvironment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::orchestration::airflow::service::v1::
                         DeleteEnvironmentRequest const& request) {
        return stub->AsyncDeleteEnvironment(cq, std::move(context),
                                            std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::orchestration::airflow::service::v1::
              OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ExecuteAirflowCommandResponse>
EnvironmentsConnectionImpl::ExecuteAirflowCommand(
    google::cloud::orchestration::airflow::service::v1::
        ExecuteAirflowCommandRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExecuteAirflowCommand(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 ExecuteAirflowCommandRequest const& request) {
        return stub_->ExecuteAirflowCommand(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             StopAirflowCommandResponse>
EnvironmentsConnectionImpl::StopAirflowCommand(
    google::cloud::orchestration::airflow::service::v1::
        StopAirflowCommandRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StopAirflowCommand(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 StopAirflowCommandRequest const& request) {
        return stub_->StopAirflowCommand(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             PollAirflowCommandResponse>
EnvironmentsConnectionImpl::PollAirflowCommand(
    google::cloud::orchestration::airflow::service::v1::
        PollAirflowCommandRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PollAirflowCommand(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 PollAirflowCommandRequest const& request) {
        return stub_->PollAirflowCommand(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::orchestration::airflow::service::v1::
                ListWorkloadsResponse::ComposerWorkload>
EnvironmentsConnectionImpl::ListWorkloads(
    google::cloud::orchestration::airflow::service::v1::ListWorkloadsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListWorkloads(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::orchestration::airflow::service::v1::
                      ListWorkloadsResponse::ComposerWorkload>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<composer_v1::EnvironmentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::orchestration::airflow::service::v1::
              ListWorkloadsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListWorkloadsRequest const& request) {
              return stub->ListWorkloads(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::orchestration::airflow::service::v1::
             ListWorkloadsResponse r) {
        std::vector<google::cloud::orchestration::airflow::service::v1::
                        ListWorkloadsResponse::ComposerWorkload>
            result(r.workloads().size());
        auto& messages = *r.mutable_workloads();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsConnectionImpl::CreateUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsSecretRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateUserWorkloadsSecret(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 CreateUserWorkloadsSecretRequest const& request) {
        return stub_->CreateUserWorkloadsSecret(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsConnectionImpl::GetUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsSecretRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetUserWorkloadsSecret(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 GetUserWorkloadsSecretRequest const& request) {
        return stub_->GetUserWorkloadsSecret(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsConnectionImpl::ListUserWorkloadsSecrets(
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsSecretsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListUserWorkloadsSecrets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<composer_v1::EnvironmentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::orchestration::airflow::service::v1::
              ListUserWorkloadsSecretsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListUserWorkloadsSecretsRequest const& request) {
              return stub->ListUserWorkloadsSecrets(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::orchestration::airflow::service::v1::
             ListUserWorkloadsSecretsResponse r) {
        std::vector<google::cloud::orchestration::airflow::service::v1::
                        UserWorkloadsSecret>
            result(r.user_workloads_secrets().size());
        auto& messages = *r.mutable_user_workloads_secrets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
EnvironmentsConnectionImpl::UpdateUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsSecretRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateUserWorkloadsSecret(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateUserWorkloadsSecretRequest const& request) {
        return stub_->UpdateUserWorkloadsSecret(context, options, request);
      },
      *current, request, __func__);
}

Status EnvironmentsConnectionImpl::DeleteUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsSecretRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteUserWorkloadsSecret(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteUserWorkloadsSecretRequest const& request) {
        return stub_->DeleteUserWorkloadsSecret(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsConnectionImpl::CreateUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsConfigMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateUserWorkloadsConfigMap(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 CreateUserWorkloadsConfigMapRequest const& request) {
        return stub_->CreateUserWorkloadsConfigMap(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsConnectionImpl::GetUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsConfigMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetUserWorkloadsConfigMap(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 GetUserWorkloadsConfigMapRequest const& request) {
        return stub_->GetUserWorkloadsConfigMap(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsConnectionImpl::ListUserWorkloadsConfigMaps(
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsConfigMapsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListUserWorkloadsConfigMaps(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::orchestration::airflow::service::v1::
                      UserWorkloadsConfigMap>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<composer_v1::EnvironmentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::orchestration::airflow::service::v1::
              ListUserWorkloadsConfigMapsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListUserWorkloadsConfigMapsRequest const& request) {
              return stub->ListUserWorkloadsConfigMaps(context, options,
                                                       request);
            },
            options, r, function_name);
      },
      [](google::cloud::orchestration::airflow::service::v1::
             ListUserWorkloadsConfigMapsResponse r) {
        std::vector<google::cloud::orchestration::airflow::service::v1::
                        UserWorkloadsConfigMap>
            result(r.user_workloads_config_maps().size());
        auto& messages = *r.mutable_user_workloads_config_maps();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<
    google::cloud::orchestration::airflow::service::v1::UserWorkloadsConfigMap>
EnvironmentsConnectionImpl::UpdateUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsConfigMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateUserWorkloadsConfigMap(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateUserWorkloadsConfigMapRequest const& request) {
        return stub_->UpdateUserWorkloadsConfigMap(context, options, request);
      },
      *current, request, __func__);
}

Status EnvironmentsConnectionImpl::DeleteUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsConfigMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteUserWorkloadsConfigMap(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteUserWorkloadsConfigMapRequest const& request) {
        return stub_->DeleteUserWorkloadsConfigMap(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
EnvironmentsConnectionImpl::SaveSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->SaveSnapshot(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::orchestration::airflow::service::v1::
                         SaveSnapshotRequest const& request) {
        return stub->AsyncSaveSnapshot(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::orchestration::airflow::service::v1::
              SaveSnapshotResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
EnvironmentsConnectionImpl::LoadSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->LoadSnapshot(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::orchestration::airflow::service::v1::
                         LoadSnapshotRequest const& request) {
        return stub->AsyncLoadSnapshot(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::orchestration::airflow::service::v1::
              LoadSnapshotResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::orchestration::airflow::service::v1::
                    DatabaseFailoverResponse>>
EnvironmentsConnectionImpl::DatabaseFailover(
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DatabaseFailover(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::orchestration::airflow::service::v1::
                         DatabaseFailoverRequest const& request) {
        return stub->AsyncDatabaseFailover(cq, std::move(context),
                                           std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::orchestration::airflow::service::v1::
              DatabaseFailoverResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             FetchDatabasePropertiesResponse>
EnvironmentsConnectionImpl::FetchDatabaseProperties(
    google::cloud::orchestration::airflow::service::v1::
        FetchDatabasePropertiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FetchDatabaseProperties(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::orchestration::airflow::service::v1::
                 FetchDatabasePropertiesRequest const& request) {
        return stub_->FetchDatabaseProperties(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
