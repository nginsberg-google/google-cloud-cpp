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
// source: google/cloud/alloydb/v1/service.proto

#include "google/cloud/alloydb/v1/alloy_db_admin_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace alloydb_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlloyDBAdminClient::AlloyDBAdminClient(
    std::shared_ptr<AlloyDBAdminConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AlloyDBAdminClient::~AlloyDBAdminClient() = default;

StreamRange<google::cloud::alloydb::v1::Cluster>
AlloyDBAdminClient::ListClusters(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::ListClustersRequest request;
  request.set_parent(parent);
  return connection_->ListClusters(request);
}

StreamRange<google::cloud::alloydb::v1::Cluster>
AlloyDBAdminClient::ListClusters(
    google::cloud::alloydb::v1::ListClustersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListClusters(std::move(request));
}

StatusOr<google::cloud::alloydb::v1::Cluster> AlloyDBAdminClient::GetCluster(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::GetClusterRequest request;
  request.set_name(name);
  return connection_->GetCluster(request);
}

StatusOr<google::cloud::alloydb::v1::Cluster> AlloyDBAdminClient::GetCluster(
    google::cloud::alloydb::v1::GetClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminClient::CreateCluster(
    std::string const& parent,
    google::cloud::alloydb::v1::Cluster const& cluster,
    std::string const& cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::CreateClusterRequest request;
  request.set_parent(parent);
  *request.mutable_cluster() = cluster;
  request.set_cluster_id(cluster_id);
  return connection_->CreateCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminClient::CreateCluster(
    google::cloud::alloydb::v1::CreateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminClient::UpdateCluster(
    google::cloud::alloydb::v1::Cluster const& cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::UpdateClusterRequest request;
  *request.mutable_cluster() = cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminClient::UpdateCluster(
    google::cloud::alloydb::v1::UpdateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminClient::DeleteCluster(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::DeleteClusterRequest request;
  request.set_name(name);
  return connection_->DeleteCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminClient::DeleteCluster(
    google::cloud::alloydb::v1::DeleteClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCluster(request);
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminClient::RestoreCluster(
    google::cloud::alloydb::v1::RestoreClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreCluster(request);
}

StreamRange<google::cloud::alloydb::v1::Instance>
AlloyDBAdminClient::ListInstances(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::alloydb::v1::Instance>
AlloyDBAdminClient::ListInstances(
    google::cloud::alloydb::v1::ListInstancesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::alloydb::v1::Instance> AlloyDBAdminClient::GetInstance(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::alloydb::v1::Instance> AlloyDBAdminClient::GetInstance(
    google::cloud::alloydb::v1::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::CreateInstance(
    std::string const& parent,
    google::cloud::alloydb::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::CreateInstance(
    google::cloud::alloydb::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>
AlloyDBAdminClient::BatchCreateInstances(
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateInstances(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::UpdateInstance(
    google::cloud::alloydb::v1::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::UpdateInstance(
    google::cloud::alloydb::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminClient::DeleteInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminClient::DeleteInstance(
    google::cloud::alloydb::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::FailoverInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::FailoverInstanceRequest request;
  request.set_name(name);
  return connection_->FailoverInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::FailoverInstance(
    google::cloud::alloydb::v1::FailoverInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FailoverInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::RestartInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::RestartInstanceRequest request;
  request.set_name(name);
  return connection_->RestartInstance(request);
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminClient::RestartInstance(
    google::cloud::alloydb::v1::RestartInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestartInstance(request);
}

StreamRange<google::cloud::alloydb::v1::Backup> AlloyDBAdminClient::ListBackups(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::ListBackupsRequest request;
  request.set_parent(parent);
  return connection_->ListBackups(request);
}

StreamRange<google::cloud::alloydb::v1::Backup> AlloyDBAdminClient::ListBackups(
    google::cloud::alloydb::v1::ListBackupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackups(std::move(request));
}

StatusOr<google::cloud::alloydb::v1::Backup> AlloyDBAdminClient::GetBackup(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::GetBackupRequest request;
  request.set_name(name);
  return connection_->GetBackup(request);
}

StatusOr<google::cloud::alloydb::v1::Backup> AlloyDBAdminClient::GetBackup(
    google::cloud::alloydb::v1::GetBackupRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBackup(request);
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminClient::CreateBackup(
    std::string const& parent, google::cloud::alloydb::v1::Backup const& backup,
    std::string const& backup_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::CreateBackupRequest request;
  request.set_parent(parent);
  *request.mutable_backup() = backup;
  request.set_backup_id(backup_id);
  return connection_->CreateBackup(request);
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminClient::CreateBackup(
    google::cloud::alloydb::v1::CreateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(request);
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminClient::UpdateBackup(
    google::cloud::alloydb::v1::Backup const& backup,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::UpdateBackupRequest request;
  *request.mutable_backup() = backup;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateBackup(request);
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminClient::UpdateBackup(
    google::cloud::alloydb::v1::UpdateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBackup(request);
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminClient::DeleteBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::DeleteBackupRequest request;
  request.set_name(name);
  return connection_->DeleteBackup(request);
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminClient::DeleteBackup(
    google::cloud::alloydb::v1::DeleteBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBackup(request);
}

StreamRange<google::cloud::alloydb::v1::SupportedDatabaseFlag>
AlloyDBAdminClient::ListSupportedDatabaseFlags(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest request;
  request.set_parent(parent);
  return connection_->ListSupportedDatabaseFlags(request);
}

StreamRange<google::cloud::alloydb::v1::SupportedDatabaseFlag>
AlloyDBAdminClient::ListSupportedDatabaseFlags(
    google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSupportedDatabaseFlags(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1
}  // namespace cloud
}  // namespace google
