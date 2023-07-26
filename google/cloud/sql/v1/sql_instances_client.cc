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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#include "google/cloud/sql/v1/sql_instances_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlInstancesServiceClient::SqlInstancesServiceClient(
    ExperimentalTag, std::shared_ptr<SqlInstancesServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SqlInstancesServiceClient::~SqlInstancesServiceClient() = default;

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::AddServerCa(
    google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddServerCa(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Clone(
    google::cloud::sql::v1::SqlInstancesCloneRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Clone(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Delete(
    google::cloud::sql::v1::SqlInstancesDeleteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Delete(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::DemoteMaster(
    google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DemoteMaster(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Export(
    google::cloud::sql::v1::SqlInstancesExportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Export(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Failover(
    google::cloud::sql::v1::SqlInstancesFailoverRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Failover(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::Reencrypt(
    google::cloud::sql::v1::SqlInstancesReencryptRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Reencrypt(request);
}

StatusOr<google::cloud::sql::v1::DatabaseInstance>
SqlInstancesServiceClient::Get(
    google::cloud::sql::v1::SqlInstancesGetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Get(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Import(
    google::cloud::sql::v1::SqlInstancesImportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Import(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Insert(
    google::cloud::sql::v1::SqlInstancesInsertRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Insert(request);
}

StreamRange<google::cloud::sql::v1::DatabaseInstance>
SqlInstancesServiceClient::List(
    google::cloud::sql::v1::SqlInstancesListRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->List(std::move(request));
}

StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
SqlInstancesServiceClient::ListServerCas(
    google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServerCas(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Patch(
    google::cloud::sql::v1::SqlInstancesPatchRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Patch(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::PromoteReplica(
    google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PromoteReplica(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::ResetSslConfig(
    google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResetSslConfig(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Restart(
    google::cloud::sql::v1::SqlInstancesRestartRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Restart(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::RestoreBackup(
    google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreBackup(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::RotateServerCa(
    google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RotateServerCa(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::StartReplica(
    google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartReplica(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::StopReplica(
    google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopReplica(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::TruncateLog(
    google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TruncateLog(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlInstancesServiceClient::Update(
    google::cloud::sql::v1::SqlInstancesUpdateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Update(request);
}

StatusOr<google::cloud::sql::v1::SslCert>
SqlInstancesServiceClient::CreateEphemeral(
    google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEphemeral(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::RescheduleMaintenance(
    google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RescheduleMaintenance(request);
}

StatusOr<google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
SqlInstancesServiceClient::VerifyExternalSyncSettings(
    google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->VerifyExternalSyncSettings(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::StartExternalSync(
    google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartExternalSync(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::PerformDiskShrink(
    google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PerformDiskShrink(request);
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
SqlInstancesServiceClient::GetDiskShrinkConfig(
    google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDiskShrinkConfig(request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceClient::ResetReplicaSize(
    google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResetReplicaSize(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google
