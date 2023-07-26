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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_VPC_ACCESS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_VPC_ACCESS_CONNECTION_H

#include "google/cloud/vpcaccess/v1/internal/vpc_access_retry_traits.h"
#include "google/cloud/vpcaccess/v1/vpc_access_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/vpcaccess/v1/vpc_access.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vpcaccess_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `VpcAccessServiceConnection`.
class VpcAccessServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<VpcAccessServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `VpcAccessServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class VpcAccessServiceLimitedErrorCountRetryPolicy
    : public VpcAccessServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit VpcAccessServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  VpcAccessServiceLimitedErrorCountRetryPolicy(
      VpcAccessServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : VpcAccessServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  VpcAccessServiceLimitedErrorCountRetryPolicy(
      VpcAccessServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : VpcAccessServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<VpcAccessServiceRetryPolicy> clone() const override {
    return std::make_unique<VpcAccessServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = VpcAccessServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      vpcaccess_v1_internal::VpcAccessServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `VpcAccessServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class VpcAccessServiceLimitedTimeRetryPolicy
    : public VpcAccessServiceRetryPolicy {
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
  explicit VpcAccessServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  VpcAccessServiceLimitedTimeRetryPolicy(
      VpcAccessServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : VpcAccessServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  VpcAccessServiceLimitedTimeRetryPolicy(
      VpcAccessServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : VpcAccessServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<VpcAccessServiceRetryPolicy> clone() const override {
    return std::make_unique<VpcAccessServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = VpcAccessServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      vpcaccess_v1_internal::VpcAccessServiceRetryTraits>
      impl_;
};

/**
 * The `VpcAccessServiceConnection` object for `VpcAccessServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VpcAccessServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VpcAccessServiceClient`.
 *
 * To create a concrete instance, see `MakeVpcAccessServiceConnection()`.
 *
 * For mocking, see `vpcaccess_v1_mocks::MockVpcAccessServiceConnection`.
 */
class VpcAccessServiceConnection {
 public:
  virtual ~VpcAccessServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::vpcaccess::v1::Connector>>
  CreateConnector(
      google::cloud::vpcaccess::v1::CreateConnectorRequest const& request);

  virtual StatusOr<google::cloud::vpcaccess::v1::Connector> GetConnector(
      google::cloud::vpcaccess::v1::GetConnectorRequest const& request);

  virtual StreamRange<google::cloud::vpcaccess::v1::Connector> ListConnectors(
      google::cloud::vpcaccess::v1::ListConnectorsRequest request);

  virtual future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
  DeleteConnector(
      google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `VpcAccessServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of VpcAccessServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VpcAccessServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::vpcaccess_v1::VpcAccessServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `VpcAccessServiceConnection` created
 * by this function.
 */
std::shared_ptr<VpcAccessServiceConnection> MakeVpcAccessServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_VPC_ACCESS_CONNECTION_H
