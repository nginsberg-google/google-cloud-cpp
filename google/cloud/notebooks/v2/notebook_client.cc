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
// source: google/cloud/notebooks/v2/service.proto

#include "google/cloud/notebooks/v2/notebook_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceClient::NotebookServiceClient(
    std::shared_ptr<NotebookServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
NotebookServiceClient::~NotebookServiceClient() = default;

StreamRange<google::cloud::notebooks::v2::Instance>
NotebookServiceClient::ListInstances(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v2::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::notebooks::v2::Instance>
NotebookServiceClient::ListInstances(
    google::cloud::notebooks::v2::ListInstancesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::notebooks::v2::Instance>
NotebookServiceClient::GetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v2::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::notebooks::v2::Instance>
NotebookServiceClient::GetInstance(
    google::cloud::notebooks::v2::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::CreateInstance(
    std::string const& parent,
    google::cloud::notebooks::v2::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v2::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::CreateInstance(
    google::cloud::notebooks::v2::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::UpdateInstance(
    google::cloud::notebooks::v2::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v2::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::UpdateInstance(
    google::cloud::notebooks::v2::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>
NotebookServiceClient::DeleteInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v2::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>
NotebookServiceClient::DeleteInstance(
    google::cloud::notebooks::v2::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::StartInstance(
    google::cloud::notebooks::v2::StartInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::StopInstance(
    google::cloud::notebooks::v2::StopInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::ResetInstance(
    google::cloud::notebooks::v2::ResetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResetInstance(request);
}

StatusOr<google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>
NotebookServiceClient::CheckInstanceUpgradability(
    google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CheckInstanceUpgradability(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::UpgradeInstance(
    google::cloud::notebooks::v2::UpgradeInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpgradeInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::RollbackInstance(
    google::cloud::notebooks::v2::RollbackInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RollbackInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::DiagnoseInstance(
    std::string const& name,
    google::cloud::notebooks::v2::DiagnosticConfig const& diagnostic_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v2::DiagnoseInstanceRequest request;
  request.set_name(name);
  *request.mutable_diagnostic_config() = diagnostic_config;
  return connection_->DiagnoseInstance(request);
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceClient::DiagnoseInstance(
    google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiagnoseInstance(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2
}  // namespace cloud
}  // namespace google
