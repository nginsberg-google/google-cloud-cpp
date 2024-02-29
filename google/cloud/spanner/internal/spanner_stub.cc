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
// source: google/spanner/v1/spanner.proto

#include "google/cloud/spanner/internal/spanner_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/spanner/v1/spanner.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpannerStub::~SpannerStub() = default;

StatusOr<google::spanner::v1::Session> DefaultSpannerStub::CreateSession(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::CreateSessionRequest const& request) {
  google::spanner::v1::Session response;
  auto status = grpc_stub_->CreateSession(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::v1::BatchCreateSessionsResponse>
DefaultSpannerStub::BatchCreateSessions(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::BatchCreateSessionsRequest const& request) {
  google::spanner::v1::BatchCreateSessionsResponse response;
  auto status = grpc_stub_->BatchCreateSessions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSpannerStub::DeleteSession(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::DeleteSessionRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSession(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::spanner::v1::ResultSet> DefaultSpannerStub::ExecuteSql(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::ExecuteSqlRequest const& request) {
  google::spanner::v1::ResultSet response;
  auto status = grpc_stub_->ExecuteSql(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::spanner::v1::PartialResultSet>>
DefaultSpannerStub::ExecuteStreamingSql(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::spanner::v1::ExecuteSqlRequest const& request) {
  auto stream = grpc_stub_->ExecuteStreamingSql(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::spanner::v1::PartialResultSet>>(std::move(context),
                                              std::move(stream));
}

StatusOr<google::spanner::v1::ExecuteBatchDmlResponse>
DefaultSpannerStub::ExecuteBatchDml(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::ExecuteBatchDmlRequest const& request) {
  google::spanner::v1::ExecuteBatchDmlResponse response;
  auto status = grpc_stub_->ExecuteBatchDml(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::spanner::v1::PartialResultSet>>
DefaultSpannerStub::StreamingRead(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::spanner::v1::ReadRequest const& request) {
  auto stream = grpc_stub_->StreamingRead(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::spanner::v1::PartialResultSet>>(std::move(context),
                                              std::move(stream));
}

StatusOr<google::spanner::v1::Transaction> DefaultSpannerStub::BeginTransaction(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::BeginTransactionRequest const& request) {
  google::spanner::v1::Transaction response;
  auto status = grpc_stub_->BeginTransaction(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::v1::CommitResponse> DefaultSpannerStub::Commit(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::CommitRequest const& request) {
  google::spanner::v1::CommitResponse response;
  auto status = grpc_stub_->Commit(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSpannerStub::Rollback(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::RollbackRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->Rollback(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::spanner::v1::PartitionResponse>
DefaultSpannerStub::PartitionQuery(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::PartitionQueryRequest const& request) {
  google::spanner::v1::PartitionResponse response;
  auto status = grpc_stub_->PartitionQuery(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::v1::PartitionResponse>
DefaultSpannerStub::PartitionRead(
    grpc::ClientContext& context, Options const&,
    google::spanner::v1::PartitionReadRequest const& request) {
  google::spanner::v1::PartitionResponse response;
  auto status = grpc_stub_->PartitionRead(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::spanner::v1::BatchWriteResponse>>
DefaultSpannerStub::BatchWrite(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::spanner::v1::BatchWriteRequest const& request) {
  auto stream = grpc_stub_->BatchWrite(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::spanner::v1::BatchWriteResponse>>(std::move(context),
                                                std::move(stream));
}

future<StatusOr<google::spanner::v1::BatchCreateSessionsResponse>>
DefaultSpannerStub::AsyncBatchCreateSessions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::v1::BatchCreateSessionsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::v1::BatchCreateSessionsRequest,
      google::spanner::v1::BatchCreateSessionsResponse>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::v1::BatchCreateSessionsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateSessions(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultSpannerStub::AsyncDeleteSession(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::v1::DeleteSessionRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::spanner::v1::DeleteSessionRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::spanner::v1::DeleteSessionRequest const& request,
                    grpc::CompletionQueue* cq) {
               return grpc_stub_->AsyncDeleteSession(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

future<StatusOr<google::spanner::v1::ResultSet>>
DefaultSpannerStub::AsyncExecuteSql(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::v1::ExecuteSqlRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::spanner::v1::ExecuteSqlRequest,
                                    google::spanner::v1::ResultSet>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::v1::ExecuteSqlRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExecuteSql(context, request, cq);
      },
      request, std::move(context));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google
