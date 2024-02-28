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
// source: google/cloud/talent/v4/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_JOB_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_JOB_AUTH_DECORATOR_H

#include "google/cloud/talent/v4/internal/job_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobServiceAuth : public JobServiceStub {
 public:
  ~JobServiceAuth() override = default;
  JobServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<JobServiceStub> child);

  StatusOr<google::cloud::talent::v4::Job> CreateJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::CreateJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateJobs(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::talent::v4::BatchCreateJobsRequest const& request)
      override;

  StatusOr<google::cloud::talent::v4::Job> GetJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::GetJobRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::UpdateJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchUpdateJobs(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::talent::v4::BatchUpdateJobsRequest const& request)
      override;

  Status DeleteJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::DeleteJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchDeleteJobs(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::talent::v4::BatchDeleteJobsRequest const& request)
      override;

  StatusOr<google::cloud::talent::v4::ListJobsResponse> ListJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::ListJobsRequest const& request) override;

  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::SearchJobsRequest const& request) override;

  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobsForAlert(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::SearchJobsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<JobServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_JOB_AUTH_DECORATOR_H
