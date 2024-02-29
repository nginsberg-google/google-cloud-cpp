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

#include "google/cloud/dataproc/v1/workflow_template_connection.h"
#include "google/cloud/dataproc/v1/internal/workflow_template_connection_impl.h"
#include "google/cloud/dataproc/v1/internal/workflow_template_option_defaults.h"
#include "google/cloud/dataproc/v1/internal/workflow_template_stub_factory.h"
#include "google/cloud/dataproc/v1/internal/workflow_template_tracing_connection.h"
#include "google/cloud/dataproc/v1/workflow_template_options.h"
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
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowTemplateServiceConnection::~WorkflowTemplateServiceConnection() =
    default;

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnection::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnection::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceConnection::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceConnection::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::
        InstantiateInlineWorkflowTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnection::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnection::ListWorkflowTemplates(
    google::cloud::dataproc::v1::
        ListWorkflowTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>>();
}

Status WorkflowTemplateServiceConnection::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<WorkflowTemplateServiceConnection>
MakeWorkflowTemplateServiceConnection(std::string const& location,
                                      Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 WorkflowTemplateServicePolicyOptionList>(
      options, __func__);
  options = dataproc_v1_internal::WorkflowTemplateServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dataproc_v1_internal::CreateDefaultWorkflowTemplateServiceStub(
      std::move(auth), options);
  return dataproc_v1_internal::MakeWorkflowTemplateServiceTracingConnection(
      std::make_shared<
          dataproc_v1_internal::WorkflowTemplateServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<WorkflowTemplateServiceConnection>
MakeWorkflowTemplateServiceConnection(Options options) {
  return MakeWorkflowTemplateServiceConnection(std::string{},
                                               std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google
