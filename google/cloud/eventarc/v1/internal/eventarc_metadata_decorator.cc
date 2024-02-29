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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/v1/internal/eventarc_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/eventarc/v1/eventarc.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventarcMetadata::EventarcMetadata(
    std::shared_ptr<EventarcStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::eventarc::v1::Trigger> EventarcMetadata::GetTrigger(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTrigger(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListTriggersResponse>
EventarcMetadata::ListTriggers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListTriggersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTriggers(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncCreateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateTrigger(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncUpdateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("trigger.name=",
                           internal::UrlEncode(request.trigger().name())));
  return child_->AsyncUpdateTrigger(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncDeleteTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTrigger(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::cloud::eventarc::v1::Channel> EventarcMetadata::GetChannel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetChannelRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetChannel(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListChannelsResponse>
EventarcMetadata::ListChannels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListChannelsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListChannels(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateChannel(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("channel.name=",
                           internal::UrlEncode(request.channel().name())));
  return child_->AsyncUpdateChannel(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteChannel(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::cloud::eventarc::v1::Provider> EventarcMetadata::GetProvider(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetProviderRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProvider(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListProvidersResponse>
EventarcMetadata::ListProviders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListProvidersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProviders(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
EventarcMetadata::GetChannelConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetChannelConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetChannelConnection(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
EventarcMetadata::ListChannelConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::ListChannelConnectionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListChannelConnections(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncCreateChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateChannelConnection(cq, std::move(context),
                                              std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncDeleteChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteChannelConnection(cq, std::move(context),
                                              std::move(options), request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcMetadata::GetGoogleChannelConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGoogleChannelConfig(context, options, request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcMetadata::UpdateGoogleChannelConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat(
                  "google_channel_config.name=",
                  internal::UrlEncode(request.google_channel_config().name())));
  return child_->UpdateGoogleChannelConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EventarcMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> EventarcMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void EventarcMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EventarcMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1_internal
}  // namespace cloud
}  // namespace google
