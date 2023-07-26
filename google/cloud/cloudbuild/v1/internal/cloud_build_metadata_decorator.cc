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

#include "google/cloud/cloudbuild/v1/internal/cloud_build_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudbuild/v1/cloudbuild.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBuildMetadata::CloudBuildMetadata(
    std::shared_ptr<CloudBuildStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncCreateBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::CreateBuildRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::CreateBuildRequest const&
                    request) -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncCreateBuild(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::Build> CloudBuildMetadata::GetBuild(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::GetBuildRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::GetBuildRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/builds/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->GetBuild(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>
CloudBuildMetadata::ListBuilds(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ListBuildsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::ListBuildsRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::ListBuildsRequest const&
                    request) -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->ListBuilds(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildMetadata::CancelBuild(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::CancelBuildRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::CancelBuildRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/builds/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->CancelBuild(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncRetryBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::RetryBuildRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::RetryBuildRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/builds/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncRetryBuild(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncApproveBuild(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::ApproveBuildRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::ApproveBuildRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/builds/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncApproveBuild(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildMetadata::CreateBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
        request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::CreateBuildTriggerRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::
                    CreateBuildTriggerRequest const& request)
                 -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->CreateBuildTrigger(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildMetadata::GetBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::GetBuildTriggerRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::GetBuildTriggerRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/triggers/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->GetBuildTrigger(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
CloudBuildMetadata::ListBuildTriggers(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::ListBuildTriggersRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::
                    ListBuildTriggersRequest const& request)
                 -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->ListBuildTriggers(context, request);
}

Status CloudBuildMetadata::DeleteBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
        request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::
                    DeleteBuildTriggerRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/triggers/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->DeleteBuildTrigger(context, request);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildMetadata::UpdateBuildTrigger(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
        request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::
                    UpdateBuildTriggerRequest const& request)
                 -> std::string const& {
               return request.trigger().resource_name();
             },
             std::regex{"projects/[^/]+/locations/([^/]+)/triggers/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->UpdateBuildTrigger(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncRunBuildTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::RunBuildTriggerRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::RunBuildTriggerRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/triggers/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncRunBuildTrigger(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildMetadata::ReceiveTriggerWebhook(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request) {
  SetMetadata(context, absl::StrCat("project_id=", request.project_id(), "&",
                                    "trigger=", request.trigger()));
  return child_->ReceiveTriggerWebhook(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncCreateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::CreateWorkerPoolRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&
                    request) -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncCreateWorkerPool(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildMetadata::GetWorkerPool(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::GetWorkerPoolRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::GetWorkerPoolRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/workerPools/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->GetWorkerPool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncDeleteWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/workerPools/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncDeleteWorkerPool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncUpdateWorkerPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&
                    request) -> std::string const& {
               return request.worker_pool().name();
             },
             std::regex{"projects/[^/]+/locations/([^/]+)/workerPools/[^/]+",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context);
  } else {
    SetMetadata(*context, absl::StrJoin(params, "&"));
  }
  return child_->AsyncUpdateWorkerPool(cq, std::move(context), request);
}

StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
CloudBuildMetadata::ListWorkerPools(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::devtools::cloudbuild::v1::ListWorkerPoolsRequest>{
        "location=",
        {
            {[](google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const&
                    request) -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context);
  } else {
    SetMetadata(context, absl::StrJoin(params, "&"));
  }
  return child_->ListWorkerPools(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudBuildMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudBuildMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudBuildMetadata::SetMetadata(grpc::ClientContext& context,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudBuildMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google
