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
// source: google/cloud/metastore/v1/metastore.proto

#include "google/cloud/metastore/v1/dataproc_metastore_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DataprocMetastoreConnectionIdempotencyPolicy::
    ~DataprocMetastoreConnectionIdempotencyPolicy() = default;

std::unique_ptr<DataprocMetastoreConnectionIdempotencyPolicy>
DataprocMetastoreConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DataprocMetastoreConnectionIdempotencyPolicy>(*this);
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::ListServices(
    google::cloud::metastore::v1::ListServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::GetService(
    google::cloud::metastore::v1::GetServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::CreateService(
    google::cloud::metastore::v1::CreateServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::UpdateService(
    google::cloud::metastore::v1::UpdateServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::DeleteService(
    google::cloud::metastore::v1::DeleteServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::ListMetadataImports(
    google::cloud::metastore::v1::ListMetadataImportsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::GetMetadataImport(
    google::cloud::metastore::v1::GetMetadataImportRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::CreateMetadataImport(
    google::cloud::metastore::v1::CreateMetadataImportRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::UpdateMetadataImport(
    google::cloud::metastore::v1::UpdateMetadataImportRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::ExportMetadata(
    google::cloud::metastore::v1::ExportMetadataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::RestoreService(
    google::cloud::metastore::v1::RestoreServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::ListBackups(
    google::cloud::metastore::v1::ListBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::GetBackup(
    google::cloud::metastore::v1::GetBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::CreateBackup(
    google::cloud::metastore::v1::CreateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::DeleteBackup(
    google::cloud::metastore::v1::DeleteBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::QueryMetadata(
    google::cloud::metastore::v1::QueryMetadataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataprocMetastoreConnectionIdempotencyPolicy::MoveTableToDatabase(
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataprocMetastoreConnectionIdempotencyPolicy::AlterMetadataResourceLocation(
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<DataprocMetastoreConnectionIdempotencyPolicy>
MakeDefaultDataprocMetastoreConnectionIdempotencyPolicy() {
  return std::make_unique<DataprocMetastoreConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1
}  // namespace cloud
}  // namespace google
