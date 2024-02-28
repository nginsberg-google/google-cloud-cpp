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
// source: google/datastore/admin/v1/datastore_admin.proto

#include "google/cloud/datastore/admin/v1/internal/datastore_admin_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/datastore/admin/v1/datastore_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastoreAdminMetadata::DatastoreAdminMetadata(
    std::shared_ptr<DatastoreAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
DatastoreAdminMetadata::AsyncExportEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::datastore::admin::v1::ExportEntitiesRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id())));
  return child_->AsyncExportEntities(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::longrunning::Operation>>
DatastoreAdminMetadata::AsyncImportEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::datastore::admin::v1::ImportEntitiesRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id())));
  return child_->AsyncImportEntities(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::longrunning::Operation>>
DatastoreAdminMetadata::AsyncCreateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::datastore::admin::v1::CreateIndexRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id())));
  return child_->AsyncCreateIndex(cq, std::move(context), std::move(options),
                                  request);
}

future<StatusOr<google::longrunning::Operation>>
DatastoreAdminMetadata::AsyncDeleteIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::datastore::admin::v1::DeleteIndexRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "index_id=", internal::UrlEncode(request.index_id())));
  return child_->AsyncDeleteIndex(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::datastore::admin::v1::Index> DatastoreAdminMetadata::GetIndex(
    grpc::ClientContext& context, Options const& options,
    google::datastore::admin::v1::GetIndexRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "index_id=", internal::UrlEncode(request.index_id())));
  return child_->GetIndex(context, options, request);
}

StatusOr<google::datastore::admin::v1::ListIndexesResponse>
DatastoreAdminMetadata::ListIndexes(
    grpc::ClientContext& context, Options const& options,
    google::datastore::admin::v1::ListIndexesRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id())));
  return child_->ListIndexes(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastoreAdminMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> DatastoreAdminMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void DatastoreAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DatastoreAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_admin_v1_internal
}  // namespace cloud
}  // namespace google
