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

#include "google/cloud/documentai/v1/internal/document_processor_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/documentai/v1/document_processor_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceMetadata::DocumentProcessorServiceMetadata(
    std::shared_ptr<DocumentProcessorServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceMetadata::ProcessDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ProcessDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncBatchProcessDocuments(cq, std::move(context),
                                            std::move(options), request);
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceMetadata::FetchProcessorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->FetchProcessorTypes(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
DocumentProcessorServiceMetadata::ListProcessorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProcessorTypes(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceMetadata::GetProcessorType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProcessorType(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
DocumentProcessorServiceMetadata::ListProcessors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProcessors(context, options, request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceMetadata::GetProcessor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncTrainProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncTrainProcessorVersion(cq, std::move(context),
                                            std::move(options), request);
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceMetadata::GetProcessorVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProcessorVersion(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
DocumentProcessorServiceMetadata::ListProcessorVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorVersionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProcessorVersions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDeleteProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteProcessorVersion(cq, std::move(context),
                                             std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeployProcessorVersion(cq, std::move(context),
                                             std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncUndeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeployProcessorVersion(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceMetadata::CreateProcessor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateProcessor(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDeleteProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteProcessor(cq, std::move(context),
                                      std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncEnableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEnableProcessor(cq, std::move(context),
                                      std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDisableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDisableProcessor(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncSetDefaultProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("processor=", internal::UrlEncode(request.processor())));
  return child_->AsyncSetDefaultProcessorVersion(cq, std::move(context),
                                                 std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("human_review_config=",
                           internal::UrlEncode(request.human_review_config())));
  return child_->AsyncReviewDocument(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncEvaluateProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("processor_version=",
                           internal::UrlEncode(request.processor_version())));
  return child_->AsyncEvaluateProcessorVersion(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceMetadata::GetEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetEvaluationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEvaluation(context, options, request);
}

StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
DocumentProcessorServiceMetadata::ListEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListEvaluationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEvaluations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> DocumentProcessorServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void DocumentProcessorServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DocumentProcessorServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                                   Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google
