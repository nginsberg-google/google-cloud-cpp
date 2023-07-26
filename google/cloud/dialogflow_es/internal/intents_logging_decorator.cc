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
// source: google/cloud/dialogflow/v2/intent.proto

#include "google/cloud/dialogflow_es/internal/intents_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/intent.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IntentsLogging::IntentsLogging(std::shared_ptr<IntentsStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::dialogflow::v2::ListIntentsResponse>
IntentsLogging::ListIntents(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListIntentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::ListIntentsRequest const& request) {
        return child_->ListIntents(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsLogging::GetIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetIntentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetIntentRequest const& request) {
        return child_->GetIntent(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsLogging::CreateIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateIntentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::CreateIntentRequest const& request) {
        return child_->CreateIntent(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsLogging::UpdateIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateIntentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::UpdateIntentRequest const& request) {
        return child_->UpdateIntent(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status IntentsLogging::DeleteIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteIntentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::DeleteIntentRequest const& request) {
        return child_->DeleteIntent(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
IntentsLogging::AsyncBatchUpdateIntents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const&
                 request) {
        return child_->AsyncBatchUpdateIntents(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
IntentsLogging::AsyncBatchDeleteIntents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const&
                 request) {
        return child_->AsyncBatchDeleteIntents(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
IntentsLogging::AsyncGetOperation(
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

future<Status> IntentsLogging::AsyncCancelOperation(
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
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
