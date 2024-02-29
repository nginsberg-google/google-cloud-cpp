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
// source: google/cloud/dialogflow/v2/version.proto

#include "google/cloud/dialogflow_es/versions_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsClient::VersionsClient(std::shared_ptr<VersionsConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
VersionsClient::~VersionsClient() = default;

StreamRange<google::cloud::dialogflow::v2::Version>
VersionsClient::ListVersions(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::ListVersionsRequest request;
  request.set_parent(parent);
  return connection_->ListVersions(request);
}

StreamRange<google::cloud::dialogflow::v2::Version>
VersionsClient::ListVersions(
    google::cloud::dialogflow::v2::ListVersionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVersions(std::move(request));
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsClient::GetVersion(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::GetVersionRequest request;
  request.set_name(name);
  return connection_->GetVersion(request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsClient::GetVersion(
    google::cloud::dialogflow::v2::GetVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVersion(request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsClient::CreateVersion(
    std::string const& parent,
    google::cloud::dialogflow::v2::Version const& version, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::CreateVersionRequest request;
  request.set_parent(parent);
  *request.mutable_version() = version;
  return connection_->CreateVersion(request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsClient::CreateVersion(
    google::cloud::dialogflow::v2::CreateVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateVersion(request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsClient::UpdateVersion(
    google::cloud::dialogflow::v2::Version const& version,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::UpdateVersionRequest request;
  *request.mutable_version() = version;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateVersion(request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsClient::UpdateVersion(
    google::cloud::dialogflow::v2::UpdateVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateVersion(request);
}

Status VersionsClient::DeleteVersion(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::DeleteVersionRequest request;
  request.set_name(name);
  return connection_->DeleteVersion(request);
}

Status VersionsClient::DeleteVersion(
    google::cloud::dialogflow::v2::DeleteVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteVersion(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
