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
// source: google/cloud/automl/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_TRACING_STUB_H

#include "google/cloud/automl/v1/internal/auto_ml_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AutoMlTracingStub : public AutoMlStub {
 public:
  ~AutoMlTracingStub() override = default;

  explicit AutoMlTracingStub(std::shared_ptr<AutoMlStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::CreateDatasetRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::GetDatasetRequest const& request) override;

  StatusOr<google::cloud::automl::v1::ListDatasetsResponse> ListDatasets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::ListDatasetsRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::UpdateDatasetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::DeleteDatasetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::ImportDataRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::ExportDataRequest const& request) override;

  StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::CreateModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Model> GetModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::GetModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::ListModelsResponse> ListModels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::ListModelsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::DeleteModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::UpdateModelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::DeployModelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeployModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::UndeployModelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::automl::v1::ExportModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::ModelEvaluation> GetModelEvaluation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::GetModelEvaluationRequest const& request)
      override;

  StatusOr<google::cloud::automl::v1::ListModelEvaluationsResponse>
  ListModelEvaluations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::automl::v1::ListModelEvaluationsRequest const& request)
      override;

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
  std::shared_ptr<AutoMlStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<AutoMlStub> MakeAutoMlTracingStub(
    std::shared_ptr<AutoMlStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_TRACING_STUB_H
