// Copyright 2022 Google LLC
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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_auth_decorator.h"
#include <google/cloud/bigquery/datatransfer/v1/datatransfer.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataTransferServiceAuth::DataTransferServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DataTransferServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceAuth::GetDataSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDataSource(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListDataSourcesResponse>
DataTransferServiceAuth::ListDataSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDataSources(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceAuth::CreateTransferConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTransferConfig(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceAuth::UpdateTransferConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTransferConfig(context, options, request);
}

Status DataTransferServiceAuth::DeleteTransferConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTransferConfig(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceAuth::GetTransferConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTransferConfig(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferConfigsResponse>
DataTransferServiceAuth::ListTransferConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransferConfigs(context, options, request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceAuth::ScheduleTransferRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ScheduleTransferRuns(context, options, request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceAuth::StartManualTransferRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartManualTransferRuns(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceAuth::GetTransferRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTransferRun(context, options, request);
}

Status DataTransferServiceAuth::DeleteTransferRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTransferRun(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferRunsResponse>
DataTransferServiceAuth::ListTransferRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransferRuns(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferLogsResponse>
DataTransferServiceAuth::ListTransferLogs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransferLogs(context, options, request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceAuth::CheckValidCreds(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CheckValidCreds(context, options, request);
}

Status DataTransferServiceAuth::EnrollDataSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->EnrollDataSources(context, options, request);
}

Status DataTransferServiceAuth::UnenrollDataSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::datatransfer::v1::UnenrollDataSourcesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UnenrollDataSources(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1_internal
}  // namespace cloud
}  // namespace google
