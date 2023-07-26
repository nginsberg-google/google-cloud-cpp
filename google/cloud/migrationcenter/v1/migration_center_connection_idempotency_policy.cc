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
// source: google/cloud/migrationcenter/v1/migrationcenter.proto

#include "google/cloud/migrationcenter/v1/migration_center_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace migrationcenter_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

MigrationCenterConnectionIdempotencyPolicy::
    ~MigrationCenterConnectionIdempotencyPolicy() = default;

std::unique_ptr<MigrationCenterConnectionIdempotencyPolicy>
MigrationCenterConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<MigrationCenterConnectionIdempotencyPolicy>(*this);
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListAssets(
    google::cloud::migrationcenter::v1::ListAssetsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetAsset(
    google::cloud::migrationcenter::v1::GetAssetRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::UpdateAsset(
    google::cloud::migrationcenter::v1::UpdateAssetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::BatchUpdateAssets(
    google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteAsset(
    google::cloud::migrationcenter::v1::DeleteAssetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::BatchDeleteAssets(
    google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ReportAssetFrames(
    google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::AggregateAssetsValues(
    google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreateImportJob(
    google::cloud::migrationcenter::v1::CreateImportJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListImportJobs(
    google::cloud::migrationcenter::v1::ListImportJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetImportJob(
    google::cloud::migrationcenter::v1::GetImportJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteImportJob(
    google::cloud::migrationcenter::v1::DeleteImportJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::UpdateImportJob(
    google::cloud::migrationcenter::v1::UpdateImportJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ValidateImportJob(
    google::cloud::migrationcenter::v1::ValidateImportJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::RunImportJob(
    google::cloud::migrationcenter::v1::RunImportJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetImportDataFile(
    google::cloud::migrationcenter::v1::GetImportDataFileRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListImportDataFiles(
    google::cloud::migrationcenter::v1::ListImportDataFilesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreateImportDataFile(
    google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteImportDataFile(
    google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListGroups(
    google::cloud::migrationcenter::v1::ListGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetGroup(
    google::cloud::migrationcenter::v1::GetGroupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreateGroup(
    google::cloud::migrationcenter::v1::CreateGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::UpdateGroup(
    google::cloud::migrationcenter::v1::UpdateGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteGroup(
    google::cloud::migrationcenter::v1::DeleteGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::AddAssetsToGroup(
    google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::RemoveAssetsFromGroup(
    google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListErrorFrames(
    google::cloud::migrationcenter::v1::ListErrorFramesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetErrorFrame(
    google::cloud::migrationcenter::v1::GetErrorFrameRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListSources(
    google::cloud::migrationcenter::v1::ListSourcesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetSource(
    google::cloud::migrationcenter::v1::GetSourceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreateSource(
    google::cloud::migrationcenter::v1::CreateSourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::UpdateSource(
    google::cloud::migrationcenter::v1::UpdateSourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteSource(
    google::cloud::migrationcenter::v1::DeleteSourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListPreferenceSets(
    google::cloud::migrationcenter::v1::ListPreferenceSetsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetPreferenceSet(
    google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreatePreferenceSet(
    google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::UpdatePreferenceSet(
    google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeletePreferenceSet(
    google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetSettings(
    google::cloud::migrationcenter::v1::GetSettingsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::UpdateSettings(
    google::cloud::migrationcenter::v1::UpdateSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreateReportConfig(
    google::cloud::migrationcenter::v1::CreateReportConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetReportConfig(
    google::cloud::migrationcenter::v1::GetReportConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListReportConfigs(
    google::cloud::migrationcenter::v1::ListReportConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteReportConfig(
    google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::CreateReport(
    google::cloud::migrationcenter::v1::CreateReportRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::GetReport(
    google::cloud::migrationcenter::v1::GetReportRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::ListReports(
    google::cloud::migrationcenter::v1::ListReportsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MigrationCenterConnectionIdempotencyPolicy::DeleteReport(
    google::cloud::migrationcenter::v1::DeleteReportRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<MigrationCenterConnectionIdempotencyPolicy>
MakeDefaultMigrationCenterConnectionIdempotencyPolicy() {
  return std::make_unique<MigrationCenterConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1
}  // namespace cloud
}  // namespace google
