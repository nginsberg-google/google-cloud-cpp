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
// source: google/cloud/retail/v2/control_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CONTROL_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CONTROL_TRACING_STUB_H

#include "google/cloud/retail/v2/internal/control_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ControlServiceTracingStub : public ControlServiceStub {
 public:
  ~ControlServiceTracingStub() override = default;

  explicit ControlServiceTracingStub(std::shared_ptr<ControlServiceStub> child);

  StatusOr<google::cloud::retail::v2::Control> CreateControl(
      grpc::ClientContext& context,
      google::cloud::retail::v2::CreateControlRequest const& request) override;

  Status DeleteControl(
      grpc::ClientContext& context,
      google::cloud::retail::v2::DeleteControlRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Control> UpdateControl(
      grpc::ClientContext& context,
      google::cloud::retail::v2::UpdateControlRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Control> GetControl(
      grpc::ClientContext& context,
      google::cloud::retail::v2::GetControlRequest const& request) override;

  StatusOr<google::cloud::retail::v2::ListControlsResponse> ListControls(
      grpc::ClientContext& context,
      google::cloud::retail::v2::ListControlsRequest const& request) override;

 private:
  std::shared_ptr<ControlServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ControlServiceStub> MakeControlServiceTracingStub(
    std::shared_ptr<ControlServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CONTROL_TRACING_STUB_H
