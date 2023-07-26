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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/v1/internal/cloud_scheduler_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/scheduler/v1/cloudscheduler.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace scheduler_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudSchedulerMetadata::CloudSchedulerMetadata(
    std::shared_ptr<CloudSchedulerStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::scheduler::v1::ListJobsResponse>
CloudSchedulerMetadata::ListJobs(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::ListJobsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListJobs(context, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerMetadata::GetJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::GetJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetJob(context, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerMetadata::CreateJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::CreateJobRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->CreateJob(context, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerMetadata::UpdateJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::UpdateJobRequest const& request) {
  SetMetadata(context, absl::StrCat("job.name=", request.job().name()));
  return child_->UpdateJob(context, request);
}

Status CloudSchedulerMetadata::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::DeleteJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->DeleteJob(context, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerMetadata::PauseJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::PauseJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->PauseJob(context, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerMetadata::ResumeJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::ResumeJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->ResumeJob(context, request);
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerMetadata::RunJob(
    grpc::ClientContext& context,
    google::cloud::scheduler::v1::RunJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->RunJob(context, request);
}

void CloudSchedulerMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudSchedulerMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace scheduler_v1_internal
}  // namespace cloud
}  // namespace google
