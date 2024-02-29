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
// source: google/devtools/cloudbuild/v2/repositories.proto

#include "google/cloud/cloudbuild/v2/repository_manager_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RepositoryManagerClient::RepositoryManagerClient(
    std::shared_ptr<RepositoryManagerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RepositoryManagerClient::~RepositoryManagerClient() = default;

future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
RepositoryManagerClient::CreateConnection(
    std::string const& parent,
    google::devtools::cloudbuild::v2::Connection const& connection,
    std::string const& connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::CreateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_connection() = connection;
  request.set_connection_id(connection_id);
  return connection_->CreateConnection(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
RepositoryManagerClient::CreateConnection(
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnection(request);
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerClient::GetConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::GetConnectionRequest request;
  request.set_name(name);
  return connection_->GetConnection(request);
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerClient::GetConnection(
    google::devtools::cloudbuild::v2::GetConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConnection(request);
}

StreamRange<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerClient::ListConnections(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::ListConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListConnections(request);
}

StreamRange<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerClient::ListConnections(
    google::devtools::cloudbuild::v2::ListConnectionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConnections(std::move(request));
}

future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
RepositoryManagerClient::UpdateConnection(
    google::devtools::cloudbuild::v2::Connection const& connection,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::UpdateConnectionRequest request;
  *request.mutable_connection() = connection;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConnection(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
RepositoryManagerClient::UpdateConnection(
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnection(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
RepositoryManagerClient::DeleteConnection(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::DeleteConnectionRequest request;
  request.set_name(name);
  return connection_->DeleteConnection(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
RepositoryManagerClient::DeleteConnection(
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnection(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::Repository>>
RepositoryManagerClient::CreateRepository(
    std::string const& parent,
    google::devtools::cloudbuild::v2::Repository const& repository,
    std::string const& repository_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::CreateRepositoryRequest request;
  request.set_parent(parent);
  *request.mutable_repository() = repository;
  request.set_repository_id(repository_id);
  return connection_->CreateRepository(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::Repository>>
RepositoryManagerClient::CreateRepository(
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRepository(request);
}

future<
    StatusOr<google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>>
RepositoryManagerClient::BatchCreateRepositories(
    std::string const& parent,
    std::vector<
        google::devtools::cloudbuild::v2::CreateRepositoryRequest> const&
        requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest request;
  request.set_parent(parent);
  *request.mutable_requests() = {requests.begin(), requests.end()};
  return connection_->BatchCreateRepositories(request);
}

future<
    StatusOr<google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>>
RepositoryManagerClient::BatchCreateRepositories(
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateRepositories(request);
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerClient::GetRepository(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::GetRepositoryRequest request;
  request.set_name(name);
  return connection_->GetRepository(request);
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerClient::GetRepository(
    google::devtools::cloudbuild::v2::GetRepositoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRepository(request);
}

StreamRange<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerClient::ListRepositories(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::ListRepositoriesRequest request;
  request.set_parent(parent);
  return connection_->ListRepositories(request);
}

StreamRange<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerClient::ListRepositories(
    google::devtools::cloudbuild::v2::ListRepositoriesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRepositories(std::move(request));
}

future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
RepositoryManagerClient::DeleteRepository(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::DeleteRepositoryRequest request;
  request.set_name(name);
  return connection_->DeleteRepository(request);
}

future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
RepositoryManagerClient::DeleteRepository(
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRepository(request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
RepositoryManagerClient::FetchReadWriteToken(std::string const& repository,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest request;
  request.set_repository(repository);
  return connection_->FetchReadWriteToken(request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
RepositoryManagerClient::FetchReadWriteToken(
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchReadWriteToken(request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
RepositoryManagerClient::FetchReadToken(std::string const& repository,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::FetchReadTokenRequest request;
  request.set_repository(repository);
  return connection_->FetchReadToken(request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
RepositoryManagerClient::FetchReadToken(
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchReadToken(request);
}

StreamRange<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerClient::FetchLinkableRepositories(
    google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchLinkableRepositories(std::move(request));
}

StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
RepositoryManagerClient::FetchGitRefs(std::string const& repository,
                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::devtools::cloudbuild::v2::FetchGitRefsRequest request;
  request.set_repository(repository);
  return connection_->FetchGitRefs(request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
RepositoryManagerClient::FetchGitRefs(
    google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchGitRefs(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2
}  // namespace cloud
}  // namespace google
