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
// source: google/monitoring/v3/snooze_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_SNOOZE_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_SNOOZE_AUTH_DECORATOR_H

#include "google/cloud/monitoring/v3/internal/snooze_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SnoozeServiceAuth : public SnoozeServiceStub {
 public:
  ~SnoozeServiceAuth() override = default;
  SnoozeServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<SnoozeServiceStub> child);

  StatusOr<google::monitoring::v3::Snooze> CreateSnooze(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateSnoozeRequest const& request) override;

  StatusOr<google::monitoring::v3::ListSnoozesResponse> ListSnoozes(
      grpc::ClientContext& context,
      google::monitoring::v3::ListSnoozesRequest const& request) override;

  StatusOr<google::monitoring::v3::Snooze> GetSnooze(
      grpc::ClientContext& context,
      google::monitoring::v3::GetSnoozeRequest const& request) override;

  StatusOr<google::monitoring::v3::Snooze> UpdateSnooze(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateSnoozeRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<SnoozeServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_SNOOZE_AUTH_DECORATOR_H
