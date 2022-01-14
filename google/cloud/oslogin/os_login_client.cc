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
// source: google/cloud/oslogin/v1/oslogin.proto

#include "google/cloud/oslogin/os_login_client.h"
#include "google/cloud/oslogin/internal/os_login_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace oslogin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsLoginServiceClient::OsLoginServiceClient(
    std::shared_ptr<OsLoginServiceConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(
          oslogin_internal::OsLoginServiceDefaultOptions(std::move(options))) {}
OsLoginServiceClient::~OsLoginServiceClient() = default;

Status OsLoginServiceClient::DeletePosixAccount(std::string const& name,
                                                Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::DeletePosixAccountRequest request;
  request.set_name(name);
  return connection_->DeletePosixAccount(request);
}

Status OsLoginServiceClient::DeletePosixAccount(
    google::cloud::oslogin::v1::DeletePosixAccountRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeletePosixAccount(request);
}

Status OsLoginServiceClient::DeleteSshPublicKey(std::string const& name,
                                                Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::DeleteSshPublicKeyRequest request;
  request.set_name(name);
  return connection_->DeleteSshPublicKey(request);
}

Status OsLoginServiceClient::DeleteSshPublicKey(
    google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::v1::LoginProfile>
OsLoginServiceClient::GetLoginProfile(std::string const& name,
                                      Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::GetLoginProfileRequest request;
  request.set_name(name);
  return connection_->GetLoginProfile(request);
}

StatusOr<google::cloud::oslogin::v1::LoginProfile>
OsLoginServiceClient::GetLoginProfile(
    google::cloud::oslogin::v1::GetLoginProfileRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetLoginProfile(request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceClient::GetSshPublicKey(std::string const& name,
                                      Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::GetSshPublicKeyRequest request;
  request.set_name(name);
  return connection_->GetSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceClient::GetSshPublicKey(
    google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceClient::ImportSshPublicKey(
    std::string const& parent,
    google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::ImportSshPublicKeyRequest request;
  request.set_parent(parent);
  *request.mutable_ssh_public_key() = ssh_public_key;
  return connection_->ImportSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceClient::ImportSshPublicKey(
    std::string const& parent,
    google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
    std::string const& project_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::ImportSshPublicKeyRequest request;
  request.set_parent(parent);
  *request.mutable_ssh_public_key() = ssh_public_key;
  request.set_project_id(project_id);
  return connection_->ImportSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceClient::ImportSshPublicKey(
    google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ImportSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceClient::UpdateSshPublicKey(
    std::string const& name,
    google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::UpdateSshPublicKeyRequest request;
  request.set_name(name);
  *request.mutable_ssh_public_key() = ssh_public_key;
  return connection_->UpdateSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceClient::UpdateSshPublicKey(
    std::string const& name,
    google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::oslogin::v1::UpdateSshPublicKeyRequest request;
  request.set_name(name);
  *request.mutable_ssh_public_key() = ssh_public_key;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSshPublicKey(request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceClient::UpdateSshPublicKey(
    google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateSshPublicKey(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin
}  // namespace cloud
}  // namespace google
