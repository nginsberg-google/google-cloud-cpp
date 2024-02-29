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
// source: google/cloud/aiplatform/v1/job_service.proto

#include "google/cloud/aiplatform/v1/internal/job_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/job_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceLogging::JobServiceLogging(std::shared_ptr<JobServiceStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceLogging::CreateCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateCustomJobRequest const&
                 request) {
        return child_->CreateCustomJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceLogging::GetCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
        return child_->GetCustomJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
JobServiceLogging::ListCustomJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) {
        return child_->ListCustomJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncDeleteCustomJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteCustomJobRequest const&
                 request) {
        return child_->AsyncDeleteCustomJob(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status JobServiceLogging::CancelCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CancelCustomJobRequest const&
                 request) {
        return child_->CancelCustomJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceLogging::CreateDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
                 request) {
        return child_->CreateDataLabelingJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceLogging::GetDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetDataLabelingJobRequest const&
                 request) {
        return child_->GetDataLabelingJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
JobServiceLogging::ListDataLabelingJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const&
                 request) {
        return child_->ListDataLabelingJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncDeleteDataLabelingJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
                 request) {
        return child_->AsyncDeleteDataLabelingJob(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status JobServiceLogging::CancelDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
                 request) {
        return child_->CancelDataLabelingJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceLogging::CreateHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateHyperparameterTuningJobRequest const& request) {
        return child_->CreateHyperparameterTuningJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceLogging::GetHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 GetHyperparameterTuningJobRequest const& request) {
        return child_->GetHyperparameterTuningJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
JobServiceLogging::ListHyperparameterTuningJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ListHyperparameterTuningJobsRequest const& request) {
        return child_->ListHyperparameterTuningJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncDeleteHyperparameterTuningJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 DeleteHyperparameterTuningJobRequest const& request) {
        return child_->AsyncDeleteHyperparameterTuningJob(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status JobServiceLogging::CancelHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CancelHyperparameterTuningJobRequest const& request) {
        return child_->CancelHyperparameterTuningJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::NasJob> JobServiceLogging::CreateNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
        return child_->CreateNasJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::NasJob> JobServiceLogging::GetNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
        return child_->GetNasJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse>
JobServiceLogging::ListNasJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNasJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListNasJobsRequest const& request) {
        return child_->ListNasJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncDeleteNasJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
        return child_->AsyncDeleteNasJob(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status JobServiceLogging::CancelNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
        return child_->CancelNasJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
JobServiceLogging::GetNasTrialDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetNasTrialDetailRequest const&
                 request) {
        return child_->GetNasTrialDetail(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
JobServiceLogging::ListNasTrialDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const&
                 request) {
        return child_->ListNasTrialDetails(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceLogging::CreateBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
              request) {
        return child_->CreateBatchPredictionJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceLogging::GetBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
                 request) {
        return child_->GetBatchPredictionJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
JobServiceLogging::ListBatchPredictionJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
              request) {
        return child_->ListBatchPredictionJobs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncDeleteBatchPredictionJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
              request) {
        return child_->AsyncDeleteBatchPredictionJob(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status JobServiceLogging::CancelBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
              request) {
        return child_->CancelBatchPredictionJob(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceLogging::CreateModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateModelDeploymentMonitoringJobRequest const& request) {
        return child_->CreateModelDeploymentMonitoringJob(context, options,
                                                          request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::
             SearchModelDeploymentMonitoringStatsAnomaliesResponse>
JobServiceLogging::SearchModelDeploymentMonitoringStatsAnomalies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        SearchModelDeploymentMonitoringStatsAnomaliesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 SearchModelDeploymentMonitoringStatsAnomaliesRequest const&
                     request) {
        return child_->SearchModelDeploymentMonitoringStatsAnomalies(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceLogging::GetModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelDeploymentMonitoringJobRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 GetModelDeploymentMonitoringJobRequest const& request) {
        return child_->GetModelDeploymentMonitoringJob(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
JobServiceLogging::ListModelDeploymentMonitoringJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        ListModelDeploymentMonitoringJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ListModelDeploymentMonitoringJobsRequest const& request) {
        return child_->ListModelDeploymentMonitoringJobs(context, options,
                                                         request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncUpdateModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 UpdateModelDeploymentMonitoringJobRequest const& request) {
        return child_->AsyncUpdateModelDeploymentMonitoringJob(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncDeleteModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::
                 DeleteModelDeploymentMonitoringJobRequest const& request) {
        return child_->AsyncDeleteModelDeploymentMonitoringJob(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

Status JobServiceLogging::PauseModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 PauseModelDeploymentMonitoringJobRequest const& request) {
        return child_->PauseModelDeploymentMonitoringJob(context, options,
                                                         request);
      },
      context, options, request, __func__, tracing_options_);
}

Status JobServiceLogging::ResumeModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ResumeModelDeploymentMonitoringJobRequest const& request) {
        return child_->ResumeModelDeploymentMonitoringJob(context, options,
                                                          request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceLogging::AsyncGetOperation(
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

future<Status> JobServiceLogging::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
