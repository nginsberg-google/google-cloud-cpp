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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#include "google/cloud/discoveryengine/v1/conversational_search_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationalSearchServiceClient::ConversationalSearchServiceClient(
    std::shared_ptr<ConversationalSearchServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ConversationalSearchServiceClient::~ConversationalSearchServiceClient() =
    default;

StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
ConversationalSearchServiceClient::ConverseConversation(
    std::string const& name,
    google::cloud::discoveryengine::v1::TextInput const& query, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::ConverseConversationRequest request;
  request.set_name(name);
  *request.mutable_query() = query;
  return connection_->ConverseConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
ConversationalSearchServiceClient::ConverseConversation(
    google::cloud::discoveryengine::v1::ConverseConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ConverseConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::CreateConversation(
    std::string const& parent,
    google::cloud::discoveryengine::v1::Conversation const& conversation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::CreateConversationRequest request;
  request.set_parent(parent);
  *request.mutable_conversation() = conversation;
  return connection_->CreateConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::CreateConversation(
    google::cloud::discoveryengine::v1::CreateConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConversation(request);
}

Status ConversationalSearchServiceClient::DeleteConversation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::DeleteConversationRequest request;
  request.set_name(name);
  return connection_->DeleteConversation(request);
}

Status ConversationalSearchServiceClient::DeleteConversation(
    google::cloud::discoveryengine::v1::DeleteConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::UpdateConversation(
    google::cloud::discoveryengine::v1::Conversation const& conversation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::UpdateConversationRequest request;
  *request.mutable_conversation() = conversation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::UpdateConversation(
    google::cloud::discoveryengine::v1::UpdateConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::GetConversation(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::GetConversationRequest request;
  request.set_name(name);
  return connection_->GetConversation(request);
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::GetConversation(
    google::cloud::discoveryengine::v1::GetConversationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConversation(request);
}

StreamRange<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::ListConversations(std::string const& parent,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::ListConversationsRequest request;
  request.set_parent(parent);
  return connection_->ListConversations(request);
}

StreamRange<google::cloud::discoveryengine::v1::Conversation>
ConversationalSearchServiceClient::ListConversations(
    google::cloud::discoveryengine::v1::ListConversationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConversations(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
