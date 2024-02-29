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
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#include "google/cloud/texttospeech/v1/internal/text_to_speech_option_defaults.h"
#include "google/cloud/texttospeech/v1/text_to_speech_connection.h"
#include "google/cloud/texttospeech/v1/text_to_speech_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace texttospeech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TextToSpeechDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TEXT_TO_SPEECH_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TEXT_TO_SPEECH_AUTHORITY",
      "texttospeech.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<texttospeech_v1::TextToSpeechRetryPolicyOption>()) {
    options.set<texttospeech_v1::TextToSpeechRetryPolicyOption>(
        texttospeech_v1::TextToSpeechLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<texttospeech_v1::TextToSpeechBackoffPolicyOption>()) {
    options.set<texttospeech_v1::TextToSpeechBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          texttospeech_v1::TextToSpeechConnectionIdempotencyPolicyOption>()) {
    options.set<texttospeech_v1::TextToSpeechConnectionIdempotencyPolicyOption>(
        texttospeech_v1::MakeDefaultTextToSpeechConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1_internal
}  // namespace cloud
}  // namespace google
