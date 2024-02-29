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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/v3/projects_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProjectsClient::ProjectsClient(std::shared_ptr<ProjectsConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ProjectsClient::~ProjectsClient() = default;

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsClient::GetProject(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::GetProjectRequest request;
  request.set_name(name);
  return connection_->GetProject(request);
}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsClient::GetProject(
    google::cloud::resourcemanager::v3::GetProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProject(request);
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsClient::ListProjects(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::ListProjectsRequest request;
  request.set_parent(parent);
  return connection_->ListProjects(request);
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsClient::ListProjects(
    google::cloud::resourcemanager::v3::ListProjectsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProjects(std::move(request));
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsClient::SearchProjects(std::string const& query, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::SearchProjectsRequest request;
  request.set_query(query);
  return connection_->SearchProjects(request);
}

StreamRange<google::cloud::resourcemanager::v3::Project>
ProjectsClient::SearchProjects(
    google::cloud::resourcemanager::v3::SearchProjectsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchProjects(std::move(request));
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::CreateProject(
    google::cloud::resourcemanager::v3::Project const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::CreateProjectRequest request;
  *request.mutable_project() = project;
  return connection_->CreateProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::CreateProject(
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::UpdateProject(
    google::cloud::resourcemanager::v3::Project const& project,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::UpdateProjectRequest request;
  *request.mutable_project() = project;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::UpdateProject(
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::MoveProject(std::string const& name,
                            std::string const& destination_parent,
                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::MoveProjectRequest request;
  request.set_name(name);
  request.set_destination_parent(destination_parent);
  return connection_->MoveProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::MoveProject(
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::DeleteProject(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::DeleteProjectRequest request;
  request.set_name(name);
  return connection_->DeleteProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::DeleteProject(
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::UndeleteProject(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::UndeleteProjectRequest request;
  request.set_name(name);
  return connection_->UndeleteProject(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Project>>
ProjectsClient::UndeleteProject(
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteProject(request);
}

StatusOr<google::iam::v1::Policy> ProjectsClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ProjectsClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ProjectsClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ProjectsClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsClient::TestIamPermissions(std::string const& resource,
                                   std::vector<std::string> const& permissions,
                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google
