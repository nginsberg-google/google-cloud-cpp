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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/v1/document_processor_connection.h"
#include "google/cloud/documentai/v1/document_processor_options.h"
#include "google/cloud/documentai/v1/internal/document_processor_connection_impl.h"
#include "google/cloud/documentai/v1/internal/document_processor_option_defaults.h"
#include "google/cloud/documentai/v1/internal/document_processor_stub_factory.h"
#include "google/cloud/documentai/v1/internal/document_processor_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace documentai_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceConnection::~DocumentProcessorServiceConnection() =
    default;

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceConnection::ProcessDocument(
    google::cloud::documentai::v1::ProcessRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
DocumentProcessorServiceConnection::BatchProcessDocuments(
    google::cloud::documentai::v1::BatchProcessRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceConnection::FetchProcessorTypes(
    google::cloud::documentai::v1::FetchProcessorTypesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceConnection::ListProcessorTypes(
    google::cloud::documentai::v1::
        ListProcessorTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::documentai::v1::ProcessorType>>();
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceConnection::GetProcessorType(
    google::cloud::documentai::v1::GetProcessorTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceConnection::ListProcessors(
    google::cloud::documentai::v1::
        ListProcessorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::documentai::v1::Processor>>();
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceConnection::GetProcessor(
    google::cloud::documentai::v1::GetProcessorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>
DocumentProcessorServiceConnection::TrainProcessorVersion(
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceConnection::GetProcessorVersion(
    google::cloud::documentai::v1::GetProcessorVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceConnection::ListProcessorVersions(
    google::cloud::documentai::v1::
        ListProcessorVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::documentai::v1::ProcessorVersion>>();
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
DocumentProcessorServiceConnection::DeleteProcessorVersion(
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
DocumentProcessorServiceConnection::DeployProcessorVersion(
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<
    StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
DocumentProcessorServiceConnection::UndeployProcessorVersion(
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::documentai::v1::UndeployProcessorVersionResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceConnection::CreateProcessor(
    google::cloud::documentai::v1::CreateProcessorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
DocumentProcessorServiceConnection::DeleteProcessor(
    google::cloud::documentai::v1::DeleteProcessorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
DocumentProcessorServiceConnection::EnableProcessor(
    google::cloud::documentai::v1::EnableProcessorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
DocumentProcessorServiceConnection::DisableProcessor(
    google::cloud::documentai::v1::DisableProcessorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<
    StatusOr<google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
DocumentProcessorServiceConnection::SetDefaultProcessorVersion(
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
DocumentProcessorServiceConnection::ReviewDocument(
    google::cloud::documentai::v1::ReviewDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<
    StatusOr<google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>
DocumentProcessorServiceConnection::EvaluateProcessorVersion(
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceConnection::GetEvaluation(
    google::cloud::documentai::v1::GetEvaluationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceConnection::ListEvaluations(
    google::cloud::documentai::v1::
        ListEvaluationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::documentai::v1::Evaluation>>();
}

std::shared_ptr<DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceConnection(std::string const& location,
                                       Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DocumentProcessorServicePolicyOptionList>(
      options, __func__);
  options = documentai_v1_internal::DocumentProcessorServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = documentai_v1_internal::CreateDefaultDocumentProcessorServiceStub(
      std::move(auth), options);
  return documentai_v1_internal::MakeDocumentProcessorServiceTracingConnection(
      std::make_shared<
          documentai_v1_internal::DocumentProcessorServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceConnection(Options options) {
  return MakeDocumentProcessorServiceConnection(std::string{},
                                                std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1
}  // namespace cloud
}  // namespace google
