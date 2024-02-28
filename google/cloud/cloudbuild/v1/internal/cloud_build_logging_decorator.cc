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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/cloud/cloudbuild/v1/internal/cloud_build_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudbuild/v1/cloudbuild.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBuildLogging::CloudBuildLogging(std::shared_ptr<CloudBuildStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncCreateBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
        return child_->AsyncCreateBuild(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildLogging::GetBuild(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
        return child_->GetBuild(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>
CloudBuildLogging::ListBuilds(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListBuildsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::devtools::cloudbuild::v1::ListBuildsRequest const& request) {
        return child_->ListBuilds(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildLogging::CancelBuild(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
        return child_->CancelBuild(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncRetryBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
        return child_->AsyncRetryBuild(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncApproveBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::devtools::cloudbuild::v1::ApproveBuildRequest const&
                 request) {
        return child_->AsyncApproveBuild(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildLogging::CreateBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
                 request) {
        return child_->CreateBuildTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildLogging::GetBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::GetBuildTriggerRequest const&
                 request) {
        return child_->GetBuildTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
CloudBuildLogging::ListBuildTriggers(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::ListBuildTriggersRequest const&
                 request) {
        return child_->ListBuildTriggers(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status CloudBuildLogging::DeleteBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
                 request) {
        return child_->DeleteBuildTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildLogging::UpdateBuildTrigger(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
                 request) {
        return child_->UpdateBuildTrigger(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncRunBuildTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::devtools::cloudbuild::v1::RunBuildTriggerRequest const&
                 request) {
        return child_->AsyncRunBuildTrigger(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildLogging::ReceiveTriggerWebhook(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
              request) {
        return child_->ReceiveTriggerWebhook(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncCreateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&
                 request) {
        return child_->AsyncCreateWorkerPool(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildLogging::GetWorkerPool(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::GetWorkerPoolRequest const&
                 request) {
        return child_->GetWorkerPool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncDeleteWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&
                 request) {
        return child_->AsyncDeleteWorkerPool(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncUpdateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&
                 request) {
        return child_->AsyncUpdateWorkerPool(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
CloudBuildLogging::ListWorkerPools(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const&
                 request) {
        return child_->ListWorkerPools(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> CloudBuildLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google
