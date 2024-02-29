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
// source: google/monitoring/v3/group_service.proto

#include "google/cloud/monitoring/v3/internal/group_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/v3/group_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GroupServiceMetadata::GroupServiceMetadata(
    std::shared_ptr<GroupServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::monitoring::v3::ListGroupsResponse>
GroupServiceMetadata::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListGroupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListGroups(context, options, request);
}

StatusOr<google::monitoring::v3::Group> GroupServiceMetadata::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::GetGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGroup(context, options, request);
}

StatusOr<google::monitoring::v3::Group> GroupServiceMetadata::CreateGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateGroup(context, options, request);
}

StatusOr<google::monitoring::v3::Group> GroupServiceMetadata::UpdateGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::UpdateGroupRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("group.name=", internal::UrlEncode(request.group().name())));
  return child_->UpdateGroup(context, options, request);
}

Status GroupServiceMetadata::DeleteGroup(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::DeleteGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteGroup(context, options, request);
}

StatusOr<google::monitoring::v3::ListGroupMembersResponse>
GroupServiceMetadata::ListGroupMembers(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListGroupMembersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListGroupMembers(context, options, request);
}

void GroupServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void GroupServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
