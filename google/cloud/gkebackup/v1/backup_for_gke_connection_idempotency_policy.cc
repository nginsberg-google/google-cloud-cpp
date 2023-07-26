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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#include "google/cloud/gkebackup/v1/backup_for_gke_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkebackup_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

BackupForGKEConnectionIdempotencyPolicy::
    ~BackupForGKEConnectionIdempotencyPolicy() = default;

std::unique_ptr<BackupForGKEConnectionIdempotencyPolicy>
BackupForGKEConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<BackupForGKEConnectionIdempotencyPolicy>(*this);
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::CreateBackupPlan(
    google::cloud::gkebackup::v1::CreateBackupPlanRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::ListBackupPlans(
    google::cloud::gkebackup::v1::ListBackupPlansRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::GetBackupPlan(
    google::cloud::gkebackup::v1::GetBackupPlanRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::UpdateBackupPlan(
    google::cloud::gkebackup::v1::UpdateBackupPlanRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::DeleteBackupPlan(
    google::cloud::gkebackup::v1::DeleteBackupPlanRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::CreateBackup(
    google::cloud::gkebackup::v1::CreateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::ListBackups(
    google::cloud::gkebackup::v1::ListBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::GetBackup(
    google::cloud::gkebackup::v1::GetBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::UpdateBackup(
    google::cloud::gkebackup::v1::UpdateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::DeleteBackup(
    google::cloud::gkebackup::v1::DeleteBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::ListVolumeBackups(
    google::cloud::gkebackup::v1::ListVolumeBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::GetVolumeBackup(
    google::cloud::gkebackup::v1::GetVolumeBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::CreateRestorePlan(
    google::cloud::gkebackup::v1::CreateRestorePlanRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::ListRestorePlans(
    google::cloud::gkebackup::v1::ListRestorePlansRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::GetRestorePlan(
    google::cloud::gkebackup::v1::GetRestorePlanRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::UpdateRestorePlan(
    google::cloud::gkebackup::v1::UpdateRestorePlanRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::DeleteRestorePlan(
    google::cloud::gkebackup::v1::DeleteRestorePlanRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::CreateRestore(
    google::cloud::gkebackup::v1::CreateRestoreRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::ListRestores(
    google::cloud::gkebackup::v1::ListRestoresRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::GetRestore(
    google::cloud::gkebackup::v1::GetRestoreRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::UpdateRestore(
    google::cloud::gkebackup::v1::UpdateRestoreRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::DeleteRestore(
    google::cloud::gkebackup::v1::DeleteRestoreRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::ListVolumeRestores(
    google::cloud::gkebackup::v1::ListVolumeRestoresRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BackupForGKEConnectionIdempotencyPolicy::GetVolumeRestore(
    google::cloud::gkebackup::v1::GetVolumeRestoreRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<BackupForGKEConnectionIdempotencyPolicy>
MakeDefaultBackupForGKEConnectionIdempotencyPolicy() {
  return std::make_unique<BackupForGKEConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkebackup_v1
}  // namespace cloud
}  // namespace google
