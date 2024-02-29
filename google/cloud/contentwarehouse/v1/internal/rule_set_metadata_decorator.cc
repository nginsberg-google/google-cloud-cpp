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

#include "google/cloud/contentwarehouse/v1/internal/rule_set_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contentwarehouse/v1/ruleset_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RuleSetServiceMetadata::RuleSetServiceMetadata(
    std::shared_ptr<RuleSetServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceMetadata::CreateRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateRuleSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateRuleSet(context, options, request);
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceMetadata::GetRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::GetRuleSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRuleSet(context, options, request);
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceMetadata::UpdateRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateRuleSet(context, options, request);
}

Status RuleSetServiceMetadata::DeleteRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteRuleSet(context, options, request);
}

StatusOr<google::cloud::contentwarehouse::v1::ListRuleSetsResponse>
RuleSetServiceMetadata::ListRuleSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListRuleSetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRuleSets(context, options, request);
}

void RuleSetServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void RuleSetServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
