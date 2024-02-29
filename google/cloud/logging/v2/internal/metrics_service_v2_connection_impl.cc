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
// source: google/logging/v2/logging_metrics.proto

#include "google/cloud/logging/v2/internal/metrics_service_v2_connection_impl.h"
#include "google/cloud/logging/v2/internal/metrics_service_v2_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<logging_v2::MetricsServiceV2RetryPolicy> retry_policy(
    Options const& options) {
  return options.get<logging_v2::MetricsServiceV2RetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<logging_v2::MetricsServiceV2BackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<logging_v2::MetricsServiceV2ConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<logging_v2::MetricsServiceV2ConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

MetricsServiceV2ConnectionImpl::MetricsServiceV2ConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<logging_v2_internal::MetricsServiceV2Stub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MetricsServiceV2Connection::options())) {}

StreamRange<google::logging::v2::LogMetric>
MetricsServiceV2ConnectionImpl::ListLogMetrics(
    google::logging::v2::ListLogMetricsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLogMetrics(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogMetric>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<logging_v2::MetricsServiceV2RetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::logging::v2::ListLogMetricsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::logging::v2::ListLogMetricsRequest const& request) {
              return stub->ListLogMetrics(context, options, request);
            },
            options, r, function_name);
      },
      [](google::logging::v2::ListLogMetricsResponse r) {
        std::vector<google::logging::v2::LogMetric> result(r.metrics().size());
        auto& messages = *r.mutable_metrics();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2ConnectionImpl::GetLogMetric(
    google::logging::v2::GetLogMetricRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLogMetric(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetLogMetricRequest const& request) {
        return stub_->GetLogMetric(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2ConnectionImpl::CreateLogMetric(
    google::logging::v2::CreateLogMetricRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateLogMetric(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateLogMetricRequest const& request) {
        return stub_->CreateLogMetric(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2ConnectionImpl::UpdateLogMetric(
    google::logging::v2::UpdateLogMetricRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateLogMetric(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateLogMetricRequest const& request) {
        return stub_->UpdateLogMetric(context, options, request);
      },
      *current, request, __func__);
}

Status MetricsServiceV2ConnectionImpl::DeleteLogMetric(
    google::logging::v2::DeleteLogMetricRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteLogMetric(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::DeleteLogMetricRequest const& request) {
        return stub_->DeleteLogMetric(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
