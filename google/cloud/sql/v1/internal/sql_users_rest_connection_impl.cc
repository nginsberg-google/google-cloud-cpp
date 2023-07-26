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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#include "google/cloud/sql/v1/internal/sql_users_rest_connection_impl.h"
#include "google/cloud/sql/v1/internal/sql_users_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlUsersServiceRestConnectionImpl::SqlUsersServiceRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<sql_v1_internal::SqlUsersServiceRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SqlUsersServiceConnection::options())) {}

StatusOr<google::cloud::sql::v1::Operation>
SqlUsersServiceRestConnectionImpl::Delete(
    google::cloud::sql::v1::SqlUsersDeleteRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->Delete(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersDeleteRequest const& request) {
        return stub_->Delete(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::sql::v1::User> SqlUsersServiceRestConnectionImpl::Get(
    google::cloud::sql::v1::SqlUsersGetRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->Get(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersGetRequest const& request) {
        return stub_->Get(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlUsersServiceRestConnectionImpl::Insert(
    google::cloud::sql::v1::SqlUsersInsertRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->Insert(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersInsertRequest const& request) {
        return stub_->Insert(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::sql::v1::UsersListResponse>
SqlUsersServiceRestConnectionImpl::List(
    google::cloud::sql::v1::SqlUsersListRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->List(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersListRequest const& request) {
        return stub_->List(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlUsersServiceRestConnectionImpl::Update(
    google::cloud::sql::v1::SqlUsersUpdateRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->Update(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersUpdateRequest const& request) {
        return stub_->Update(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
