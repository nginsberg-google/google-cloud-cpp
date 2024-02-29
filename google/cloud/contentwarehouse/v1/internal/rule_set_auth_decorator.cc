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
// source: google/cloud/contentwarehouse/v1/ruleset_service.proto

#include "google/cloud/contentwarehouse/v1/internal/rule_set_auth_decorator.h"
#include <google/cloud/contentwarehouse/v1/ruleset_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RuleSetServiceAuth::RuleSetServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<RuleSetServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceAuth::CreateRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateRuleSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRuleSet(context, options, request);
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceAuth::GetRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::GetRuleSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRuleSet(context, options, request);
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceAuth::UpdateRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateRuleSet(context, options, request);
}

Status RuleSetServiceAuth::DeleteRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteRuleSet(context, options, request);
}

StatusOr<google::cloud::contentwarehouse::v1::ListRuleSetsResponse>
RuleSetServiceAuth::ListRuleSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListRuleSetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRuleSets(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
