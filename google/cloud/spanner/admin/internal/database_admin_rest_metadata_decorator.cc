// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatabaseAdminRestMetadata::DatabaseAdminRestMetadata(
    std::shared_ptr<DatabaseAdminRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DatabaseAdminRestMetadata::ListDatabases(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListDatabases(rest_context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncCreateDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncCreateDatabase(cq, std::move(rest_context), request);
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminRestMetadata::GetDatabase(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetDatabase(rest_context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncUpdateDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateDatabase(cq, std::move(rest_context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncUpdateDatabaseDdl(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateDatabaseDdl(cq, std::move(rest_context), request);
}

Status DatabaseAdminRestMetadata::DropDatabase(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  SetMetadata(rest_context);
  return child_->DropDatabase(rest_context, request);
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminRestMetadata::GetDatabaseDdl(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetDatabaseDdl(rest_context, request);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncCreateBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCreateBackup(cq, std::move(rest_context), request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncCopyBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCopyBackup(cq, std::move(rest_context), request);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminRestMetadata::GetBackup(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetBackup(rest_context, request);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminRestMetadata::UpdateBackup(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  SetMetadata(rest_context);
  return child_->UpdateBackup(rest_context, request);
}

Status DatabaseAdminRestMetadata::DeleteBackup(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  SetMetadata(rest_context);
  return child_->DeleteBackup(rest_context, request);
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DatabaseAdminRestMetadata::ListBackups(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListBackups(rest_context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncRestoreDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncRestoreDatabase(cq, std::move(rest_context), request);
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DatabaseAdminRestMetadata::ListDatabaseOperations(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListDatabaseOperations(rest_context, request);
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DatabaseAdminRestMetadata::ListBackupOperations(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListBackupOperations(rest_context, request);
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DatabaseAdminRestMetadata::ListDatabaseRoles(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListDatabaseRoles(rest_context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> DatabaseAdminRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void DatabaseAdminRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
