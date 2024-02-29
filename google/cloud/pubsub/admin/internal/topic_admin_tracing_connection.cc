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

#include "google/cloud/pubsub/admin/internal/topic_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TopicAdminTracingConnection::TopicAdminTracingConnection(
    std::shared_ptr<pubsub_admin::TopicAdminConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::pubsub::v1::Topic> TopicAdminTracingConnection::CreateTopic(
    google::pubsub::v1::Topic const& request) {
  auto span =
      internal::MakeSpan("pubsub_admin::TopicAdminConnection::CreateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTopic(request));
}

StatusOr<google::pubsub::v1::Topic> TopicAdminTracingConnection::UpdateTopic(
    google::pubsub::v1::UpdateTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsub_admin::TopicAdminConnection::UpdateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTopic(request));
}

StatusOr<google::pubsub::v1::Topic> TopicAdminTracingConnection::GetTopic(
    google::pubsub::v1::GetTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsub_admin::TopicAdminConnection::GetTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTopic(request));
}

StreamRange<google::pubsub::v1::Topic> TopicAdminTracingConnection::ListTopics(
    google::pubsub::v1::ListTopicsRequest request) {
  auto span =
      internal::MakeSpan("pubsub_admin::TopicAdminConnection::ListTopics");
  internal::OTelScope scope(span);
  auto sr = child_->ListTopics(std::move(request));
  return internal::MakeTracedStreamRange<google::pubsub::v1::Topic>(
      std::move(span), std::move(sr));
}

StreamRange<std::string> TopicAdminTracingConnection::ListTopicSubscriptions(
    google::pubsub::v1::ListTopicSubscriptionsRequest request) {
  auto span = internal::MakeSpan(
      "pubsub_admin::TopicAdminConnection::ListTopicSubscriptions");
  internal::OTelScope scope(span);
  auto sr = child_->ListTopicSubscriptions(std::move(request));
  return internal::MakeTracedStreamRange<std::string>(std::move(span),
                                                      std::move(sr));
}

StreamRange<std::string> TopicAdminTracingConnection::ListTopicSnapshots(
    google::pubsub::v1::ListTopicSnapshotsRequest request) {
  auto span = internal::MakeSpan(
      "pubsub_admin::TopicAdminConnection::ListTopicSnapshots");
  internal::OTelScope scope(span);
  auto sr = child_->ListTopicSnapshots(std::move(request));
  return internal::MakeTracedStreamRange<std::string>(std::move(span),
                                                      std::move(sr));
}

Status TopicAdminTracingConnection::DeleteTopic(
    google::pubsub::v1::DeleteTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsub_admin::TopicAdminConnection::DeleteTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTopic(request));
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
TopicAdminTracingConnection::DetachSubscription(
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsub_admin::TopicAdminConnection::DetachSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DetachSubscription(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<pubsub_admin::TopicAdminConnection>
MakeTopicAdminTracingConnection(
    std::shared_ptr<pubsub_admin::TopicAdminConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TopicAdminTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
