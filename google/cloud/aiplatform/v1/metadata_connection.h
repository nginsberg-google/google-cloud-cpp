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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_METADATA_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_METADATA_CONNECTION_H

#include "google/cloud/aiplatform/v1/internal/metadata_retry_traits.h"
#include "google/cloud/aiplatform/v1/metadata_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/metadata_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `MetadataServiceConnection`.
class MetadataServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<MetadataServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `MetadataServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class MetadataServiceLimitedErrorCountRetryPolicy
    : public MetadataServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit MetadataServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  MetadataServiceLimitedErrorCountRetryPolicy(
      MetadataServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : MetadataServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  MetadataServiceLimitedErrorCountRetryPolicy(
      MetadataServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : MetadataServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<MetadataServiceRetryPolicy> clone() const override {
    return std::make_unique<MetadataServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = MetadataServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      aiplatform_v1_internal::MetadataServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `MetadataServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class MetadataServiceLimitedTimeRetryPolicy
    : public MetadataServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit MetadataServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  MetadataServiceLimitedTimeRetryPolicy(
      MetadataServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : MetadataServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  MetadataServiceLimitedTimeRetryPolicy(
      MetadataServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : MetadataServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<MetadataServiceRetryPolicy> clone() const override {
    return std::make_unique<MetadataServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = MetadataServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      aiplatform_v1_internal::MetadataServiceRetryTraits>
      impl_;
};

/**
 * The `MetadataServiceConnection` object for `MetadataServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `MetadataServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `MetadataServiceClient`.
 *
 * To create a concrete instance, see `MakeMetadataServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockMetadataServiceConnection`.
 */
class MetadataServiceConnection {
 public:
  virtual ~MetadataServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::aiplatform::v1::MetadataStore>>
  CreateMetadataStore(
      google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::MetadataStore>
  GetMetadataStore(
      google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::MetadataStore>
  ListMetadataStores(
      google::cloud::aiplatform::v1::ListMetadataStoresRequest request);

  virtual future<StatusOr<
      google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>>
  DeleteMetadataStore(
      google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Artifact> CreateArtifact(
      google::cloud::aiplatform::v1::CreateArtifactRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Artifact> GetArtifact(
      google::cloud::aiplatform::v1::GetArtifactRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Artifact> ListArtifacts(
      google::cloud::aiplatform::v1::ListArtifactsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Artifact> UpdateArtifact(
      google::cloud::aiplatform::v1::UpdateArtifactRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteArtifact(
      google::cloud::aiplatform::v1::DeleteArtifactRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::PurgeArtifactsResponse>>
  PurgeArtifacts(
      google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Context> CreateContext(
      google::cloud::aiplatform::v1::CreateContextRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Context> GetContext(
      google::cloud::aiplatform::v1::GetContextRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Context> ListContexts(
      google::cloud::aiplatform::v1::ListContextsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Context> UpdateContext(
      google::cloud::aiplatform::v1::UpdateContextRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteContext(
      google::cloud::aiplatform::v1::DeleteContextRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::PurgeContextsResponse>>
  PurgeContexts(
      google::cloud::aiplatform::v1::PurgeContextsRequest const& request);

  virtual StatusOr<
      google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
  AddContextArtifactsAndExecutions(
      google::cloud::aiplatform::v1::
          AddContextArtifactsAndExecutionsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
  AddContextChildren(
      google::cloud::aiplatform::v1::AddContextChildrenRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
  RemoveContextChildren(
      google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
          request);

  virtual StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryContextLineageSubgraph(
      google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
          request);

  virtual StatusOr<google::cloud::aiplatform::v1::Execution> CreateExecution(
      google::cloud::aiplatform::v1::CreateExecutionRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::Execution> GetExecution(
      google::cloud::aiplatform::v1::GetExecutionRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Execution> ListExecutions(
      google::cloud::aiplatform::v1::ListExecutionsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Execution> UpdateExecution(
      google::cloud::aiplatform::v1::UpdateExecutionRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteExecution(
      google::cloud::aiplatform::v1::DeleteExecutionRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::PurgeExecutionsResponse>>
  PurgeExecutions(
      google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
  AddExecutionEvents(
      google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryExecutionInputsAndOutputs(
      google::cloud::aiplatform::v1::
          QueryExecutionInputsAndOutputsRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
  CreateMetadataSchema(
      google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const&
          request);

  virtual StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
  GetMetadataSchema(
      google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::MetadataSchema>
  ListMetadataSchemas(
      google::cloud::aiplatform::v1::ListMetadataSchemasRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryArtifactLineageSubgraph(
      google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `MetadataServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of MetadataServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `MetadataServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::MetadataServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `MetadataServiceConnection` created
 * by this function.
 */
std::shared_ptr<MetadataServiceConnection> MakeMetadataServiceConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_METADATA_CONNECTION_H
