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
// source: google/cloud/speech/v2/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_TRACING_STUB_H

#include "google/cloud/speech/v2/internal/speech_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SpeechTracingStub : public SpeechStub {
 public:
  ~SpeechTracingStub() override = default;

  explicit SpeechTracingStub(std::shared_ptr<SpeechStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreateRecognizerRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::ListRecognizersResponse> ListRecognizers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListRecognizersRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::Recognizer> GetRecognizer(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetRecognizerRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::RecognizeResponse> Recognize(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::RecognizeRequest const& request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>>
  AsyncStreamingRecognize(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchRecognize(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::BatchRecognizeRequest const& request) override;

  StatusOr<google::cloud::speech::v2::Config> GetConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetConfigRequest const& request) override;

  StatusOr<google::cloud::speech::v2::Config> UpdateConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::UpdateConfigRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreateCustomClassRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
  ListCustomClasses(grpc::ClientContext& context, Options const& options,
                    google::cloud::speech::v2::ListCustomClassesRequest const&
                        request) override;

  StatusOr<google::cloud::speech::v2::CustomClass> GetCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetCustomClassRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse> ListPhraseSets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListPhraseSetsRequest const& request) override;

  StatusOr<google::cloud::speech::v2::PhraseSet> GetPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetPhraseSetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeletePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<SpeechStub> child_;
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
std::shared_ptr<SpeechStub> MakeSpeechTracingStub(
    std::shared_ptr<SpeechStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_TRACING_STUB_H
