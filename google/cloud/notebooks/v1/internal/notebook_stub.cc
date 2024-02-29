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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/notebooks/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceStub::~NotebookServiceStub() = default;

StatusOr<google::cloud::notebooks::v1::ListInstancesResponse>
DefaultNotebookServiceStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::ListInstancesRequest const& request) {
  google::cloud::notebooks::v1::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v1::Instance>
DefaultNotebookServiceStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  google::cloud::notebooks::v1::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::CreateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::CreateInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncRegisterInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::RegisterInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::RegisterInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRegisterInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncSetInstanceAccelerator(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSetInstanceAccelerator(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncSetInstanceMachineType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSetInstanceMachineType(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstanceConfig(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncUpdateShieldedInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::
                 UpdateShieldedInstanceConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateShieldedInstanceConfig(context, request,
                                                             cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncSetInstanceLabels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::SetInstanceLabelsRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSetInstanceLabels(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
DefaultNotebookServiceStub::UpdateInstanceMetadataItems(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse response;
  auto status =
      grpc_stub_->UpdateInstanceMetadataItems(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DeleteInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::DeleteInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::StartInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::StartInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::StopInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::StopInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::ResetInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::ResetInstanceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResetInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncReportInstanceInfo(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::ReportInstanceInfoRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::ReportInstanceInfoRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReportInstanceInfo(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
DefaultNotebookServiceStub::IsInstanceUpgradeable(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  google::cloud::notebooks::v1::IsInstanceUpgradeableResponse response;
  auto status = grpc_stub_->IsInstanceUpgradeable(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
DefaultNotebookServiceStub::GetInstanceHealth(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  google::cloud::notebooks::v1::GetInstanceHealthResponse response;
  auto status = grpc_stub_->GetInstanceHealth(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::UpgradeInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::UpgradeInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpgradeInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncRollbackInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::RollbackInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::RollbackInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRollbackInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDiagnoseInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DiagnoseInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDiagnoseInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncUpgradeInstanceInternal(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpgradeInstanceInternal(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
DefaultNotebookServiceStub::ListEnvironments(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::ListEnvironmentsRequest const& request) {
  google::cloud::notebooks::v1::ListEnvironmentsResponse response;
  auto status = grpc_stub_->ListEnvironments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v1::Environment>
DefaultNotebookServiceStub::GetEnvironment(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  google::cloud::notebooks::v1::Environment response;
  auto status = grpc_stub_->GetEnvironment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::CreateEnvironmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::CreateEnvironmentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEnvironment(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DeleteEnvironmentRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteEnvironment(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse>
DefaultNotebookServiceStub::ListSchedules(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::ListSchedulesRequest const& request) {
  google::cloud::notebooks::v1::ListSchedulesResponse response;
  auto status = grpc_stub_->ListSchedules(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v1::Schedule>
DefaultNotebookServiceStub::GetSchedule(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  google::cloud::notebooks::v1::Schedule response;
  auto status = grpc_stub_->GetSchedule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDeleteSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DeleteScheduleRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::DeleteScheduleRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSchedule(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncCreateSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::CreateScheduleRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::notebooks::v1::CreateScheduleRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSchedule(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncTriggerSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::TriggerScheduleRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::TriggerScheduleRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTriggerSchedule(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse>
DefaultNotebookServiceStub::ListExecutions(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::ListExecutionsRequest const& request) {
  google::cloud::notebooks::v1::ListExecutionsResponse response;
  auto status = grpc_stub_->ListExecutions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::notebooks::v1::Execution>
DefaultNotebookServiceStub::GetExecution(
    grpc::ClientContext& context, Options const&,
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  google::cloud::notebooks::v1::Execution response;
  auto status = grpc_stub_->GetExecution(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::DeleteExecutionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::DeleteExecutionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteExecution(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncCreateExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::notebooks::v1::CreateExecutionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::notebooks::v1::CreateExecutionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateExecution(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNotebookServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
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

future<Status> DefaultNotebookServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
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
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
