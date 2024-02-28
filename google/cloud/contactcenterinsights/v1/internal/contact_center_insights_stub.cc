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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/v1/internal/contact_center_insights_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contactcenterinsights/v1/contact_center_insights.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contactcenterinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContactCenterInsightsStub::~ContactCenterInsightsStub() = default;

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
DefaultContactCenterInsightsStub::CreateConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Conversation response;
  auto status = grpc_stub_->CreateConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncUploadConversation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::UploadConversationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::UploadConversationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 UploadConversationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUploadConversation(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
DefaultContactCenterInsightsStub::UpdateConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Conversation response;
  auto status = grpc_stub_->UpdateConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
DefaultContactCenterInsightsStub::GetConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Conversation response;
  auto status = grpc_stub_->GetConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListConversationsResponse>
DefaultContactCenterInsightsStub::ListConversations(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::ListConversationsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListConversationsResponse response;
  auto status = grpc_stub_->ListConversations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncCreateAnalysis(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::CreateAnalysisRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAnalysis(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
DefaultContactCenterInsightsStub::GetAnalysis(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Analysis response;
  auto status = grpc_stub_->GetAnalysis(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysesResponse>
DefaultContactCenterInsightsStub::ListAnalyses(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListAnalysesResponse response;
  auto status = grpc_stub_->ListAnalyses(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteAnalysis(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteAnalysis(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncBulkAnalyzeConversations(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::
        BulkAnalyzeConversationsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::BulkAnalyzeConversationsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 BulkAnalyzeConversationsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBulkAnalyzeConversations(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncBulkDeleteConversations(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::
        BulkDeleteConversationsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::BulkDeleteConversationsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 BulkDeleteConversationsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBulkDeleteConversations(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncIngestConversations(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::IngestConversationsRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::IngestConversationsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 IngestConversationsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncIngestConversations(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncExportInsightsData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 ExportInsightsDataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportInsightsData(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncCreateIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::CreateIssueModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 CreateIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateIssueModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
DefaultContactCenterInsightsStub::UpdateIssueModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::IssueModel response;
  auto status = grpc_stub_->UpdateIssueModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
DefaultContactCenterInsightsStub::GetIssueModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::IssueModel response;
  auto status = grpc_stub_->GetIssueModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
DefaultContactCenterInsightsStub::ListIssueModels(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListIssueModelsResponse response;
  auto status = grpc_stub_->ListIssueModels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncDeleteIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 DeleteIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteIssueModel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncDeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::DeployIssueModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 DeployIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeployIssueModel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncUndeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 UndeployIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeployIssueModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
DefaultContactCenterInsightsStub::GetIssue(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetIssueRequest const& request) {
  google::cloud::contactcenterinsights::v1::Issue response;
  auto status = grpc_stub_->GetIssue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
DefaultContactCenterInsightsStub::ListIssues(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListIssuesResponse response;
  auto status = grpc_stub_->ListIssues(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
DefaultContactCenterInsightsStub::UpdateIssue(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Issue response;
  auto status = grpc_stub_->UpdateIssue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteIssue(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteIssue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
DefaultContactCenterInsightsStub::CalculateIssueModelStats(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const& request) {
  google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse
      response;
  auto status =
      grpc_stub_->CalculateIssueModelStats(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
DefaultContactCenterInsightsStub::CreatePhraseMatcher(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::CreatePhraseMatcherRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::PhraseMatcher response;
  auto status = grpc_stub_->CreatePhraseMatcher(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
DefaultContactCenterInsightsStub::GetPhraseMatcher(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::PhraseMatcher response;
  auto status = grpc_stub_->GetPhraseMatcher(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse>
DefaultContactCenterInsightsStub::ListPhraseMatchers(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse response;
  auto status = grpc_stub_->ListPhraseMatchers(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeletePhraseMatcher(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::DeletePhraseMatcherRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeletePhraseMatcher(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
DefaultContactCenterInsightsStub::UpdatePhraseMatcher(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::UpdatePhraseMatcherRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::PhraseMatcher response;
  auto status = grpc_stub_->UpdatePhraseMatcher(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
DefaultContactCenterInsightsStub::CalculateStats(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::CalculateStatsResponse response;
  auto status = grpc_stub_->CalculateStats(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
DefaultContactCenterInsightsStub::GetSettings(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Settings response;
  auto status = grpc_stub_->GetSettings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
DefaultContactCenterInsightsStub::UpdateSettings(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Settings response;
  auto status = grpc_stub_->UpdateSettings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
DefaultContactCenterInsightsStub::CreateView(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::CreateViewRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::View response;
  auto status = grpc_stub_->CreateView(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
DefaultContactCenterInsightsStub::GetView(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::GetViewRequest const& request) {
  google::cloud::contactcenterinsights::v1::View response;
  auto status = grpc_stub_->GetView(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListViewsResponse>
DefaultContactCenterInsightsStub::ListViews(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::ListViewsRequest const& request) {
  google::cloud::contactcenterinsights::v1::ListViewsResponse response;
  auto status = grpc_stub_->ListViews(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
DefaultContactCenterInsightsStub::UpdateView(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::View response;
  auto status = grpc_stub_->UpdateView(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteView(
    grpc::ClientContext& context, Options const&,
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteView(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncGetOperation(
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

future<Status> DefaultContactCenterInsightsStub::AsyncCancelOperation(
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
}  // namespace contactcenterinsights_v1_internal
}  // namespace cloud
}  // namespace google
