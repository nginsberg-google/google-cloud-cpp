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
// source: google/cloud/bigquery/biglake/v1/metastore.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGLAKE_V1_INTERNAL_METASTORE_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGLAKE_V1_INTERNAL_METASTORE_LOGGING_DECORATOR_H

#include "google/cloud/bigquery/biglake/v1/internal/metastore_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_biglake_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetastoreServiceLogging : public MetastoreServiceStub {
 public:
  ~MetastoreServiceLogging() override = default;
  MetastoreServiceLogging(std::shared_ptr<MetastoreServiceStub> child,
                          TracingOptions tracing_options,
                          std::set<std::string> const& components);

  StatusOr<google::cloud::bigquery::biglake::v1::Catalog> CreateCatalog(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::CreateCatalogRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Catalog> DeleteCatalog(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::DeleteCatalogRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Catalog> GetCatalog(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::GetCatalogRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::ListCatalogsResponse>
  ListCatalogs(grpc::ClientContext& context, Options const& options,
               google::cloud::bigquery::biglake::v1::ListCatalogsRequest const&
                   request) override;

  StatusOr<google::cloud::bigquery::biglake::v1::Database> CreateDatabase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::CreateDatabaseRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::biglake::v1::Database> DeleteDatabase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::DeleteDatabaseRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::biglake::v1::Database> UpdateDatabase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::UpdateDatabaseRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::biglake::v1::Database> GetDatabase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::GetDatabaseRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::ListDatabasesResponse>
  ListDatabases(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::ListDatabasesRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Table> CreateTable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::CreateTableRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Table> DeleteTable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::DeleteTableRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Table> UpdateTable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::UpdateTableRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Table> RenameTable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::RenameTableRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::Table> GetTable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::GetTableRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::biglake::v1::ListTablesResponse> ListTables(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::biglake::v1::ListTablesRequest const& request)
      override;

 private:
  std::shared_ptr<MetastoreServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // MetastoreServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_biglake_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGLAKE_V1_INTERNAL_METASTORE_LOGGING_DECORATOR_H
