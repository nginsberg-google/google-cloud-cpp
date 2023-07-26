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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONVERSATION_PROFILES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONVERSATION_PROFILES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/conversation_profile.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationProfilesConnectionIdempotencyPolicy {
 public:
  virtual ~ConversationProfilesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ConversationProfilesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListConversationProfiles(
      google::cloud::dialogflow::v2::ListConversationProfilesRequest request);

  virtual google::cloud::Idempotency GetConversationProfile(
      google::cloud::dialogflow::v2::GetConversationProfileRequest const&
          request);

  virtual google::cloud::Idempotency CreateConversationProfile(
      google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
          request);

  virtual google::cloud::Idempotency UpdateConversationProfile(
      google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
          request);

  virtual google::cloud::Idempotency DeleteConversationProfile(
      google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
          request);

  virtual google::cloud::Idempotency SetSuggestionFeatureConfig(
      google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
          request);

  virtual google::cloud::Idempotency ClearSuggestionFeatureConfig(
      google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
          request);
};

std::unique_ptr<ConversationProfilesConnectionIdempotencyPolicy>
MakeDefaultConversationProfilesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONVERSATION_PROFILES_CONNECTION_IDEMPOTENCY_POLICY_H
