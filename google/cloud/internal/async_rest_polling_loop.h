// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ASYNC_REST_POLLING_LOOP_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ASYNC_REST_POLLING_LOOP_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/call_context.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <chrono>
#include <functional>
#include <memory>
#include <mutex>
#include <string>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

template <typename OperationType, typename GetOperationRequestType>
using AsyncRestPollLongRunningOperation =
    std::function<future<StatusOr<OperationType>>(
        google::cloud::CompletionQueue&, std::unique_ptr<RestContext>,
        internal::ImmutableOptions, GetOperationRequestType const&)>;

template <typename CancelOperationRequestType>
using AsyncRestCancelLongRunningOperation = std::function<future<Status>(
    google::cloud::CompletionQueue&, std::unique_ptr<RestContext>,
    internal::ImmutableOptions, CancelOperationRequestType const&)>;

template <typename OperationType, typename GetOperationRequestType>
using AsyncRestPollLongRunningOperationImplicitOptions =
    std::function<future<StatusOr<OperationType>>(
        google::cloud::CompletionQueue&, std::unique_ptr<RestContext>,
        GetOperationRequestType const&)>;

template <typename CancelOperationRequestType>
using AsyncRestCancelLongRunningOperationImplicitOptions =
    std::function<future<Status>(google::cloud::CompletionQueue&,
                                 std::unique_ptr<RestContext>,
                                 CancelOperationRequestType const&)>;

/**
 * Runs an asynchronous polling loop for a long-running operation.
 *
 * Long-running operations [aip/151] are used for API methods that take a
 * significant amount of time to complete (think minutes, maybe an hour). The
 * API returns a "promise" object, represented by the
 * `google::longrunning::Operation` proto, and the application (or client
 * library) should periodically poll this object until it is "satisfied".
 *
 * This function runs an asynchronous loop to poll the long-running operation.
 * It periodically invokes the @p poll function to query the status of the
 * operation. If the operation has completed (even if completed with an error)
 * the loop stops. If the operation has not completed, or polling fails (say
 * because the network has a problem), the function sets an asynchronous timer
 * as configured by the polling policy and tries again later. The polling policy
 * can stop the loop too.
 *
 * The function returns a `future<>` that is satisfied when the loop stops. In
 * short, the returned future is satisfied under any of these conditions (a) the
 * polling policy is exhausted before it is known if the operation completed
 * successfully, or (b) the operation completes, and this is known because a
 * `GetOperation()` request returns the operation result.
 *
 * The promise can complete with an error, which is represented by a
 * `google::cloud::Status` object, or with success and some `ReturnType` value.
 * The application may also configure the "polling policy", which may stop the
 * polling even though the operation has not completed.
 *
 * Usually the initial request to "start" the long-running operation also
 * requires a retry loop, which is handled by this function too.
 *
 * Typically, library developers would use the function via
 * `AsyncLongRunningOperation`, but as a stand-alone function it can be used in
 * this context. First assume there is a `*Stub` class as follows:
 *
 * @code
 * class BarRestStub {
 *  public:
 *   virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
 *     google::cloud::CompletionQueue& cq,
 *     std::unique_ptr<rest_internal::RestContext> context,
 *     google::longrunning::GetOperationRequest const& request) = 0;
 *   virtual future<Status> AsyncCancelOperation(
 *     google::cloud::CompletionQueue& cq,
 *     std::unique_ptr<rest_internal::RestContext> context,
 *     google::longrunning::CancelOperationRequest const& request) = 0;
 * };
 * @endcode
 *
 * As part of implementing a long-running operation one would do something like:
 *
 * @code
 * class BarRestConnectionImpl : public BarConnection {
 *  public:
 *   // Using C++14 for exposition purposes. The implementation supports C++11.
 *   future<StatusOr<FooResponse>> Foo(FooRequest const& request) override {
 *     using ::google::longrunning::Operation;
 *     future<StatusOr<Operation>> op = AsyncStart();
 *
 *     return op.then([stub = stub_, cq = cq_, loc = __func__](auto f) {
 *       StatusOr<Operation> op = f.get();
 *       if (!op) return make_ready_future(op);
 *       return AsyncPollingLoop(
 *           std::move(cq), *std::move(op),
 *           [stub](auto cq, auto context, auto const& r) {
 *             return stub->AsyncGetOperation(cq, std::move(context), r);
 *           },
 *           [stub](auto cq, auto context, auto const& r) {
 *             return stub->AsyncCancelOperation(cq, std::move(context), r);
 *           },
 *           polling_policy_->clone(), loc);
 *        });
 *   }
 *
 *  private:
 *    google::cloud::CompletionQueue cq_;
 *    std::shared_ptr<BarStub> stub_;
 * };
 * @endcode
 *
 * [aip/151]: https://google.aip.dev/151
 */
future<StatusOr<google::longrunning::Operation>> AsyncRestPollingLoopAip151(
    google::cloud::CompletionQueue cq, internal::ImmutableOptions options,
    future<StatusOr<google::longrunning::Operation>> op,
    AsyncRestPollLongRunningOperation<google::longrunning::Operation,
                                      google::longrunning::GetOperationRequest>
        poll,
    AsyncRestCancelLongRunningOperation<
        google::longrunning::CancelOperationRequest>
        cancel,
    std::unique_ptr<PollingPolicy> polling_policy, std::string location);

// TODO(#12359) - remove once this is no longer used.
future<StatusOr<google::longrunning::Operation>> AsyncRestPollingLoopAip151(
    google::cloud::CompletionQueue cq,
    future<StatusOr<google::longrunning::Operation>> op,
    AsyncRestPollLongRunningOperationImplicitOptions<
        google::longrunning::Operation,
        google::longrunning::GetOperationRequest>
        poll,
    AsyncRestCancelLongRunningOperationImplicitOptions<
        google::longrunning::CancelOperationRequest>
        cancel,
    std::unique_ptr<PollingPolicy> polling_policy, std::string location);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ASYNC_REST_POLLING_LOOP_H
