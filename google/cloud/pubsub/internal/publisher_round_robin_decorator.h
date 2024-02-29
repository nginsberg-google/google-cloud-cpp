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
// source: google/pubsub/v1/pubsub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_PUBLISHER_ROUND_ROBIN_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_PUBLISHER_ROUND_ROBIN_DECORATOR_H

#include "google/cloud/pubsub/internal/publisher_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <mutex>
#include <vector>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublisherRoundRobin : public PublisherStub {
 public:
  explicit PublisherRoundRobin(
      std::vector<std::shared_ptr<PublisherStub>> children);
  ~PublisherRoundRobin() override = default;

  StatusOr<google::pubsub::v1::Topic> CreateTopic(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::Topic const& request) override;

  StatusOr<google::pubsub::v1::Topic> UpdateTopic(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::UpdateTopicRequest const& request) override;

  StatusOr<google::pubsub::v1::PublishResponse> Publish(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::PublishRequest const& request) override;

  StatusOr<google::pubsub::v1::Topic> GetTopic(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::GetTopicRequest const& request) override;

  StatusOr<google::pubsub::v1::ListTopicsResponse> ListTopics(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::ListTopicsRequest const& request) override;

  StatusOr<google::pubsub::v1::ListTopicSubscriptionsResponse>
  ListTopicSubscriptions(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::ListTopicSubscriptionsRequest const& request)
      override;

  StatusOr<google::pubsub::v1::ListTopicSnapshotsResponse> ListTopicSnapshots(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::ListTopicSnapshotsRequest const& request) override;

  Status DeleteTopic(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::DeleteTopicRequest const& request) override;

  StatusOr<google::pubsub::v1::DetachSubscriptionResponse> DetachSubscription(
      grpc::ClientContext& context, Options const& options,
      google::pubsub::v1::DetachSubscriptionRequest const& request) override;

  future<StatusOr<google::pubsub::v1::PublishResponse>> AsyncPublish(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::pubsub::v1::PublishRequest const& request) override;

 private:
  std::shared_ptr<PublisherStub> Child();

  std::vector<std::shared_ptr<PublisherStub>> const children_;
  std::mutex mu_;
  std::size_t current_ = 0;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_PUBLISHER_ROUND_ROBIN_DECORATOR_H
