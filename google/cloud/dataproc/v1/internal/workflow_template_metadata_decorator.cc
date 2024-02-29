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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/v1/internal/workflow_template_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/workflow_templates.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowTemplateServiceMetadata::WorkflowTemplateServiceMetadata(
    std::shared_ptr<WorkflowTemplateServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceMetadata::CreateWorkflowTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateWorkflowTemplate(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceMetadata::GetWorkflowTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWorkflowTemplate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowTemplateServiceMetadata::AsyncInstantiateWorkflowTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncInstantiateWorkflowTemplate(cq, std::move(context),
                                                  std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowTemplateServiceMetadata::AsyncInstantiateInlineWorkflowTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncInstantiateInlineWorkflowTemplate(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceMetadata::UpdateWorkflowTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("template.name=",
                           internal::UrlEncode(request.template_().name())));
  return child_->UpdateWorkflowTemplate(context, options, request);
}

StatusOr<google::cloud::dataproc::v1::ListWorkflowTemplatesResponse>
WorkflowTemplateServiceMetadata::ListWorkflowTemplates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListWorkflowTemplates(context, options, request);
}

Status WorkflowTemplateServiceMetadata::DeleteWorkflowTemplate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteWorkflowTemplate(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowTemplateServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> WorkflowTemplateServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void WorkflowTemplateServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void WorkflowTemplateServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
