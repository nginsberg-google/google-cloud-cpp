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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/admin/internal/subscription_admin_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubscriptionAdminMetadata::SubscriptionAdminMetadata(
    std::shared_ptr<SubscriptionAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminMetadata::CreateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::Subscription const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateSubscription(context, options, request);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminMetadata::GetSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subscription=",
                           internal::UrlEncode(request.subscription())));
  return child_->GetSubscription(context, options, request);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminMetadata::UpdateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subscription.name=",
                           internal::UrlEncode(request.subscription().name())));
  return child_->UpdateSubscription(context, options, request);
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
SubscriptionAdminMetadata::ListSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("project=", internal::UrlEncode(request.project())));
  return child_->ListSubscriptions(context, options, request);
}

Status SubscriptionAdminMetadata::DeleteSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subscription=",
                           internal::UrlEncode(request.subscription())));
  return child_->DeleteSubscription(context, options, request);
}

Status SubscriptionAdminMetadata::ModifyPushConfig(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subscription=",
                           internal::UrlEncode(request.subscription())));
  return child_->ModifyPushConfig(context, options, request);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriptionAdminMetadata::GetSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("snapshot=", internal::UrlEncode(request.snapshot())));
  return child_->GetSnapshot(context, options, request);
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
SubscriptionAdminMetadata::ListSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("project=", internal::UrlEncode(request.project())));
  return child_->ListSnapshots(context, options, request);
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminMetadata::CreateSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateSnapshot(context, options, request);
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminMetadata::UpdateSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("snapshot.name=",
                           internal::UrlEncode(request.snapshot().name())));
  return child_->UpdateSnapshot(context, options, request);
}

Status SubscriptionAdminMetadata::DeleteSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("snapshot=", internal::UrlEncode(request.snapshot())));
  return child_->DeleteSnapshot(context, options, request);
}

StatusOr<google::pubsub::v1::SeekResponse> SubscriptionAdminMetadata::Seek(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::SeekRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("subscription=",
                           internal::UrlEncode(request.subscription())));
  return child_->Seek(context, options, request);
}

void SubscriptionAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void SubscriptionAdminMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
