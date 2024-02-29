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
// source: google/monitoring/v3/notification_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_NOTIFICATION_CHANNEL_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_NOTIFICATION_CHANNEL_LOGGING_DECORATOR_H

#include "google/cloud/monitoring/v3/internal/notification_channel_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotificationChannelServiceLogging
    : public NotificationChannelServiceStub {
 public:
  ~NotificationChannelServiceLogging() override = default;
  NotificationChannelServiceLogging(
      std::shared_ptr<NotificationChannelServiceStub> child,
      TracingOptions tracing_options, std::set<std::string> const& components);

  StatusOr<google::monitoring::v3::ListNotificationChannelDescriptorsResponse>
  ListNotificationChannelDescriptors(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::ListNotificationChannelDescriptorsRequest const&
          request) override;

  StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
  GetNotificationChannelDescriptor(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
          request) override;

  StatusOr<google::monitoring::v3::ListNotificationChannelsResponse>
  ListNotificationChannels(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::ListNotificationChannelsRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel> GetNotificationChannel(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::GetNotificationChannelRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  CreateNotificationChannel(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::CreateNotificationChannelRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  UpdateNotificationChannel(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::UpdateNotificationChannelRequest const& request)
      override;

  Status DeleteNotificationChannel(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::DeleteNotificationChannelRequest const& request)
      override;

  Status SendNotificationChannelVerificationCode(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::
          SendNotificationChannelVerificationCodeRequest const& request)
      override;

  StatusOr<
      google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
  GetNotificationChannelVerificationCode(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::
          GetNotificationChannelVerificationCodeRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  VerifyNotificationChannel(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::VerifyNotificationChannelRequest const& request)
      override;

 private:
  std::shared_ptr<NotificationChannelServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // NotificationChannelServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_NOTIFICATION_CHANNEL_LOGGING_DECORATOR_H
