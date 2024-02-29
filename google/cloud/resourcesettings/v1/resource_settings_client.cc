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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/v1/resource_settings_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcesettings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourceSettingsServiceClient::ResourceSettingsServiceClient(
    std::shared_ptr<ResourceSettingsServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ResourceSettingsServiceClient::~ResourceSettingsServiceClient() = default;

StreamRange<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceClient::ListSettings(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcesettings::v1::ListSettingsRequest request;
  request.set_parent(parent);
  return connection_->ListSettings(request);
}

StreamRange<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceClient::ListSettings(
    google::cloud::resourcesettings::v1::ListSettingsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSettings(std::move(request));
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceClient::GetSetting(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcesettings::v1::GetSettingRequest request;
  request.set_name(name);
  return connection_->GetSetting(request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceClient::GetSetting(
    google::cloud::resourcesettings::v1::GetSettingRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSetting(request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceClient::UpdateSetting(
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSetting(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1
}  // namespace cloud
}  // namespace google
