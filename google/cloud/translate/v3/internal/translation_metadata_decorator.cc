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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/v3/internal/translation_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/translate/v3/translation_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceMetadata::TranslationServiceMetadata(
    std::shared_ptr<TranslationServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceMetadata::TranslateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->TranslateText(context, options, request);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceMetadata::DetectLanguage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->DetectLanguage(context, options, request);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceMetadata::GetSupportedLanguages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GetSupportedLanguages(context, options, request);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceMetadata::TranslateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->TranslateDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchTranslateText(cq, std::move(context),
                                         std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchTranslateDocument(cq, std::move(context),
                                             std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateGlossary(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
TranslationServiceMetadata::ListGlossaries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListGlossaries(context, options, request);
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceMetadata::GetGlossary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGlossary(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteGlossary(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceMetadata::CreateAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAdaptiveMtDataset(context, options, request);
}

Status TranslationServiceMetadata::DeleteAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAdaptiveMtDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceMetadata::GetAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAdaptiveMtDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
TranslationServiceMetadata::ListAdaptiveMtDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAdaptiveMtDatasets(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceMetadata::AdaptiveMtTranslate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AdaptiveMtTranslate(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceMetadata::GetAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAdaptiveMtFile(context, options, request);
}

Status TranslationServiceMetadata::DeleteAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAdaptiveMtFile(context, options, request);
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceMetadata::ImportAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportAdaptiveMtFile(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
TranslationServiceMetadata::ListAdaptiveMtFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAdaptiveMtFiles(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
TranslationServiceMetadata::ListAdaptiveMtSentences(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAdaptiveMtSentences(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> TranslationServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void TranslationServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TranslationServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
