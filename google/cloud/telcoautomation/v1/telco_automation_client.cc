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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#include "google/cloud/telcoautomation/v1/telco_automation_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace telcoautomation_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TelcoAutomationClient::TelcoAutomationClient(
    std::shared_ptr<TelcoAutomationConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TelcoAutomationClient::~TelcoAutomationClient() = default;

StreamRange<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationClient::ListOrchestrationClusters(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest request;
  request.set_parent(parent);
  return connection_->ListOrchestrationClusters(request);
}

StreamRange<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationClient::ListOrchestrationClusters(
    google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOrchestrationClusters(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationClient::GetOrchestrationCluster(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest request;
  request.set_name(name);
  return connection_->GetOrchestrationCluster(request);
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationClient::GetOrchestrationCluster(
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOrchestrationCluster(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
TelcoAutomationClient::CreateOrchestrationCluster(
    std::string const& parent,
    google::cloud::telcoautomation::v1::OrchestrationCluster const&
        orchestration_cluster,
    std::string const& orchestration_cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest request;
  request.set_parent(parent);
  *request.mutable_orchestration_cluster() = orchestration_cluster;
  request.set_orchestration_cluster_id(orchestration_cluster_id);
  return connection_->CreateOrchestrationCluster(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
TelcoAutomationClient::CreateOrchestrationCluster(
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateOrchestrationCluster(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationClient::DeleteOrchestrationCluster(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest request;
  request.set_name(name);
  return connection_->DeleteOrchestrationCluster(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationClient::DeleteOrchestrationCluster(
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOrchestrationCluster(request);
}

StreamRange<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationClient::ListEdgeSlms(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListEdgeSlmsRequest request;
  request.set_parent(parent);
  return connection_->ListEdgeSlms(request);
}

StreamRange<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationClient::ListEdgeSlms(
    google::cloud::telcoautomation::v1::ListEdgeSlmsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEdgeSlms(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationClient::GetEdgeSlm(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::GetEdgeSlmRequest request;
  request.set_name(name);
  return connection_->GetEdgeSlm(request);
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationClient::GetEdgeSlm(
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEdgeSlm(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>
TelcoAutomationClient::CreateEdgeSlm(
    std::string const& parent,
    google::cloud::telcoautomation::v1::EdgeSlm const& edge_slm,
    std::string const& edge_slm_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::CreateEdgeSlmRequest request;
  request.set_parent(parent);
  *request.mutable_edge_slm() = edge_slm;
  request.set_edge_slm_id(edge_slm_id);
  return connection_->CreateEdgeSlm(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>
TelcoAutomationClient::CreateEdgeSlm(
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEdgeSlm(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationClient::DeleteEdgeSlm(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest request;
  request.set_name(name);
  return connection_->DeleteEdgeSlm(request);
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationClient::DeleteEdgeSlm(
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEdgeSlm(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::CreateBlueprint(
    std::string const& parent,
    google::cloud::telcoautomation::v1::Blueprint const& blueprint,
    std::string const& blueprint_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::CreateBlueprintRequest request;
  request.set_parent(parent);
  *request.mutable_blueprint() = blueprint;
  request.set_blueprint_id(blueprint_id);
  return connection_->CreateBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::CreateBlueprint(
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::UpdateBlueprint(
    google::cloud::telcoautomation::v1::Blueprint const& blueprint,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::UpdateBlueprintRequest request;
  *request.mutable_blueprint() = blueprint;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::UpdateBlueprint(
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::GetBlueprint(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::GetBlueprintRequest request;
  request.set_name(name);
  return connection_->GetBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::GetBlueprint(
    google::cloud::telcoautomation::v1::GetBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBlueprint(request);
}

Status TelcoAutomationClient::DeleteBlueprint(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::DeleteBlueprintRequest request;
  request.set_name(name);
  return connection_->DeleteBlueprint(request);
}

Status TelcoAutomationClient::DeleteBlueprint(
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBlueprint(request);
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ListBlueprints(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListBlueprintsRequest request;
  request.set_parent(parent);
  return connection_->ListBlueprints(request);
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ListBlueprints(
    google::cloud::telcoautomation::v1::ListBlueprintsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBlueprints(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ApproveBlueprint(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ApproveBlueprintRequest request;
  request.set_name(name);
  return connection_->ApproveBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ApproveBlueprint(
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApproveBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ProposeBlueprint(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ProposeBlueprintRequest request;
  request.set_name(name);
  return connection_->ProposeBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ProposeBlueprint(
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ProposeBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::RejectBlueprint(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::RejectBlueprintRequest request;
  request.set_name(name);
  return connection_->RejectBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::RejectBlueprint(
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RejectBlueprint(request);
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ListBlueprintRevisions(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest request;
  request.set_name(name);
  return connection_->ListBlueprintRevisions(request);
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::ListBlueprintRevisions(
    google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBlueprintRevisions(std::move(request));
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::SearchBlueprintRevisions(std::string const& parent,
                                                std::string const& query,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest request;
  request.set_parent(parent);
  request.set_query(query);
  return connection_->SearchBlueprintRevisions(request);
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationClient::SearchBlueprintRevisions(
    google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchBlueprintRevisions(std::move(request));
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::SearchDeploymentRevisions(std::string const& parent,
                                                 std::string const& query,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest request;
  request.set_parent(parent);
  request.set_query(query);
  return connection_->SearchDeploymentRevisions(request);
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::SearchDeploymentRevisions(
    google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchDeploymentRevisions(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationClient::DiscardBlueprintChanges(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest request;
  request.set_name(name);
  return connection_->DiscardBlueprintChanges(request);
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationClient::DiscardBlueprintChanges(
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiscardBlueprintChanges(request);
}

StreamRange<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationClient::ListPublicBlueprints(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest request;
  request.set_parent(parent);
  return connection_->ListPublicBlueprints(request);
}

StreamRange<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationClient::ListPublicBlueprints(
    google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPublicBlueprints(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationClient::GetPublicBlueprint(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::GetPublicBlueprintRequest request;
  request.set_name(name);
  return connection_->GetPublicBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationClient::GetPublicBlueprint(
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPublicBlueprint(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::CreateDeployment(
    std::string const& parent,
    google::cloud::telcoautomation::v1::Deployment const& deployment,
    std::string const& deployment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::CreateDeploymentRequest request;
  request.set_parent(parent);
  *request.mutable_deployment() = deployment;
  request.set_deployment_id(deployment_id);
  return connection_->CreateDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::CreateDeployment(
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::UpdateDeployment(
    google::cloud::telcoautomation::v1::Deployment const& deployment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::UpdateDeploymentRequest request;
  *request.mutable_deployment() = deployment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::UpdateDeployment(
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::GetDeployment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::GetDeploymentRequest request;
  request.set_name(name);
  return connection_->GetDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::GetDeployment(
    google::cloud::telcoautomation::v1::GetDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDeployment(request);
}

Status TelcoAutomationClient::RemoveDeployment(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::RemoveDeploymentRequest request;
  request.set_name(name);
  return connection_->RemoveDeployment(request);
}

Status TelcoAutomationClient::RemoveDeployment(
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveDeployment(request);
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::ListDeployments(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListDeploymentsRequest request;
  request.set_parent(parent);
  return connection_->ListDeployments(request);
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::ListDeployments(
    google::cloud::telcoautomation::v1::ListDeploymentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDeployments(std::move(request));
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::ListDeploymentRevisions(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest request;
  request.set_name(name);
  return connection_->ListDeploymentRevisions(request);
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::ListDeploymentRevisions(
    google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDeploymentRevisions(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationClient::DiscardDeploymentChanges(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest request;
  request.set_name(name);
  return connection_->DiscardDeploymentChanges(request);
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationClient::DiscardDeploymentChanges(
    google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiscardDeploymentChanges(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::ApplyDeployment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ApplyDeploymentRequest request;
  request.set_name(name);
  return connection_->ApplyDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::ApplyDeployment(
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationClient::ComputeDeploymentStatus(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest request;
  request.set_name(name);
  return connection_->ComputeDeploymentStatus(request);
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationClient::ComputeDeploymentStatus(
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ComputeDeploymentStatus(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::RollbackDeployment(std::string const& name,
                                          std::string const& revision_id,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::RollbackDeploymentRequest request;
  request.set_name(name);
  request.set_revision_id(revision_id);
  return connection_->RollbackDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationClient::RollbackDeployment(
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RollbackDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::GetHydratedDeployment(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest request;
  request.set_name(name);
  return connection_->GetHydratedDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::GetHydratedDeployment(
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetHydratedDeployment(request);
}

StreamRange<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::ListHydratedDeployments(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest request;
  request.set_parent(parent);
  return connection_->ListHydratedDeployments(request);
}

StreamRange<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::ListHydratedDeployments(
    google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListHydratedDeployments(std::move(request));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::UpdateHydratedDeployment(
    google::cloud::telcoautomation::v1::HydratedDeployment const&
        hydrated_deployment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest request;
  *request.mutable_hydrated_deployment() = hydrated_deployment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateHydratedDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::UpdateHydratedDeployment(
    google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateHydratedDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::ApplyHydratedDeployment(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest request;
  request.set_name(name);
  return connection_->ApplyHydratedDeployment(request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationClient::ApplyHydratedDeployment(
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyHydratedDeployment(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1
}  // namespace cloud
}  // namespace google
