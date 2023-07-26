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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/vizier_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VizierServiceClient::VizierServiceClient(
    std::shared_ptr<VizierServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
VizierServiceClient::~VizierServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceClient::CreateStudy(
    std::string const& parent,
    google::cloud::aiplatform::v1::Study const& study, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateStudyRequest request;
  request.set_parent(parent);
  *request.mutable_study() = study;
  return connection_->CreateStudy(request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceClient::CreateStudy(
    google::cloud::aiplatform::v1::CreateStudyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateStudy(request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceClient::GetStudy(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetStudyRequest request;
  request.set_name(name);
  return connection_->GetStudy(request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceClient::GetStudy(
    google::cloud::aiplatform::v1::GetStudyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetStudy(request);
}

StreamRange<google::cloud::aiplatform::v1::Study>
VizierServiceClient::ListStudies(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListStudiesRequest request;
  request.set_parent(parent);
  return connection_->ListStudies(request);
}

StreamRange<google::cloud::aiplatform::v1::Study>
VizierServiceClient::ListStudies(
    google::cloud::aiplatform::v1::ListStudiesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListStudies(std::move(request));
}

Status VizierServiceClient::DeleteStudy(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteStudyRequest request;
  request.set_name(name);
  return connection_->DeleteStudy(request);
}

Status VizierServiceClient::DeleteStudy(
    google::cloud::aiplatform::v1::DeleteStudyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteStudy(request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceClient::LookupStudy(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::LookupStudyRequest request;
  request.set_parent(parent);
  return connection_->LookupStudy(request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceClient::LookupStudy(
    google::cloud::aiplatform::v1::LookupStudyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LookupStudy(request);
}

future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
VizierServiceClient::SuggestTrials(
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SuggestTrials(request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceClient::CreateTrial(
    std::string const& parent,
    google::cloud::aiplatform::v1::Trial const& trial, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateTrialRequest request;
  request.set_parent(parent);
  *request.mutable_trial() = trial;
  return connection_->CreateTrial(request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceClient::CreateTrial(
    google::cloud::aiplatform::v1::CreateTrialRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTrial(request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceClient::GetTrial(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetTrialRequest request;
  request.set_name(name);
  return connection_->GetTrial(request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceClient::GetTrial(
    google::cloud::aiplatform::v1::GetTrialRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTrial(request);
}

StreamRange<google::cloud::aiplatform::v1::Trial>
VizierServiceClient::ListTrials(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListTrialsRequest request;
  request.set_parent(parent);
  return connection_->ListTrials(request);
}

StreamRange<google::cloud::aiplatform::v1::Trial>
VizierServiceClient::ListTrials(
    google::cloud::aiplatform::v1::ListTrialsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTrials(std::move(request));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceClient::AddTrialMeasurement(
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddTrialMeasurement(request);
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceClient::CompleteTrial(
    google::cloud::aiplatform::v1::CompleteTrialRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CompleteTrial(request);
}

Status VizierServiceClient::DeleteTrial(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteTrialRequest request;
  request.set_name(name);
  return connection_->DeleteTrial(request);
}

Status VizierServiceClient::DeleteTrial(
    google::cloud::aiplatform::v1::DeleteTrialRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTrial(request);
}

future<StatusOr<
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
VizierServiceClient::CheckTrialEarlyStoppingState(
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CheckTrialEarlyStoppingState(request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceClient::StopTrial(
    google::cloud::aiplatform::v1::StopTrialRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopTrial(request);
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
VizierServiceClient::ListOptimalTrials(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListOptimalTrialsRequest request;
  request.set_parent(parent);
  return connection_->ListOptimalTrials(request);
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
VizierServiceClient::ListOptimalTrials(
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOptimalTrials(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
