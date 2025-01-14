// Copyright 2024 Google LLC
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
// source: google/cloud/servicehealth/v1/event_service.proto

#include "google/cloud/servicehealth/v1/internal/service_health_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/servicehealth/v1/event_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicehealth_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceHealthStub::~ServiceHealthStub() = default;

StatusOr<google::cloud::servicehealth::v1::ListEventsResponse>
DefaultServiceHealthStub::ListEvents(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::ListEventsRequest const& request) {
  google::cloud::servicehealth::v1::ListEventsResponse response;
  auto status = grpc_stub_->ListEvents(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::servicehealth::v1::Event>
DefaultServiceHealthStub::GetEvent(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::GetEventRequest const& request) {
  google::cloud::servicehealth::v1::Event response;
  auto status = grpc_stub_->GetEvent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationEventsResponse>
DefaultServiceHealthStub::ListOrganizationEvents(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
        request) {
  google::cloud::servicehealth::v1::ListOrganizationEventsResponse response;
  auto status =
      grpc_stub_->ListOrganizationEvents(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::servicehealth::v1::OrganizationEvent>
DefaultServiceHealthStub::GetOrganizationEvent(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
        request) {
  google::cloud::servicehealth::v1::OrganizationEvent response;
  auto status = grpc_stub_->GetOrganizationEvent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationImpactsResponse>
DefaultServiceHealthStub::ListOrganizationImpacts(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::ListOrganizationImpactsRequest const&
        request) {
  google::cloud::servicehealth::v1::ListOrganizationImpactsResponse response;
  auto status =
      grpc_stub_->ListOrganizationImpacts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::servicehealth::v1::OrganizationImpact>
DefaultServiceHealthStub::GetOrganizationImpact(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
        request) {
  google::cloud::servicehealth::v1::OrganizationImpact response;
  auto status = grpc_stub_->GetOrganizationImpact(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1_internal
}  // namespace cloud
}  // namespace google
