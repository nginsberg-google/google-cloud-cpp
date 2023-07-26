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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/v1/internal/cloud_scheduler_stub_factory.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_auth_decorator.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_logging_decorator.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_metadata_decorator.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_stub.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/scheduler/v1/cloudscheduler.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace scheduler_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<CloudSchedulerStub> CreateDefaultCloudSchedulerStub(
    google::cloud::CompletionQueue cq, Options const& options) {
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      std::move(cq), options);
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub =
      google::cloud::scheduler::v1::CloudScheduler::NewStub(channel);
  std::shared_ptr<CloudSchedulerStub> stub =
      std::make_shared<DefaultCloudSchedulerStub>(std::move(service_grpc_stub));

  if (auth->RequiresConfigureContext()) {
    stub =
        std::make_shared<CloudSchedulerAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<CloudSchedulerMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<CloudSchedulerLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeCloudSchedulerTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_v1_internal
}  // namespace cloud
}  // namespace google
