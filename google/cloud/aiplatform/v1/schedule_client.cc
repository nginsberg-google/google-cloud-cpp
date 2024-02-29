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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#include "google/cloud/aiplatform/v1/schedule_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ScheduleServiceClient::ScheduleServiceClient(
    std::shared_ptr<ScheduleServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ScheduleServiceClient::~ScheduleServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::CreateSchedule(
    std::string const& parent,
    google::cloud::aiplatform::v1::Schedule const& schedule, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateScheduleRequest request;
  request.set_parent(parent);
  *request.mutable_schedule() = schedule;
  return connection_->CreateSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::CreateSchedule(
    google::cloud::aiplatform::v1::CreateScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSchedule(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ScheduleServiceClient::DeleteSchedule(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteScheduleRequest request;
  request.set_name(name);
  return connection_->DeleteSchedule(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ScheduleServiceClient::DeleteSchedule(
    google::cloud::aiplatform::v1::DeleteScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::GetSchedule(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetScheduleRequest request;
  request.set_name(name);
  return connection_->GetSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::GetSchedule(
    google::cloud::aiplatform::v1::GetScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSchedule(request);
}

StreamRange<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::ListSchedules(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListSchedulesRequest request;
  request.set_parent(parent);
  return connection_->ListSchedules(request);
}

StreamRange<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::ListSchedules(
    google::cloud::aiplatform::v1::ListSchedulesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSchedules(std::move(request));
}

Status ScheduleServiceClient::PauseSchedule(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::PauseScheduleRequest request;
  request.set_name(name);
  return connection_->PauseSchedule(request);
}

Status ScheduleServiceClient::PauseSchedule(
    google::cloud::aiplatform::v1::PauseScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PauseSchedule(request);
}

Status ScheduleServiceClient::ResumeSchedule(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ResumeScheduleRequest request;
  request.set_name(name);
  return connection_->ResumeSchedule(request);
}

Status ScheduleServiceClient::ResumeSchedule(std::string const& name,
                                             bool catch_up, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ResumeScheduleRequest request;
  request.set_name(name);
  request.set_catch_up(catch_up);
  return connection_->ResumeSchedule(request);
}

Status ScheduleServiceClient::ResumeSchedule(
    google::cloud::aiplatform::v1::ResumeScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResumeSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::UpdateSchedule(
    google::cloud::aiplatform::v1::Schedule const& schedule,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateScheduleRequest request;
  *request.mutable_schedule() = schedule;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::UpdateSchedule(
    google::cloud::aiplatform::v1::UpdateScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSchedule(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
