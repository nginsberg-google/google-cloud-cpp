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

#include "google/cloud/migrationcenter/v1/migration_center_connection.h"
#include "google/cloud/migrationcenter/v1/internal/migration_center_connection_impl.h"
#include "google/cloud/migrationcenter/v1/internal/migration_center_option_defaults.h"
#include "google/cloud/migrationcenter/v1/internal/migration_center_stub_factory.h"
#include "google/cloud/migrationcenter/v1/internal/migration_center_tracing_connection.h"
#include "google/cloud/migrationcenter/v1/migration_center_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace migrationcenter_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationCenterConnection::~MigrationCenterConnection() = default;

StreamRange<google::cloud::migrationcenter::v1::Asset>
MigrationCenterConnection::ListAssets(
    google::cloud::migrationcenter::v1::
        ListAssetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::Asset>>();
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterConnection::GetAsset(
    google::cloud::migrationcenter::v1::GetAssetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterConnection::UpdateAsset(
    google::cloud::migrationcenter::v1::UpdateAssetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>
MigrationCenterConnection::BatchUpdateAssets(
    google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status MigrationCenterConnection::DeleteAsset(
    google::cloud::migrationcenter::v1::DeleteAssetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status MigrationCenterConnection::BatchDeleteAssets(
    google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::migrationcenter::v1::ReportAssetFramesResponse>
MigrationCenterConnection::ReportAssetFrames(
    google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>
MigrationCenterConnection::AggregateAssetsValues(
    google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>
MigrationCenterConnection::CreateImportJob(
    google::cloud::migrationcenter::v1::CreateImportJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::ImportJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::migrationcenter::v1::ImportJob>
MigrationCenterConnection::ListImportJobs(
    google::cloud::migrationcenter::v1::
        ListImportJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::ImportJob>>();
}

StatusOr<google::cloud::migrationcenter::v1::ImportJob>
MigrationCenterConnection::GetImportJob(
    google::cloud::migrationcenter::v1::GetImportJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeleteImportJob(
    google::cloud::migrationcenter::v1::DeleteImportJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>
MigrationCenterConnection::UpdateImportJob(
    google::cloud::migrationcenter::v1::UpdateImportJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::ImportJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::ValidateImportJob(
    google::cloud::migrationcenter::v1::ValidateImportJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::RunImportJob(
    google::cloud::migrationcenter::v1::RunImportJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>
MigrationCenterConnection::GetImportDataFile(
    google::cloud::migrationcenter::v1::GetImportDataFileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::migrationcenter::v1::ImportDataFile>
MigrationCenterConnection::ListImportDataFiles(
    google::cloud::migrationcenter::v1::
        ListImportDataFilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::ImportDataFile>>();
}

future<StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>>
MigrationCenterConnection::CreateImportDataFile(
    google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeleteImportDataFile(
    google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::migrationcenter::v1::Group>
MigrationCenterConnection::ListGroups(
    google::cloud::migrationcenter::v1::
        ListGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::Group>>();
}

StatusOr<google::cloud::migrationcenter::v1::Group>
MigrationCenterConnection::GetGroup(
    google::cloud::migrationcenter::v1::GetGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::migrationcenter::v1::Group>>
MigrationCenterConnection::CreateGroup(
    google::cloud::migrationcenter::v1::CreateGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Group>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::Group>>
MigrationCenterConnection::UpdateGroup(
    google::cloud::migrationcenter::v1::UpdateGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Group>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeleteGroup(
    google::cloud::migrationcenter::v1::DeleteGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::Group>>
MigrationCenterConnection::AddAssetsToGroup(
    google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Group>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::Group>>
MigrationCenterConnection::RemoveAssetsFromGroup(
    google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Group>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::migrationcenter::v1::ErrorFrame>
MigrationCenterConnection::ListErrorFrames(
    google::cloud::migrationcenter::v1::
        ListErrorFramesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::ErrorFrame>>();
}

StatusOr<google::cloud::migrationcenter::v1::ErrorFrame>
MigrationCenterConnection::GetErrorFrame(
    google::cloud::migrationcenter::v1::GetErrorFrameRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::migrationcenter::v1::Source>
MigrationCenterConnection::ListSources(
    google::cloud::migrationcenter::v1::
        ListSourcesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::Source>>();
}

StatusOr<google::cloud::migrationcenter::v1::Source>
MigrationCenterConnection::GetSource(
    google::cloud::migrationcenter::v1::GetSourceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::migrationcenter::v1::Source>>
MigrationCenterConnection::CreateSource(
    google::cloud::migrationcenter::v1::CreateSourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Source>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::Source>>
MigrationCenterConnection::UpdateSource(
    google::cloud::migrationcenter::v1::UpdateSourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Source>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeleteSource(
    google::cloud::migrationcenter::v1::DeleteSourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::migrationcenter::v1::PreferenceSet>
MigrationCenterConnection::ListPreferenceSets(
    google::cloud::migrationcenter::v1::
        ListPreferenceSetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::PreferenceSet>>();
}

StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>
MigrationCenterConnection::GetPreferenceSet(
    google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>
MigrationCenterConnection::CreatePreferenceSet(
    google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>
MigrationCenterConnection::UpdatePreferenceSet(
    google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeletePreferenceSet(
    google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::migrationcenter::v1::Settings>
MigrationCenterConnection::GetSettings(
    google::cloud::migrationcenter::v1::GetSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::migrationcenter::v1::Settings>>
MigrationCenterConnection::UpdateSettings(
    google::cloud::migrationcenter::v1::UpdateSettingsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Settings>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::ReportConfig>>
MigrationCenterConnection::CreateReportConfig(
    google::cloud::migrationcenter::v1::CreateReportConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::ReportConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::migrationcenter::v1::ReportConfig>
MigrationCenterConnection::GetReportConfig(
    google::cloud::migrationcenter::v1::GetReportConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::migrationcenter::v1::ReportConfig>
MigrationCenterConnection::ListReportConfigs(
    google::cloud::migrationcenter::v1::
        ListReportConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::ReportConfig>>();
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeleteReportConfig(
    google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::migrationcenter::v1::Report>>
MigrationCenterConnection::CreateReport(
    google::cloud::migrationcenter::v1::CreateReportRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::Report>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::migrationcenter::v1::Report>
MigrationCenterConnection::GetReport(
    google::cloud::migrationcenter::v1::GetReportRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::migrationcenter::v1::Report>
MigrationCenterConnection::ListReports(
    google::cloud::migrationcenter::v1::
        ListReportsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::migrationcenter::v1::Report>>();
}

future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
MigrationCenterConnection::DeleteReport(
    google::cloud::migrationcenter::v1::DeleteReportRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<MigrationCenterConnection> MakeMigrationCenterConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 MigrationCenterPolicyOptionList>(options,
                                                                  __func__);
  options = migrationcenter_v1_internal::MigrationCenterDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = migrationcenter_v1_internal::CreateDefaultMigrationCenterStub(
      background->cq(), options);
  return migrationcenter_v1_internal::MakeMigrationCenterTracingConnection(
      std::make_shared<
          migrationcenter_v1_internal::MigrationCenterConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1
}  // namespace cloud
}  // namespace google
