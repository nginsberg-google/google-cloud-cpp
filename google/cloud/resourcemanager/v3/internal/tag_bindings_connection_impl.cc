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
// source: google/cloud/resourcemanager/v3/tag_bindings.proto

#include "google/cloud/resourcemanager/v3/internal/tag_bindings_connection_impl.h"
#include "google/cloud/resourcemanager/v3/internal/tag_bindings_option_defaults.h"
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
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<resourcemanager_v3::TagBindingsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<resourcemanager_v3::TagBindingsRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<resourcemanager_v3::TagBindingsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<resourcemanager_v3::TagBindingsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<resourcemanager_v3::TagBindingsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<resourcemanager_v3::TagBindingsPollingPolicyOption>()
      ->clone();
}

}  // namespace

TagBindingsConnectionImpl::TagBindingsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<resourcemanager_v3_internal::TagBindingsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      TagBindingsConnection::options())) {}

StreamRange<google::cloud::resourcemanager::v3::TagBinding>
TagBindingsConnectionImpl::ListTagBindings(
    google::cloud::resourcemanager::v3::ListTagBindingsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTagBindings(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::TagBinding>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<resourcemanager_v3::TagBindingsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::resourcemanager::v3::ListTagBindingsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::resourcemanager::v3::
                       ListTagBindingsRequest const& request) {
              return stub->ListTagBindings(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::resourcemanager::v3::ListTagBindingsResponse r) {
        std::vector<google::cloud::resourcemanager::v3::TagBinding> result(
            r.tag_bindings().size());
        auto& messages = *r.mutable_tag_bindings();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::resourcemanager::v3::TagBinding>>
TagBindingsConnectionImpl::CreateTagBinding(
    google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateTagBinding(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::TagBinding>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
              request) {
        return stub->AsyncCreateTagBinding(cq, std::move(context),
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
          google::cloud::resourcemanager::v3::TagBinding>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>>
TagBindingsConnectionImpl::DeleteTagBinding(
    google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteTagBinding(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
              request) {
        return stub->AsyncDeleteTagBinding(cq, std::move(context),
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
          google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>
TagBindingsConnectionImpl::ListEffectiveTags(
    google::cloud::resourcemanager::v3::ListEffectiveTagsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEffectiveTags(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<resourcemanager_v3::TagBindingsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::resourcemanager::v3::ListEffectiveTagsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::resourcemanager::v3::
                       ListEffectiveTagsRequest const& request) {
              return stub->ListEffectiveTags(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::resourcemanager::v3::ListEffectiveTagsResponse r) {
        std::vector<google::cloud::resourcemanager::v3::EffectiveTag> result(
            r.effective_tags().size());
        auto& messages = *r.mutable_effective_tags();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
