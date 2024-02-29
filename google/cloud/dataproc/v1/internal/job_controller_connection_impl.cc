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
// source: google/cloud/dataproc/v1/jobs.proto

#include "google/cloud/dataproc/v1/internal/job_controller_connection_impl.h"
#include "google/cloud/dataproc/v1/internal/job_controller_option_defaults.h"
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
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dataproc_v1::JobControllerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dataproc_v1::JobControllerRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dataproc_v1::JobControllerBackoffPolicyOption>()->clone();
}

std::unique_ptr<dataproc_v1::JobControllerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dataproc_v1::JobControllerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dataproc_v1::JobControllerPollingPolicyOption>()->clone();
}

}  // namespace

JobControllerConnectionImpl::JobControllerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dataproc_v1_internal::JobControllerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      JobControllerConnection::options())) {}

StatusOr<google::cloud::dataproc::v1::Job>
JobControllerConnectionImpl::SubmitJob(
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SubmitJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataproc::v1::SubmitJobRequest const& request) {
        return stub_->SubmitJob(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dataproc::v1::Job>>
JobControllerConnectionImpl::SubmitJobAsOperation(
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->SubmitJobAsOperation(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::Job>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataproc::v1::SubmitJobRequest const& request) {
        return stub->AsyncSubmitJobAsOperation(cq, std::move(context),
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
          google::cloud::dataproc::v1::Job>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerConnectionImpl::GetJob(
    google::cloud::dataproc::v1::GetJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataproc::v1::GetJobRequest const& request) {
        return stub_->GetJob(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::dataproc::v1::Job>
JobControllerConnectionImpl::ListJobs(
    google::cloud::dataproc::v1::ListJobsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dataproc::v1::Job>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dataproc_v1::JobControllerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dataproc::v1::ListJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::dataproc::v1::ListJobsRequest const& request) {
              return stub->ListJobs(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dataproc::v1::ListJobsResponse r) {
        std::vector<google::cloud::dataproc::v1::Job> result(r.jobs().size());
        auto& messages = *r.mutable_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dataproc::v1::Job>
JobControllerConnectionImpl::UpdateJob(
    google::cloud::dataproc::v1::UpdateJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataproc::v1::UpdateJobRequest const& request) {
        return stub_->UpdateJob(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dataproc::v1::Job>
JobControllerConnectionImpl::CancelJob(
    google::cloud::dataproc::v1::CancelJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataproc::v1::CancelJobRequest const& request) {
        return stub_->CancelJob(context, options, request);
      },
      *current, request, __func__);
}

Status JobControllerConnectionImpl::DeleteJob(
    google::cloud::dataproc::v1::DeleteJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataproc::v1::DeleteJobRequest const& request) {
        return stub_->DeleteJob(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
