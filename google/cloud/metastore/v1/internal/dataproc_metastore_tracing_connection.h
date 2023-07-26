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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_TRACING_CONNECTION_H

#include "google/cloud/metastore/v1/dataproc_metastore_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DataprocMetastoreTracingConnection
    : public metastore_v1::DataprocMetastoreConnection {
 public:
  ~DataprocMetastoreTracingConnection() override = default;

  explicit DataprocMetastoreTracingConnection(
      std::shared_ptr<metastore_v1::DataprocMetastoreConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::metastore::v1::Service> ListServices(
      google::cloud::metastore::v1::ListServicesRequest request) override;

  StatusOr<google::cloud::metastore::v1::Service> GetService(
      google::cloud::metastore::v1::GetServiceRequest const& request) override;

  future<StatusOr<google::cloud::metastore::v1::Service>> CreateService(
      google::cloud::metastore::v1::CreateServiceRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::Service>> UpdateService(
      google::cloud::metastore::v1::UpdateServiceRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
  DeleteService(google::cloud::metastore::v1::DeleteServiceRequest const&
                    request) override;

  StreamRange<google::cloud::metastore::v1::MetadataImport> ListMetadataImports(
      google::cloud::metastore::v1::ListMetadataImportsRequest request)
      override;

  StatusOr<google::cloud::metastore::v1::MetadataImport> GetMetadataImport(
      google::cloud::metastore::v1::GetMetadataImportRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
  CreateMetadataImport(
      google::cloud::metastore::v1::CreateMetadataImportRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
  UpdateMetadataImport(
      google::cloud::metastore::v1::UpdateMetadataImportRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::MetadataExport>> ExportMetadata(
      google::cloud::metastore::v1::ExportMetadataRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::Restore>> RestoreService(
      google::cloud::metastore::v1::RestoreServiceRequest const& request)
      override;

  StreamRange<google::cloud::metastore::v1::Backup> ListBackups(
      google::cloud::metastore::v1::ListBackupsRequest request) override;

  StatusOr<google::cloud::metastore::v1::Backup> GetBackup(
      google::cloud::metastore::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::cloud::metastore::v1::Backup>> CreateBackup(
      google::cloud::metastore::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
  DeleteBackup(google::cloud::metastore::v1::DeleteBackupRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::QueryMetadataResponse>>
  QueryMetadata(google::cloud::metastore::v1::QueryMetadataRequest const&
                    request) override;

  future<StatusOr<google::cloud::metastore::v1::MoveTableToDatabaseResponse>>
  MoveTableToDatabase(
      google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request)
      override;

  future<StatusOr<
      google::cloud::metastore::v1::AlterMetadataResourceLocationResponse>>
  AlterMetadataResourceLocation(
      google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
          request) override;

 private:
  std::shared_ptr<metastore_v1::DataprocMetastoreConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<metastore_v1::DataprocMetastoreConnection>
MakeDataprocMetastoreTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_TRACING_CONNECTION_H
