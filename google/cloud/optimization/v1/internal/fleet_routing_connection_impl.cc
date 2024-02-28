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
// source: google/cloud/optimization/v1/fleet_routing.proto

#include "google/cloud/optimization/v1/internal/fleet_routing_connection_impl.h"
#include "google/cloud/optimization/v1/internal/fleet_routing_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace optimization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<optimization_v1::FleetRoutingRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<optimization_v1::FleetRoutingRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<optimization_v1::FleetRoutingBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<optimization_v1::FleetRoutingConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<optimization_v1::FleetRoutingConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<optimization_v1::FleetRoutingPollingPolicyOption>()
      ->clone();
}

}  // namespace

FleetRoutingConnectionImpl::FleetRoutingConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<optimization_v1_internal::FleetRoutingStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      FleetRoutingConnection::options())) {}

StatusOr<google::cloud::optimization::v1::OptimizeToursResponse>
FleetRoutingConnectionImpl::OptimizeTours(
    google::cloud::optimization::v1::OptimizeToursRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->OptimizeTours(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::optimization::v1::OptimizeToursRequest const&
                 request) {
        return stub_->OptimizeTours(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::optimization::v1::BatchOptimizeToursResponse>>
FleetRoutingConnectionImpl::BatchOptimizeTours(
    google::cloud::optimization::v1::BatchOptimizeToursRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchOptimizeTours(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::optimization::v1::BatchOptimizeToursResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::optimization::v1::BatchOptimizeToursRequest const&
              request) {
        return stub->AsyncBatchOptimizeTours(cq, std::move(context),
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
          google::cloud::optimization::v1::BatchOptimizeToursResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization_v1_internal
}  // namespace cloud
}  // namespace google
