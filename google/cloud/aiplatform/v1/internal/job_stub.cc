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

#include "google/cloud/aiplatform/v1/internal/job_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/job_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceStub::~JobServiceStub() = default;

StatusOr<google::cloud::aiplatform::v1::CustomJob>
DefaultJobServiceStub::CreateCustomJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) {
  google::cloud::aiplatform::v1::CustomJob response;
  auto status =
      grpc_stub_->CreateCustomJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
DefaultJobServiceStub::GetCustomJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
  google::cloud::aiplatform::v1::CustomJob response;
  auto status = grpc_stub_->GetCustomJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
DefaultJobServiceStub::ListCustomJobs(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) {
  google::cloud::aiplatform::v1::ListCustomJobsResponse response;
  auto status = grpc_stub_->ListCustomJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncDeleteCustomJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteCustomJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCustomJob(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::CancelCustomJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->CancelCustomJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
DefaultJobServiceStub::CreateDataLabelingJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
        request) {
  google::cloud::aiplatform::v1::DataLabelingJob response;
  auto status =
      grpc_stub_->CreateDataLabelingJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
DefaultJobServiceStub::GetDataLabelingJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request) {
  google::cloud::aiplatform::v1::DataLabelingJob response;
  auto status =
      grpc_stub_->GetDataLabelingJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
DefaultJobServiceStub::ListDataLabelingJobs(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& request) {
  google::cloud::aiplatform::v1::ListDataLabelingJobsResponse response;
  auto status =
      grpc_stub_->ListDataLabelingJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncDeleteDataLabelingJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDataLabelingJob(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::CancelDataLabelingJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->CancelDataLabelingJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
DefaultJobServiceStub::CreateHyperparameterTuningJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
        request) {
  google::cloud::aiplatform::v1::HyperparameterTuningJob response;
  auto status = grpc_stub_->CreateHyperparameterTuningJob(&client_context,
                                                          request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
DefaultJobServiceStub::GetHyperparameterTuningJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
        request) {
  google::cloud::aiplatform::v1::HyperparameterTuningJob response;
  auto status = grpc_stub_->GetHyperparameterTuningJob(&client_context, request,
                                                       &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
DefaultJobServiceStub::ListHyperparameterTuningJobs(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
        request) {
  google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse response;
  auto status = grpc_stub_->ListHyperparameterTuningJobs(&client_context,
                                                         request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncDeleteHyperparameterTuningJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::
                 DeleteHyperparameterTuningJobRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteHyperparameterTuningJob(context, request,
                                                              cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::CancelHyperparameterTuningJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->CancelHyperparameterTuningJob(&client_context,
                                                          request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
DefaultJobServiceStub::CreateNasJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
  google::cloud::aiplatform::v1::NasJob response;
  auto status = grpc_stub_->CreateNasJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
DefaultJobServiceStub::GetNasJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
  google::cloud::aiplatform::v1::NasJob response;
  auto status = grpc_stub_->GetNasJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse>
DefaultJobServiceStub::ListNasJobs(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListNasJobsRequest const& request) {
  google::cloud::aiplatform::v1::ListNasJobsResponse response;
  auto status = grpc_stub_->ListNasJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncDeleteNasJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteNasJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteNasJobRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteNasJob(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::CancelNasJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->CancelNasJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
DefaultJobServiceStub::GetNasTrialDetail(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request) {
  google::cloud::aiplatform::v1::NasTrialDetail response;
  auto status =
      grpc_stub_->GetNasTrialDetail(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
DefaultJobServiceStub::ListNasTrialDetails(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& request) {
  google::cloud::aiplatform::v1::ListNasTrialDetailsResponse response;
  auto status =
      grpc_stub_->ListNasTrialDetails(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
DefaultJobServiceStub::CreateBatchPredictionJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
        request) {
  google::cloud::aiplatform::v1::BatchPredictionJob response;
  auto status =
      grpc_stub_->CreateBatchPredictionJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
DefaultJobServiceStub::GetBatchPredictionJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
        request) {
  google::cloud::aiplatform::v1::BatchPredictionJob response;
  auto status =
      grpc_stub_->GetBatchPredictionJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
DefaultJobServiceStub::ListBatchPredictionJobs(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
        request) {
  google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse response;
  auto status =
      grpc_stub_->ListBatchPredictionJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncDeleteBatchPredictionJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBatchPredictionJob(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::CancelBatchPredictionJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->CancelBatchPredictionJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
DefaultJobServiceStub::CreateModelDeploymentMonitoringJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const& request) {
  google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob response;
  auto status = grpc_stub_->CreateModelDeploymentMonitoringJob(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::
             SearchModelDeploymentMonitoringStatsAnomaliesResponse>
DefaultJobServiceStub::SearchModelDeploymentMonitoringStatsAnomalies(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::
        SearchModelDeploymentMonitoringStatsAnomaliesRequest const& request) {
  google::cloud::aiplatform::v1::
      SearchModelDeploymentMonitoringStatsAnomaliesResponse response;
  auto status = grpc_stub_->SearchModelDeploymentMonitoringStatsAnomalies(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
DefaultJobServiceStub::GetModelDeploymentMonitoringJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetModelDeploymentMonitoringJobRequest const&
        request) {
  google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob response;
  auto status = grpc_stub_->GetModelDeploymentMonitoringJob(&client_context,
                                                            request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
DefaultJobServiceStub::ListModelDeploymentMonitoringJobs(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::
        ListModelDeploymentMonitoringJobsRequest const& request) {
  google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse
      response;
  auto status = grpc_stub_->ListModelDeploymentMonitoringJobs(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncUpdateModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateModelDeploymentMonitoringJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::
                 UpdateModelDeploymentMonitoringJobRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateModelDeploymentMonitoringJob(context,
                                                                   request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncDeleteModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteModelDeploymentMonitoringJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::
                 DeleteModelDeploymentMonitoringJobRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteModelDeploymentMonitoringJob(context,
                                                                   request, cq);
      },
      request, std::move(context));
}

Status DefaultJobServiceStub::PauseModelDeploymentMonitoringJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->PauseModelDeploymentMonitoringJob(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultJobServiceStub::ResumeModelDeploymentMonitoringJob(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->ResumeModelDeploymentMonitoringJob(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultJobServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultJobServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
