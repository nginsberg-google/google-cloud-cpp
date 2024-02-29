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

#include "google/cloud/eventarc/v1/eventarc_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventarcClient::EventarcClient(std::shared_ptr<EventarcConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
EventarcClient::~EventarcClient() = default;

StatusOr<google::cloud::eventarc::v1::Trigger> EventarcClient::GetTrigger(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::GetTriggerRequest request;
  request.set_name(name);
  return connection_->GetTrigger(request);
}

StatusOr<google::cloud::eventarc::v1::Trigger> EventarcClient::GetTrigger(
    google::cloud::eventarc::v1::GetTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTrigger(request);
}

StreamRange<google::cloud::eventarc::v1::Trigger> EventarcClient::ListTriggers(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::ListTriggersRequest request;
  request.set_parent(parent);
  return connection_->ListTriggers(request);
}

StreamRange<google::cloud::eventarc::v1::Trigger> EventarcClient::ListTriggers(
    google::cloud::eventarc::v1::ListTriggersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTriggers(std::move(request));
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcClient::CreateTrigger(
    std::string const& parent,
    google::cloud::eventarc::v1::Trigger const& trigger,
    std::string const& trigger_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::CreateTriggerRequest request;
  request.set_parent(parent);
  *request.mutable_trigger() = trigger;
  request.set_trigger_id(trigger_id);
  return connection_->CreateTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcClient::CreateTrigger(
    google::cloud::eventarc::v1::CreateTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcClient::UpdateTrigger(
    google::cloud::eventarc::v1::Trigger const& trigger,
    google::protobuf::FieldMask const& update_mask, bool allow_missing,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::UpdateTriggerRequest request;
  *request.mutable_trigger() = trigger;
  *request.mutable_update_mask() = update_mask;
  request.set_allow_missing(allow_missing);
  return connection_->UpdateTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcClient::UpdateTrigger(
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcClient::DeleteTrigger(std::string const& name, bool allow_missing,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::DeleteTriggerRequest request;
  request.set_name(name);
  request.set_allow_missing(allow_missing);
  return connection_->DeleteTrigger(request);
}

future<StatusOr<google::cloud::eventarc::v1::Trigger>>
EventarcClient::DeleteTrigger(
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTrigger(request);
}

StatusOr<google::cloud::eventarc::v1::Channel> EventarcClient::GetChannel(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::GetChannelRequest request;
  request.set_name(name);
  return connection_->GetChannel(request);
}

StatusOr<google::cloud::eventarc::v1::Channel> EventarcClient::GetChannel(
    google::cloud::eventarc::v1::GetChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetChannel(request);
}

StreamRange<google::cloud::eventarc::v1::Channel> EventarcClient::ListChannels(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::ListChannelsRequest request;
  request.set_parent(parent);
  return connection_->ListChannels(request);
}

StreamRange<google::cloud::eventarc::v1::Channel> EventarcClient::ListChannels(
    google::cloud::eventarc::v1::ListChannelsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListChannels(std::move(request));
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcClient::CreateChannel(
    std::string const& parent,
    google::cloud::eventarc::v1::Channel const& channel,
    std::string const& channel_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::CreateChannelRequest request;
  request.set_parent(parent);
  *request.mutable_channel() = channel;
  request.set_channel_id(channel_id);
  return connection_->CreateChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcClient::CreateChannel(
    google::cloud::eventarc::v1::CreateChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcClient::UpdateChannel(
    google::cloud::eventarc::v1::Channel const& channel,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::UpdateChannelRequest request;
  *request.mutable_channel() = channel;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcClient::UpdateChannel(
    google::cloud::eventarc::v1::UpdateChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcClient::DeleteChannel(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::DeleteChannelRequest request;
  request.set_name(name);
  return connection_->DeleteChannel(request);
}

future<StatusOr<google::cloud::eventarc::v1::Channel>>
EventarcClient::DeleteChannel(
    google::cloud::eventarc::v1::DeleteChannelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteChannel(request);
}

StatusOr<google::cloud::eventarc::v1::Provider> EventarcClient::GetProvider(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::GetProviderRequest request;
  request.set_name(name);
  return connection_->GetProvider(request);
}

StatusOr<google::cloud::eventarc::v1::Provider> EventarcClient::GetProvider(
    google::cloud::eventarc::v1::GetProviderRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProvider(request);
}

StreamRange<google::cloud::eventarc::v1::Provider>
EventarcClient::ListProviders(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::ListProvidersRequest request;
  request.set_parent(parent);
  return connection_->ListProviders(request);
}

StreamRange<google::cloud::eventarc::v1::Provider>
EventarcClient::ListProviders(
    google::cloud::eventarc::v1::ListProvidersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProviders(std::move(request));
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
EventarcClient::GetChannelConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::GetChannelConnectionRequest request;
  request.set_name(name);
  return connection_->GetChannelConnection(request);
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
EventarcClient::GetChannelConnection(
    google::cloud::eventarc::v1::GetChannelConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetChannelConnection(request);
}

StreamRange<google::cloud::eventarc::v1::ChannelConnection>
EventarcClient::ListChannelConnections(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::ListChannelConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListChannelConnections(request);
}

StreamRange<google::cloud::eventarc::v1::ChannelConnection>
EventarcClient::ListChannelConnections(
    google::cloud::eventarc::v1::ListChannelConnectionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListChannelConnections(std::move(request));
}

future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
EventarcClient::CreateChannelConnection(
    std::string const& parent,
    google::cloud::eventarc::v1::ChannelConnection const& channel_connection,
    std::string const& channel_connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::CreateChannelConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_channel_connection() = channel_connection;
  request.set_channel_connection_id(channel_connection_id);
  return connection_->CreateChannelConnection(request);
}

future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
EventarcClient::CreateChannelConnection(
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateChannelConnection(request);
}

future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
EventarcClient::DeleteChannelConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::DeleteChannelConnectionRequest request;
  request.set_name(name);
  return connection_->DeleteChannelConnection(request);
}

future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
EventarcClient::DeleteChannelConnection(
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteChannelConnection(request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcClient::GetGoogleChannelConfig(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::GetGoogleChannelConfigRequest request;
  request.set_name(name);
  return connection_->GetGoogleChannelConfig(request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcClient::GetGoogleChannelConfig(
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGoogleChannelConfig(request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcClient::UpdateGoogleChannelConfig(
    google::cloud::eventarc::v1::GoogleChannelConfig const&
        google_channel_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest request;
  *request.mutable_google_channel_config() = google_channel_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateGoogleChannelConfig(request);
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
EventarcClient::UpdateGoogleChannelConfig(
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateGoogleChannelConfig(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1
}  // namespace cloud
}  // namespace google
