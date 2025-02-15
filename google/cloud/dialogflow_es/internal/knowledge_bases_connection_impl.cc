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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#include "google/cloud/dialogflow_es/internal/knowledge_bases_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/knowledge_bases_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_es::KnowledgeBasesRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_es::KnowledgeBasesRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_es::KnowledgeBasesBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<dialogflow_es::KnowledgeBasesConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_es::KnowledgeBasesConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

KnowledgeBasesConnectionImpl::KnowledgeBasesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::KnowledgeBasesStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      KnowledgeBasesConnection::options())) {}

StreamRange<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesConnectionImpl::ListKnowledgeBases(
    google::cloud::dialogflow::v2::ListKnowledgeBasesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListKnowledgeBases(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::KnowledgeBase>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::KnowledgeBasesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::dialogflow::v2::ListKnowledgeBasesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::dialogflow::v2::ListKnowledgeBasesRequest const&
                    request) {
              return stub->ListKnowledgeBases(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListKnowledgeBasesResponse r) {
        std::vector<google::cloud::dialogflow::v2::KnowledgeBase> result(
            r.knowledge_bases().size());
        auto& messages = *r.mutable_knowledge_bases();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesConnectionImpl::GetKnowledgeBase(
    google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetKnowledgeBase(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const&
                 request) { return stub_->GetKnowledgeBase(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesConnectionImpl::CreateKnowledgeBase(
    google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateKnowledgeBase(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const&
                 request) {
        return stub_->CreateKnowledgeBase(context, request);
      },
      request, __func__);
}

Status KnowledgeBasesConnectionImpl::DeleteKnowledgeBase(
    google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteKnowledgeBase(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const&
                 request) {
        return stub_->DeleteKnowledgeBase(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
KnowledgeBasesConnectionImpl::UpdateKnowledgeBase(
    google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateKnowledgeBase(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const&
                 request) {
        return stub_->UpdateKnowledgeBase(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
