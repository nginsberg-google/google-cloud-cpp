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
// source: google/cloud/dataproc/v1/autoscaling_policies.proto

#include "google/cloud/dataproc/v1/autoscaling_policy_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalingPolicyServiceClient::AutoscalingPolicyServiceClient(
    std::shared_ptr<AutoscalingPolicyServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AutoscalingPolicyServiceClient::~AutoscalingPolicyServiceClient() = default;

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::CreateAutoscalingPolicy(
    std::string const& parent,
    google::cloud::dataproc::v1::AutoscalingPolicy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest request;
  request.set_parent(parent);
  *request.mutable_policy() = policy;
  return connection_->CreateAutoscalingPolicy(request);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::CreateAutoscalingPolicy(
    google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAutoscalingPolicy(request);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::UpdateAutoscalingPolicy(
    google::cloud::dataproc::v1::AutoscalingPolicy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest request;
  *request.mutable_policy() = policy;
  return connection_->UpdateAutoscalingPolicy(request);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::UpdateAutoscalingPolicy(
    google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutoscalingPolicy(request);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::GetAutoscalingPolicy(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::GetAutoscalingPolicyRequest request;
  request.set_name(name);
  return connection_->GetAutoscalingPolicy(request);
}

StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::GetAutoscalingPolicy(
    google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAutoscalingPolicy(request);
}

StreamRange<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::ListAutoscalingPolicies(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest request;
  request.set_parent(parent);
  return connection_->ListAutoscalingPolicies(request);
}

StreamRange<google::cloud::dataproc::v1::AutoscalingPolicy>
AutoscalingPolicyServiceClient::ListAutoscalingPolicies(
    google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAutoscalingPolicies(std::move(request));
}

Status AutoscalingPolicyServiceClient::DeleteAutoscalingPolicy(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest request;
  request.set_name(name);
  return connection_->DeleteAutoscalingPolicy(request);
}

Status AutoscalingPolicyServiceClient::DeleteAutoscalingPolicy(
    google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutoscalingPolicy(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google
