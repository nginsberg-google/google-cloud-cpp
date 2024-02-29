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

#include "google/cloud/discoveryengine/v1/internal/conversational_search_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/discoveryengine/v1/conversational_search_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationalSearchServiceStub::~ConversationalSearchServiceStub() = default;

StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
DefaultConversationalSearchServiceStub::ConverseConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::ConverseConversationRequest const&
        request) {
  google::cloud::discoveryengine::v1::ConverseConversationResponse response;
  auto status = grpc_stub_->ConverseConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
DefaultConversationalSearchServiceStub::CreateConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::CreateConversationRequest const&
        request) {
  google::cloud::discoveryengine::v1::Conversation response;
  auto status = grpc_stub_->CreateConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConversationalSearchServiceStub::DeleteConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::DeleteConversationRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
DefaultConversationalSearchServiceStub::UpdateConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::UpdateConversationRequest const&
        request) {
  google::cloud::discoveryengine::v1::Conversation response;
  auto status = grpc_stub_->UpdateConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::Conversation>
DefaultConversationalSearchServiceStub::GetConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::GetConversationRequest const& request) {
  google::cloud::discoveryengine::v1::Conversation response;
  auto status = grpc_stub_->GetConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::ListConversationsResponse>
DefaultConversationalSearchServiceStub::ListConversations(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::ListConversationsRequest const&
        request) {
  google::cloud::discoveryengine::v1::ListConversationsResponse response;
  auto status = grpc_stub_->ListConversations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
