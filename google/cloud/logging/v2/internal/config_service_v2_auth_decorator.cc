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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/internal/config_service_v2_auth_decorator.h"
#include <google/logging/v2/logging_config.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigServiceV2Auth::ConfigServiceV2Auth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConfigServiceV2Stub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::logging::v2::ListBucketsResponse>
ConfigServiceV2Auth::ListBuckets(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListBucketsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBuckets(context, options, request);
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Auth::GetBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBucket(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Auth::AsyncCreateBucketAsync(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::CreateBucketRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateBucketAsync(cq, *std::move(context),
                                             std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Auth::AsyncUpdateBucketAsync(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::UpdateBucketRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateBucketAsync(cq, *std::move(context),
                                             std::move(options), request);
      });
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Auth::CreateBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBucket(context, options, request);
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Auth::UpdateBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBucket(context, options, request);
}

Status ConfigServiceV2Auth::DeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBucket(context, options, request);
}

Status ConfigServiceV2Auth::UndeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UndeleteBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UndeleteBucket(context, options, request);
}

StatusOr<google::logging::v2::ListViewsResponse> ConfigServiceV2Auth::ListViews(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListViewsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListViews(context, options, request);
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Auth::GetView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetViewRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetView(context, options, request);
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Auth::CreateView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateViewRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateView(context, options, request);
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Auth::UpdateView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateViewRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateView(context, options, request);
}

Status ConfigServiceV2Auth::DeleteView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteViewRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteView(context, options, request);
}

StatusOr<google::logging::v2::ListSinksResponse> ConfigServiceV2Auth::ListSinks(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListSinksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSinks(context, options, request);
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Auth::GetSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetSinkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSink(context, options, request);
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Auth::CreateSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateSinkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSink(context, options, request);
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Auth::UpdateSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateSinkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSink(context, options, request);
}

Status ConfigServiceV2Auth::DeleteSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteSinkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSink(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Auth::AsyncCreateLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::CreateLinkRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateLink(cq, *std::move(context),
                                      std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Auth::AsyncDeleteLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::DeleteLinkRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteLink(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::logging::v2::ListLinksResponse> ConfigServiceV2Auth::ListLinks(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListLinksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLinks(context, options, request);
}

StatusOr<google::logging::v2::Link> ConfigServiceV2Auth::GetLink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetLinkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLink(context, options, request);
}

StatusOr<google::logging::v2::ListExclusionsResponse>
ConfigServiceV2Auth::ListExclusions(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListExclusionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListExclusions(context, options, request);
}

StatusOr<google::logging::v2::LogExclusion> ConfigServiceV2Auth::GetExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetExclusionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetExclusion(context, options, request);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Auth::CreateExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateExclusionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateExclusion(context, options, request);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Auth::UpdateExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateExclusionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateExclusion(context, options, request);
}

Status ConfigServiceV2Auth::DeleteExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteExclusionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteExclusion(context, options, request);
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2Auth::GetCmekSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetCmekSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCmekSettings(context, options, request);
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2Auth::UpdateCmekSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateCmekSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCmekSettings(context, options, request);
}

StatusOr<google::logging::v2::Settings> ConfigServiceV2Auth::GetSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSettings(context, options, request);
}

StatusOr<google::logging::v2::Settings> ConfigServiceV2Auth::UpdateSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSettings(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Auth::AsyncCopyLogEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::CopyLogEntriesRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCopyLogEntries(cq, *std::move(context),
                                          std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Auth::AsyncGetOperation(
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

future<Status> ConfigServiceV2Auth::AsyncCancelOperation(
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
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
