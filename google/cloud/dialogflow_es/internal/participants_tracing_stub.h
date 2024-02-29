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
// source: google/cloud/dialogflow/v2/participant.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_TRACING_STUB_H

#include "google/cloud/dialogflow_es/internal/participants_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ParticipantsTracingStub : public ParticipantsStub {
 public:
  ~ParticipantsTracingStub() override = default;

  explicit ParticipantsTracingStub(std::shared_ptr<ParticipantsStub> child);

  StatusOr<google::cloud::dialogflow::v2::Participant> CreateParticipant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Participant> GetParticipant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ListParticipantsResponse>
  ListParticipants(grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::v2::ListParticipantsRequest const&
                       request) override;

  StatusOr<google::cloud::dialogflow::v2::Participant> UpdateParticipant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::UpdateParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(grpc::ClientContext& context, Options const& options,
                 google::cloud::dialogflow::v2::AnalyzeContentRequest const&
                     request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
      google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
  AsyncStreamingAnalyzeContent(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) override;

  StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
  SuggestArticles(grpc::ClientContext& context, Options const& options,
                  google::cloud::dialogflow::v2::SuggestArticlesRequest const&
                      request) override;

  StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
  SuggestFaqAnswers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
  SuggestSmartReplies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request)
      override;

 private:
  std::shared_ptr<ParticipantsStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ParticipantsStub> MakeParticipantsTracingStub(
    std::shared_ptr<ParticipantsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_TRACING_STUB_H
