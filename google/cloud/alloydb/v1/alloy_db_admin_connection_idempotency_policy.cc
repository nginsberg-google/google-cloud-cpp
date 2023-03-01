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

#include "google/cloud/alloydb/v1/alloy_db_admin_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace alloydb_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AlloyDBAdminConnectionIdempotencyPolicy::
    ~AlloyDBAdminConnectionIdempotencyPolicy() = default;

std::unique_ptr<AlloyDBAdminConnectionIdempotencyPolicy>
AlloyDBAdminConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<AlloyDBAdminConnectionIdempotencyPolicy>(*this);
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::ListClusters(
    google::cloud::alloydb::v1::ListClustersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::GetCluster(
    google::cloud::alloydb::v1::GetClusterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::CreateCluster(
    google::cloud::alloydb::v1::CreateClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::UpdateCluster(
    google::cloud::alloydb::v1::UpdateClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::DeleteCluster(
    google::cloud::alloydb::v1::DeleteClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::RestoreCluster(
    google::cloud::alloydb::v1::RestoreClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::ListInstances(
    google::cloud::alloydb::v1::ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::GetInstance(
    google::cloud::alloydb::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::CreateInstance(
    google::cloud::alloydb::v1::CreateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::BatchCreateInstances(
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::UpdateInstance(
    google::cloud::alloydb::v1::UpdateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::DeleteInstance(
    google::cloud::alloydb::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::FailoverInstance(
    google::cloud::alloydb::v1::FailoverInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::RestartInstance(
    google::cloud::alloydb::v1::RestartInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::ListBackups(
    google::cloud::alloydb::v1::ListBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::GetBackup(
    google::cloud::alloydb::v1::GetBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::CreateBackup(
    google::cloud::alloydb::v1::CreateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::UpdateBackup(
    google::cloud::alloydb::v1::UpdateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::DeleteBackup(
    google::cloud::alloydb::v1::DeleteBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AlloyDBAdminConnectionIdempotencyPolicy::ListSupportedDatabaseFlags(
    google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<AlloyDBAdminConnectionIdempotencyPolicy>
MakeDefaultAlloyDBAdminConnectionIdempotencyPolicy() {
  return absl::make_unique<AlloyDBAdminConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1
}  // namespace cloud
}  // namespace google
