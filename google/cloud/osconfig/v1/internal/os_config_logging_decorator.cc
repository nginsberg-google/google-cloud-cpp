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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/v1/osconfig_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigServiceLogging::OsConfigServiceLogging(
    std::shared_ptr<OsConfigServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceLogging::ExecutePatchJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) {
        return child_->ExecutePatchJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceLogging::GetPatchJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetPatchJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::GetPatchJobRequest const& request) {
        return child_->GetPatchJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceLogging::CancelPatchJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::CancelPatchJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::osconfig::v1::CancelPatchJobRequest const& request) {
        return child_->CancelPatchJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse>
OsConfigServiceLogging::ListPatchJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListPatchJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::ListPatchJobsRequest const& request) {
        return child_->ListPatchJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
OsConfigServiceLogging::ListPatchJobInstanceDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
              request) {
        return child_->ListPatchJobInstanceDetails(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceLogging::CreatePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::CreatePatchDeploymentRequest const&
                 request) {
        return child_->CreatePatchDeployment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceLogging::GetPatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::GetPatchDeploymentRequest const&
                 request) {
        return child_->GetPatchDeployment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
OsConfigServiceLogging::ListPatchDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::ListPatchDeploymentsRequest const&
                 request) {
        return child_->ListPatchDeployments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status OsConfigServiceLogging::DeletePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::DeletePatchDeploymentRequest const&
                 request) {
        return child_->DeletePatchDeployment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceLogging::UpdatePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const&
                 request) {
        return child_->UpdatePatchDeployment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceLogging::PausePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::PausePatchDeploymentRequest const&
                 request) {
        return child_->PausePatchDeployment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceLogging::ResumePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::osconfig::v1::ResumePatchDeploymentRequest const&
                 request) {
        return child_->ResumePatchDeployment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
