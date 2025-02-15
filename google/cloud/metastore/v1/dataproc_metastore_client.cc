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

#include "google/cloud/metastore/v1/dataproc_metastore_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataprocMetastoreClient::DataprocMetastoreClient(
    std::shared_ptr<DataprocMetastoreConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DataprocMetastoreClient::~DataprocMetastoreClient() = default;

StreamRange<google::cloud::metastore::v1::Service>
DataprocMetastoreClient::ListServices(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::ListServicesRequest request;
  request.set_parent(parent);
  return connection_->ListServices(request);
}

StreamRange<google::cloud::metastore::v1::Service>
DataprocMetastoreClient::ListServices(
    google::cloud::metastore::v1::ListServicesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServices(std::move(request));
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreClient::GetService(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::GetServiceRequest request;
  request.set_name(name);
  return connection_->GetService(request);
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreClient::GetService(
    google::cloud::metastore::v1::GetServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetService(request);
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreClient::CreateService(
    std::string const& parent,
    google::cloud::metastore::v1::Service const& service,
    std::string const& service_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::CreateServiceRequest request;
  request.set_parent(parent);
  *request.mutable_service() = service;
  request.set_service_id(service_id);
  return connection_->CreateService(request);
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreClient::CreateService(
    google::cloud::metastore::v1::CreateServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(request);
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreClient::UpdateService(
    google::cloud::metastore::v1::Service const& service,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::UpdateServiceRequest request;
  *request.mutable_service() = service;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateService(request);
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreClient::UpdateService(
    google::cloud::metastore::v1::UpdateServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateService(request);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreClient::DeleteService(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::DeleteServiceRequest request;
  request.set_name(name);
  return connection_->DeleteService(request);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreClient::DeleteService(
    google::cloud::metastore::v1::DeleteServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(request);
}

StreamRange<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreClient::ListMetadataImports(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::ListMetadataImportsRequest request;
  request.set_parent(parent);
  return connection_->ListMetadataImports(request);
}

StreamRange<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreClient::ListMetadataImports(
    google::cloud::metastore::v1::ListMetadataImportsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMetadataImports(std::move(request));
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreClient::GetMetadataImport(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::GetMetadataImportRequest request;
  request.set_name(name);
  return connection_->GetMetadataImport(request);
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreClient::GetMetadataImport(
    google::cloud::metastore::v1::GetMetadataImportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMetadataImport(request);
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreClient::CreateMetadataImport(
    std::string const& parent,
    google::cloud::metastore::v1::MetadataImport const& metadata_import,
    std::string const& metadata_import_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::CreateMetadataImportRequest request;
  request.set_parent(parent);
  *request.mutable_metadata_import() = metadata_import;
  request.set_metadata_import_id(metadata_import_id);
  return connection_->CreateMetadataImport(request);
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreClient::CreateMetadataImport(
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMetadataImport(request);
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreClient::UpdateMetadataImport(
    google::cloud::metastore::v1::MetadataImport const& metadata_import,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::UpdateMetadataImportRequest request;
  *request.mutable_metadata_import() = metadata_import;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateMetadataImport(request);
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreClient::UpdateMetadataImport(
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateMetadataImport(request);
}

future<StatusOr<google::cloud::metastore::v1::MetadataExport>>
DataprocMetastoreClient::ExportMetadata(
    google::cloud::metastore::v1::ExportMetadataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportMetadata(request);
}

future<StatusOr<google::cloud::metastore::v1::Restore>>
DataprocMetastoreClient::RestoreService(std::string const& service,
                                        std::string const& backup,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::RestoreServiceRequest request;
  request.set_service(service);
  request.set_backup(backup);
  return connection_->RestoreService(request);
}

future<StatusOr<google::cloud::metastore::v1::Restore>>
DataprocMetastoreClient::RestoreService(
    google::cloud::metastore::v1::RestoreServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreService(request);
}

StreamRange<google::cloud::metastore::v1::Backup>
DataprocMetastoreClient::ListBackups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::ListBackupsRequest request;
  request.set_parent(parent);
  return connection_->ListBackups(request);
}

StreamRange<google::cloud::metastore::v1::Backup>
DataprocMetastoreClient::ListBackups(
    google::cloud::metastore::v1::ListBackupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackups(std::move(request));
}

StatusOr<google::cloud::metastore::v1::Backup>
DataprocMetastoreClient::GetBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::GetBackupRequest request;
  request.set_name(name);
  return connection_->GetBackup(request);
}

StatusOr<google::cloud::metastore::v1::Backup>
DataprocMetastoreClient::GetBackup(
    google::cloud::metastore::v1::GetBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBackup(request);
}

future<StatusOr<google::cloud::metastore::v1::Backup>>
DataprocMetastoreClient::CreateBackup(
    std::string const& parent,
    google::cloud::metastore::v1::Backup const& backup,
    std::string const& backup_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::CreateBackupRequest request;
  request.set_parent(parent);
  *request.mutable_backup() = backup;
  request.set_backup_id(backup_id);
  return connection_->CreateBackup(request);
}

future<StatusOr<google::cloud::metastore::v1::Backup>>
DataprocMetastoreClient::CreateBackup(
    google::cloud::metastore::v1::CreateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(request);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreClient::DeleteBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::DeleteBackupRequest request;
  request.set_name(name);
  return connection_->DeleteBackup(request);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreClient::DeleteBackup(
    google::cloud::metastore::v1::DeleteBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBackup(request);
}

future<StatusOr<google::cloud::metastore::v1::QueryMetadataResponse>>
DataprocMetastoreClient::QueryMetadata(
    google::cloud::metastore::v1::QueryMetadataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->QueryMetadata(request);
}

future<StatusOr<google::cloud::metastore::v1::MoveTableToDatabaseResponse>>
DataprocMetastoreClient::MoveTableToDatabase(
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveTableToDatabase(request);
}

future<StatusOr<
    google::cloud::metastore::v1::AlterMetadataResourceLocationResponse>>
DataprocMetastoreClient::AlterMetadataResourceLocation(
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AlterMetadataResourceLocation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1
}  // namespace cloud
}  // namespace google
