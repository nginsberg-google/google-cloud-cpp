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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#include "google/cloud/aiplatform/v1/internal/schedule_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/schedule_option_defaults.h"
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
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::ScheduleServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::ScheduleServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::ScheduleServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::ScheduleServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::ScheduleServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::ScheduleServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

ScheduleServiceConnectionImpl::ScheduleServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::ScheduleServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ScheduleServiceConnection::options())) {}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceConnectionImpl::CreateSchedule(
    google::cloud::aiplatform::v1::CreateScheduleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateSchedule(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateScheduleRequest const& request) {
        return stub_->CreateSchedule(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ScheduleServiceConnectionImpl::DeleteSchedule(
    google::cloud::aiplatform::v1::DeleteScheduleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteSchedule(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::DeleteScheduleRequest const& request) {
        return stub->AsyncDeleteSchedule(cq, std::move(context),
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceConnectionImpl::GetSchedule(
    google::cloud::aiplatform::v1::GetScheduleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSchedule(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetScheduleRequest const& request) {
        return stub_->GetSchedule(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceConnectionImpl::ListSchedules(
    google::cloud::aiplatform::v1::ListSchedulesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSchedules(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Schedule>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::ScheduleServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::ListSchedulesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::ListSchedulesRequest const&
                       request) {
              return stub->ListSchedules(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListSchedulesResponse r) {
        std::vector<google::cloud::aiplatform::v1::Schedule> result(
            r.schedules().size());
        auto& messages = *r.mutable_schedules();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status ScheduleServiceConnectionImpl::PauseSchedule(
    google::cloud::aiplatform::v1::PauseScheduleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PauseSchedule(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::PauseScheduleRequest const& request) {
        return stub_->PauseSchedule(context, options, request);
      },
      *current, request, __func__);
}

Status ScheduleServiceConnectionImpl::ResumeSchedule(
    google::cloud::aiplatform::v1::ResumeScheduleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ResumeSchedule(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ResumeScheduleRequest const& request) {
        return stub_->ResumeSchedule(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceConnectionImpl::UpdateSchedule(
    google::cloud::aiplatform::v1::UpdateScheduleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSchedule(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UpdateScheduleRequest const& request) {
        return stub_->UpdateSchedule(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
