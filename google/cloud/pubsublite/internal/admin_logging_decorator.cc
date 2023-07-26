// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdminServiceLogging::AdminServiceLogging(
    std::shared_ptr<AdminServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::pubsublite::v1::Topic> AdminServiceLogging::CreateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
        return child_->CreateTopic(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Topic> AdminServiceLogging::GetTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::GetTopicRequest const& request) {
        return child_->GetTopic(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
AdminServiceLogging::GetTopicPartitions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::GetTopicPartitionsRequest const&
                 request) {
        return child_->GetTopicPartitions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::ListTopicsResponse>
AdminServiceLogging::ListTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
        return child_->ListTopics(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Topic> AdminServiceLogging::UpdateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
        return child_->UpdateTopic(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status AdminServiceLogging::DeleteTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
        return child_->DeleteTopic(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse>
AdminServiceLogging::ListTopicSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
                 request) {
        return child_->ListTopicSubscriptions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceLogging::CreateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::CreateSubscriptionRequest const&
                 request) {
        return child_->CreateSubscription(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceLogging::GetSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::GetSubscriptionRequest const&
                 request) { return child_->GetSubscription(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::ListSubscriptionsResponse>
AdminServiceLogging::ListSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListSubscriptionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ListSubscriptionsRequest const&
                 request) {
        return child_->ListSubscriptions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceLogging::UpdateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::UpdateSubscriptionRequest const&
                 request) {
        return child_->UpdateSubscription(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status AdminServiceLogging::DeleteSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::DeleteSubscriptionRequest const&
                 request) {
        return child_->DeleteSubscription(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceLogging::AsyncSeekSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::pubsublite::v1::SeekSubscriptionRequest const&
                 request) {
        return child_->AsyncSeekSubscription(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceLogging::CreateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::CreateReservationRequest const&
                 request) {
        return child_->CreateReservation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceLogging::GetReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::pubsublite::v1::GetReservationRequest const& request) {
        return child_->GetReservation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::ListReservationsResponse>
AdminServiceLogging::ListReservations(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ListReservationsRequest const&
                 request) {
        return child_->ListReservations(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceLogging::UpdateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::UpdateReservationRequest const&
                 request) {
        return child_->UpdateReservation(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status AdminServiceLogging::DeleteReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::DeleteReservationRequest const&
                 request) {
        return child_->DeleteReservation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::ListReservationTopicsResponse>
AdminServiceLogging::ListReservationTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
                 request) {
        return child_->ListReservationTopics(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
AdminServiceLogging::AsyncGetTopicPartitions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::pubsublite::v1::GetTopicPartitionsRequest const&
                 request) {
        return child_->AsyncGetTopicPartitions(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> AdminServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
