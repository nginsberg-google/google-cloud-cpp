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

#include "google/cloud/aiplatform/v1/model_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ModelServiceConnectionIdempotencyPolicy::
    ~ModelServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ModelServiceConnectionIdempotencyPolicy>
ModelServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ModelServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency ModelServiceConnectionIdempotencyPolicy::UploadModel(
    google::cloud::aiplatform::v1::UploadModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::GetModel(
    google::cloud::aiplatform::v1::GetModelRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::ListModels(
    google::cloud::aiplatform::v1::ListModelsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::ListModelVersions(
    google::cloud::aiplatform::v1::ListModelVersionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::UpdateModel(
    google::cloud::aiplatform::v1::UpdateModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::UpdateExplanationDataset(
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::DeleteModel(
    google::cloud::aiplatform::v1::DeleteModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::DeleteModelVersion(
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::MergeVersionAliases(
    google::cloud::aiplatform::v1::MergeVersionAliasesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::ExportModel(
    google::cloud::aiplatform::v1::ExportModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::CopyModel(
    google::cloud::aiplatform::v1::CopyModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::ImportModelEvaluation(
    google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ModelServiceConnectionIdempotencyPolicy::BatchImportModelEvaluationSlices(
    google::cloud::aiplatform::v1::
        BatchImportModelEvaluationSlicesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ModelServiceConnectionIdempotencyPolicy::BatchImportEvaluatedAnnotations(
    google::cloud::aiplatform::v1::
        BatchImportEvaluatedAnnotationsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::GetModelEvaluation(
    google::cloud::aiplatform::v1::GetModelEvaluationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::ListModelEvaluations(
    google::cloud::aiplatform::v1::ListModelEvaluationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::GetModelEvaluationSlice(
    google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ModelServiceConnectionIdempotencyPolicy::ListModelEvaluationSlices(
    google::cloud::aiplatform::v1::
        ListModelEvaluationSlicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<ModelServiceConnectionIdempotencyPolicy>
MakeDefaultModelServiceConnectionIdempotencyPolicy() {
  return std::make_unique<ModelServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
