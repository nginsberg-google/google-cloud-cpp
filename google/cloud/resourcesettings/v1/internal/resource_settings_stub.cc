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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/v1/internal/resource_settings_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcesettings/v1/resource_settings.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourceSettingsServiceStub::~ResourceSettingsServiceStub() = default;

StatusOr<google::cloud::resourcesettings::v1::ListSettingsResponse>
DefaultResourceSettingsServiceStub::ListSettings(
    grpc::ClientContext& context, Options const&,
    google::cloud::resourcesettings::v1::ListSettingsRequest const& request) {
  google::cloud::resourcesettings::v1::ListSettingsResponse response;
  auto status = grpc_stub_->ListSettings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
DefaultResourceSettingsServiceStub::GetSetting(
    grpc::ClientContext& context, Options const&,
    google::cloud::resourcesettings::v1::GetSettingRequest const& request) {
  google::cloud::resourcesettings::v1::Setting response;
  auto status = grpc_stub_->GetSetting(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
DefaultResourceSettingsServiceStub::UpdateSetting(
    grpc::ClientContext& context, Options const&,
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request) {
  google::cloud::resourcesettings::v1::Setting response;
  auto status = grpc_stub_->UpdateSetting(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google
