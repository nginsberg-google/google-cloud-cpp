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

#include "google/cloud/bigquery/biglake/v1/internal/metastore_connection_impl.h"
#include "google/cloud/bigquery/biglake/v1/internal/metastore_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_biglake_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetastoreServiceConnectionImpl::MetastoreServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquery_biglake_v1_internal::MetastoreServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MetastoreServiceConnection::options())) {}

StatusOr<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceConnectionImpl::CreateCatalog(
    google::cloud::bigquery::biglake::v1::CreateCatalogRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCatalog(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::CreateCatalogRequest const&
                 request) { return stub_->CreateCatalog(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceConnectionImpl::DeleteCatalog(
    google::cloud::bigquery::biglake::v1::DeleteCatalogRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteCatalog(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::DeleteCatalogRequest const&
                 request) { return stub_->DeleteCatalog(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceConnectionImpl::GetCatalog(
    google::cloud::bigquery::biglake::v1::GetCatalogRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCatalog(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::GetCatalogRequest const&
                 request) { return stub_->GetCatalog(context, request); },
      request, __func__);
}

StreamRange<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceConnectionImpl::ListCatalogs(
    google::cloud::bigquery::biglake::v1::ListCatalogsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<bigquery_biglake_v1::MetastoreServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCatalogs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::biglake::v1::Catalog>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::bigquery::biglake::v1::ListCatalogsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::bigquery::biglake::v1::ListCatalogsRequest const&
                    request) { return stub->ListCatalogs(context, request); },
            r, function_name);
      },
      [](google::cloud::bigquery::biglake::v1::ListCatalogsResponse r) {
        std::vector<google::cloud::bigquery::biglake::v1::Catalog> result(
            r.catalogs().size());
        auto& messages = *r.mutable_catalogs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceConnectionImpl::CreateDatabase(
    google::cloud::bigquery::biglake::v1::CreateDatabaseRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateDatabase(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::CreateDatabaseRequest const&
                 request) { return stub_->CreateDatabase(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceConnectionImpl::DeleteDatabase(
    google::cloud::bigquery::biglake::v1::DeleteDatabaseRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteDatabase(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::DeleteDatabaseRequest const&
                 request) { return stub_->DeleteDatabase(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceConnectionImpl::UpdateDatabase(
    google::cloud::bigquery::biglake::v1::UpdateDatabaseRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateDatabase(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::UpdateDatabaseRequest const&
                 request) { return stub_->UpdateDatabase(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceConnectionImpl::GetDatabase(
    google::cloud::bigquery::biglake::v1::GetDatabaseRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDatabase(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::GetDatabaseRequest const&
                 request) { return stub_->GetDatabase(context, request); },
      request, __func__);
}

StreamRange<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceConnectionImpl::ListDatabases(
    google::cloud::bigquery::biglake::v1::ListDatabasesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<bigquery_biglake_v1::MetastoreServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListDatabases(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::biglake::v1::Database>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::bigquery::biglake::v1::ListDatabasesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::biglake::v1::
                       ListDatabasesRequest const& request) {
              return stub->ListDatabases(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::biglake::v1::ListDatabasesResponse r) {
        std::vector<google::cloud::bigquery::biglake::v1::Database> result(
            r.databases().size());
        auto& messages = *r.mutable_databases();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceConnectionImpl::CreateTable(
    google::cloud::bigquery::biglake::v1::CreateTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateTable(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::CreateTableRequest const&
                 request) { return stub_->CreateTable(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceConnectionImpl::DeleteTable(
    google::cloud::bigquery::biglake::v1::DeleteTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteTable(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::DeleteTableRequest const&
                 request) { return stub_->DeleteTable(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceConnectionImpl::UpdateTable(
    google::cloud::bigquery::biglake::v1::UpdateTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateTable(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::UpdateTableRequest const&
                 request) { return stub_->UpdateTable(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceConnectionImpl::RenameTable(
    google::cloud::bigquery::biglake::v1::RenameTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->RenameTable(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::RenameTableRequest const&
                 request) { return stub_->RenameTable(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceConnectionImpl::GetTable(
    google::cloud::bigquery::biglake::v1::GetTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetTable(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::biglake::v1::GetTableRequest const&
                 request) { return stub_->GetTable(context, request); },
      request, __func__);
}

StreamRange<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceConnectionImpl::ListTables(
    google::cloud::bigquery::biglake::v1::ListTablesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<bigquery_biglake_v1::MetastoreServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTables(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::biglake::v1::Table>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::bigquery::biglake::v1::ListTablesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::bigquery::biglake::v1::ListTablesRequest const&
                    request) { return stub->ListTables(context, request); },
            r, function_name);
      },
      [](google::cloud::bigquery::biglake::v1::ListTablesResponse r) {
        std::vector<google::cloud::bigquery::biglake::v1::Table> result(
            r.tables().size());
        auto& messages = *r.mutable_tables();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_biglake_v1_internal
}  // namespace cloud
}  // namespace google
