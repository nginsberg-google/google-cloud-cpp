// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#include "google/cloud/storagecontrol/v2/internal/storage_control_auth_decorator.h"
#include <google/storage/control/v2/storage_control.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageControlAuth::StorageControlAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<StorageControlStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::storage::control::v2::Folder> StorageControlAuth::CreateFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::CreateFolderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateFolder(context, options, request);
}

Status StorageControlAuth::DeleteFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::DeleteFolderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteFolder(context, options, request);
}

StatusOr<google::storage::control::v2::Folder> StorageControlAuth::GetFolder(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::GetFolderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetFolder(context, options, request);
}

StatusOr<google::storage::control::v2::ListFoldersResponse>
StorageControlAuth::ListFolders(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::ListFoldersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListFolders(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageControlAuth::AsyncRenameFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::control::v2::RenameFolderRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRenameFolder(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::storage::control::v2::StorageLayout>
StorageControlAuth::GetStorageLayout(
    grpc::ClientContext& context, Options const& options,
    google::storage::control::v2::GetStorageLayoutRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetStorageLayout(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageControlAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> StorageControlAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google
