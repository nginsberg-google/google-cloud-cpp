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
// source: google/cloud/compute/disks/v1/disks.proto

#include "google/cloud/compute/disks/v1/disks_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_disks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DisksClient::DisksClient(ExperimentalTag,
                         std::shared_ptr<DisksConnection> connection,
                         Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DisksClient::~DisksClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::AddResourcePolicies(
    std::string const& project, std::string const& zone,
    std::string const& disk,
    google::cloud::cpp::compute::v1::DisksAddResourcePoliciesRequest const&
        disks_add_resource_policies_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  *request.mutable_disks_add_resource_policies_request_resource() =
      disks_add_resource_policies_request_resource;
  return connection_->AddResourcePolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::AddResourcePolicies(
    google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddResourcePolicies(request);
}

StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
DisksClient::AggregatedListDisks(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest request;
  request.set_project(project);
  return connection_->AggregatedListDisks(request);
}

StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
DisksClient::AggregatedListDisks(
    google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListDisks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::CreateSnapshot(
    std::string const& project, std::string const& zone,
    std::string const& disk,
    google::cloud::cpp::compute::v1::Snapshot const& snapshot_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  *request.mutable_snapshot_resource() = snapshot_resource;
  return connection_->CreateSnapshot(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::CreateSnapshot(
    google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSnapshot(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::DeleteDisks(std::string const& project, std::string const& zone,
                         std::string const& disk, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::DeleteDisksRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  return connection_->DeleteDisks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::DeleteDisks(
    google::cloud::cpp::compute::disks::v1::DeleteDisksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDisks(request);
}

StatusOr<google::cloud::cpp::compute::v1::Disk> DisksClient::GetDisks(
    std::string const& project, std::string const& zone,
    std::string const& disk, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::GetDisksRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  return connection_->GetDisks(request);
}

StatusOr<google::cloud::cpp::compute::v1::Disk> DisksClient::GetDisks(
    google::cloud::cpp::compute::disks::v1::GetDisksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDisks(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> DisksClient::GetIamPolicy(
    std::string const& project, std::string const& zone,
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> DisksClient::GetIamPolicy(
    google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::InsertDisks(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Disk const& disk_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::InsertDisksRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_disk_resource() = disk_resource;
  return connection_->InsertDisks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::InsertDisks(
    google::cloud::cpp::compute::disks::v1::InsertDisksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertDisks(request);
}

StreamRange<google::cloud::cpp::compute::v1::Disk> DisksClient::ListDisks(
    std::string const& project, std::string const& zone, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::ListDisksRequest request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListDisks(request);
}

StreamRange<google::cloud::cpp::compute::v1::Disk> DisksClient::ListDisks(
    google::cloud::cpp::compute::disks::v1::ListDisksRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDisks(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::RemoveResourcePolicies(
    std::string const& project, std::string const& zone,
    std::string const& disk,
    google::cloud::cpp::compute::v1::DisksRemoveResourcePoliciesRequest const&
        disks_remove_resource_policies_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::RemoveResourcePoliciesRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  *request.mutable_disks_remove_resource_policies_request_resource() =
      disks_remove_resource_policies_request_resource;
  return connection_->RemoveResourcePolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::RemoveResourcePolicies(
    google::cloud::cpp::compute::disks::v1::RemoveResourcePoliciesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveResourcePolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::Resize(std::string const& project, std::string const& zone,
                    std::string const& disk,
                    google::cloud::cpp::compute::v1::DisksResizeRequest const&
                        disks_resize_request_resource,
                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::ResizeRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  *request.mutable_disks_resize_request_resource() =
      disks_resize_request_resource;
  return connection_->Resize(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::Resize(
    google::cloud::cpp::compute::disks::v1::ResizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Resize(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> DisksClient::SetIamPolicy(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetPolicyRequest const&
        zone_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_policy_request_resource() =
      zone_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> DisksClient::SetIamPolicy(
    google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::SetLabels(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetLabelsRequest const&
        zone_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_labels_request_resource() =
      zone_set_labels_request_resource;
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::SetLabels(
    google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DisksClient::TestIamPermissions(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DisksClient::TestIamPermissions(
    google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::UpdateDisks(
    std::string const& project, std::string const& zone,
    std::string const& disk,
    google::cloud::cpp::compute::v1::Disk const& disk_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::disks::v1::UpdateDisksRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_disk(disk);
  *request.mutable_disk_resource() = disk_resource;
  return connection_->UpdateDisks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksClient::UpdateDisks(
    google::cloud::cpp::compute::disks::v1::UpdateDisksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDisks(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1
}  // namespace cloud
}  // namespace google
