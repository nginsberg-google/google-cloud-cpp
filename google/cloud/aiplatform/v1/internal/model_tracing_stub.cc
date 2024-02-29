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
// source: google/cloud/aiplatform/v1/model_service.proto

#include "google/cloud/aiplatform/v1/internal/model_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ModelServiceTracingStub::ModelServiceTracingStub(
    std::shared_ptr<ModelServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncUploadModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UploadModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "UploadModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUploadModel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::Model>
ModelServiceTracingStub::GetModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "GetModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetModel(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListModelsResponse>
ModelServiceTracingStub::ListModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "ListModels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListModels(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListModelVersionsResponse>
ModelServiceTracingStub::ListModelVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "ListModelVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListModelVersions(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Model>
ModelServiceTracingStub::UpdateModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "UpdateModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateModel(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncUpdateExplanationDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "UpdateExplanationDataset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateExplanationDataset(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "DeleteModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteModel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncDeleteModelVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "DeleteModelVersion");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteModelVersion(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::Model>
ModelServiceTracingStub::MergeVersionAliases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "MergeVersionAliases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->MergeVersionAliases(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncExportModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ExportModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "ExportModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncExportModel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncCopyModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CopyModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "CopyModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCopyModel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceTracingStub::ImportModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "ImportModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ImportModelEvaluation(context, options, request));
}

StatusOr<
    google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
ModelServiceTracingStub::BatchImportModelEvaluationSlices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        BatchImportModelEvaluationSlicesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "BatchImportModelEvaluationSlices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->BatchImportModelEvaluationSlices(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
ModelServiceTracingStub::BatchImportEvaluatedAnnotations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "BatchImportEvaluatedAnnotations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->BatchImportEvaluatedAnnotations(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceTracingStub::GetModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "GetModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetModelEvaluation(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationsResponse>
ModelServiceTracingStub::ListModelEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelEvaluationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "ListModelEvaluations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListModelEvaluations(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
ModelServiceTracingStub::GetModelEvaluationSlice(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "GetModelEvaluationSlice");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetModelEvaluationSlice(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationSlicesResponse>
ModelServiceTracingStub::ListModelEvaluationSlices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.ModelService",
                                     "ListModelEvaluationSlices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListModelEvaluationSlices(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ModelServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ModelServiceStub> MakeModelServiceTracingStub(
    std::shared_ptr<ModelServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ModelServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
