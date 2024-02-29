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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#include "google/cloud/compute/target_instances/v1/internal/target_instances_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetInstancesRestLogging::TargetInstancesRestLogging(
    std::shared_ptr<TargetInstancesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
TargetInstancesRestLogging::AggregatedListTargetInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_instances::v1::
        AggregatedListTargetInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::target_instances::v1::
                 AggregatedListTargetInstancesRequest const& request) {
        return child_->AggregatedListTargetInstances(rest_context, options,
                                                     request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestLogging::AsyncDeleteTargetInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_instances::v1::
        DeleteTargetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::target_instances::v1::
                 DeleteTargetInstanceRequest const& request) {
        return child_->AsyncDeleteTargetInstance(cq, std::move(rest_context),
                                                 std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesRestLogging::GetTargetInstance(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_instances::v1::
        GetTargetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::target_instances::v1::
                 GetTargetInstanceRequest const& request) {
        return child_->GetTargetInstance(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestLogging::AsyncInsertTargetInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_instances::v1::
        InsertTargetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::target_instances::v1::
                 InsertTargetInstanceRequest const& request) {
        return child_->AsyncInsertTargetInstance(cq, std::move(rest_context),
                                                 std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceList>
TargetInstancesRestLogging::ListTargetInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_instances::v1::
        ListTargetInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::target_instances::v1::
                 ListTargetInstancesRequest const& request) {
        return child_->ListTargetInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestLogging::AsyncSetSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_instances::v1::
        SetSecurityPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::target_instances::v1::
                 SetSecurityPolicyRequest const& request) {
        return child_->AsyncSetSecurityPolicy(cq, std::move(rest_context),
                                              std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> TargetInstancesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1_internal
}  // namespace cloud
}  // namespace google
