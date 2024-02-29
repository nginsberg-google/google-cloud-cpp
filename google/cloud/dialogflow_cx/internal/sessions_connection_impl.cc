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
// source: google/cloud/dialogflow/cx/v3/session.proto

#include "google/cloud/dialogflow_cx/internal/sessions_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/sessions_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/resumable_streaming_read_rpc.h"
#include "google/cloud/internal/retry_loop.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_cx::SessionsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_cx::SessionsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_cx::SessionsBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_cx::SessionsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_cx::SessionsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

SessionsConnectionImpl::SessionsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::SessionsStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SessionsConnection::options())) {}

StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
SessionsConnectionImpl::DetectIntent(
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DetectIntent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::DetectIntentRequest const&
                 request) {
        return stub_->DetectIntent(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
SessionsConnectionImpl::ServerStreamingDetectIntent(
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto factory =
      [stub = stub_,
       current](google::cloud::dialogflow::cx::v3::DetectIntentRequest const&
                    request) {
        return stub->ServerStreamingDetectIntent(
            std::make_shared<grpc::ClientContext>(), *current, request);
      };
  auto resumable = internal::MakeResumableStreamingReadRpc<
      google::cloud::dialogflow::cx::v3::DetectIntentResponse,
      google::cloud::dialogflow::cx::v3::DetectIntentRequest>(
      retry_policy(*current), backoff_policy(*current), factory,
      SessionsServerStreamingDetectIntentStreamingUpdater, request);
  return internal::MakeStreamRange(
      internal::StreamReader<
          google::cloud::dialogflow::cx::v3::DetectIntentResponse>(
          [resumable] { return resumable->Read(); }));
}
StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>
SessionsConnectionImpl::MatchIntent(
    google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->MatchIntent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::MatchIntentRequest const&
                 request) {
        return stub_->MatchIntent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
SessionsConnectionImpl::FulfillIntent(
    google::cloud::dialogflow::cx::v3::FulfillIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FulfillIntent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::FulfillIntentRequest const&
                 request) {
        return stub_->FulfillIntent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::AnswerFeedback>
SessionsConnectionImpl::SubmitAnswerFeedback(
    google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SubmitAnswerFeedback(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
              request) {
        return stub_->SubmitAnswerFeedback(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
