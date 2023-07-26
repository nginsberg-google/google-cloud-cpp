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
// source: google/logging/v2/logging_config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_CONFIG_SERVICE_V2_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_CONFIG_SERVICE_V2_CONNECTION_H

#include "google/cloud/logging/v2/config_service_v2_connection_idempotency_policy.h"
#include "google/cloud/logging/v2/internal/config_service_v2_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/logging/v2/logging_config.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ConfigServiceV2Connection`.
class ConfigServiceV2RetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ConfigServiceV2RetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ConfigServiceV2Connection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ConfigServiceV2LimitedErrorCountRetryPolicy
    : public ConfigServiceV2RetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ConfigServiceV2LimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ConfigServiceV2LimitedErrorCountRetryPolicy(
      ConfigServiceV2LimitedErrorCountRetryPolicy&& rhs) noexcept
      : ConfigServiceV2LimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  ConfigServiceV2LimitedErrorCountRetryPolicy(
      ConfigServiceV2LimitedErrorCountRetryPolicy const& rhs) noexcept
      : ConfigServiceV2LimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ConfigServiceV2RetryPolicy> clone() const override {
    return std::make_unique<ConfigServiceV2LimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ConfigServiceV2RetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      logging_v2_internal::ConfigServiceV2RetryTraits>
      impl_;
};

/**
 * A retry policy for `ConfigServiceV2Connection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ConfigServiceV2LimitedTimeRetryPolicy
    : public ConfigServiceV2RetryPolicy {
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
  explicit ConfigServiceV2LimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ConfigServiceV2LimitedTimeRetryPolicy(
      ConfigServiceV2LimitedTimeRetryPolicy&& rhs) noexcept
      : ConfigServiceV2LimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ConfigServiceV2LimitedTimeRetryPolicy(
      ConfigServiceV2LimitedTimeRetryPolicy const& rhs) noexcept
      : ConfigServiceV2LimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ConfigServiceV2RetryPolicy> clone() const override {
    return std::make_unique<ConfigServiceV2LimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ConfigServiceV2RetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      logging_v2_internal::ConfigServiceV2RetryTraits>
      impl_;
};

/**
 * The `ConfigServiceV2Connection` object for `ConfigServiceV2Client`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ConfigServiceV2Client`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ConfigServiceV2Client`.
 *
 * To create a concrete instance, see `MakeConfigServiceV2Connection()`.
 *
 * For mocking, see `logging_v2_mocks::MockConfigServiceV2Connection`.
 */
class ConfigServiceV2Connection {
 public:
  virtual ~ConfigServiceV2Connection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::logging::v2::LogBucket> ListBuckets(
      google::logging::v2::ListBucketsRequest request);

  virtual StatusOr<google::logging::v2::LogBucket> GetBucket(
      google::logging::v2::GetBucketRequest const& request);

  virtual future<StatusOr<google::logging::v2::LogBucket>> CreateBucketAsync(
      google::logging::v2::CreateBucketRequest const& request);

  virtual future<StatusOr<google::logging::v2::LogBucket>> UpdateBucketAsync(
      google::logging::v2::UpdateBucketRequest const& request);

  virtual StatusOr<google::logging::v2::LogBucket> CreateBucket(
      google::logging::v2::CreateBucketRequest const& request);

  virtual StatusOr<google::logging::v2::LogBucket> UpdateBucket(
      google::logging::v2::UpdateBucketRequest const& request);

  virtual Status DeleteBucket(
      google::logging::v2::DeleteBucketRequest const& request);

  virtual Status UndeleteBucket(
      google::logging::v2::UndeleteBucketRequest const& request);

  virtual StreamRange<google::logging::v2::LogView> ListViews(
      google::logging::v2::ListViewsRequest request);

  virtual StatusOr<google::logging::v2::LogView> GetView(
      google::logging::v2::GetViewRequest const& request);

  virtual StatusOr<google::logging::v2::LogView> CreateView(
      google::logging::v2::CreateViewRequest const& request);

  virtual StatusOr<google::logging::v2::LogView> UpdateView(
      google::logging::v2::UpdateViewRequest const& request);

  virtual Status DeleteView(
      google::logging::v2::DeleteViewRequest const& request);

  virtual StreamRange<google::logging::v2::LogSink> ListSinks(
      google::logging::v2::ListSinksRequest request);

  virtual StatusOr<google::logging::v2::LogSink> GetSink(
      google::logging::v2::GetSinkRequest const& request);

  virtual StatusOr<google::logging::v2::LogSink> CreateSink(
      google::logging::v2::CreateSinkRequest const& request);

  virtual StatusOr<google::logging::v2::LogSink> UpdateSink(
      google::logging::v2::UpdateSinkRequest const& request);

  virtual Status DeleteSink(
      google::logging::v2::DeleteSinkRequest const& request);

  virtual future<StatusOr<google::logging::v2::Link>> CreateLink(
      google::logging::v2::CreateLinkRequest const& request);

  virtual future<StatusOr<google::logging::v2::LinkMetadata>> DeleteLink(
      google::logging::v2::DeleteLinkRequest const& request);

  virtual StreamRange<google::logging::v2::Link> ListLinks(
      google::logging::v2::ListLinksRequest request);

  virtual StatusOr<google::logging::v2::Link> GetLink(
      google::logging::v2::GetLinkRequest const& request);

  virtual StreamRange<google::logging::v2::LogExclusion> ListExclusions(
      google::logging::v2::ListExclusionsRequest request);

  virtual StatusOr<google::logging::v2::LogExclusion> GetExclusion(
      google::logging::v2::GetExclusionRequest const& request);

  virtual StatusOr<google::logging::v2::LogExclusion> CreateExclusion(
      google::logging::v2::CreateExclusionRequest const& request);

  virtual StatusOr<google::logging::v2::LogExclusion> UpdateExclusion(
      google::logging::v2::UpdateExclusionRequest const& request);

  virtual Status DeleteExclusion(
      google::logging::v2::DeleteExclusionRequest const& request);

  virtual StatusOr<google::logging::v2::CmekSettings> GetCmekSettings(
      google::logging::v2::GetCmekSettingsRequest const& request);

  virtual StatusOr<google::logging::v2::CmekSettings> UpdateCmekSettings(
      google::logging::v2::UpdateCmekSettingsRequest const& request);

  virtual StatusOr<google::logging::v2::Settings> GetSettings(
      google::logging::v2::GetSettingsRequest const& request);

  virtual StatusOr<google::logging::v2::Settings> UpdateSettings(
      google::logging::v2::UpdateSettingsRequest const& request);

  virtual future<StatusOr<google::logging::v2::CopyLogEntriesResponse>>
  CopyLogEntries(google::logging::v2::CopyLogEntriesRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ConfigServiceV2Connection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ConfigServiceV2Client.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ConfigServiceV2Connection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::logging_v2::ConfigServiceV2PolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ConfigServiceV2Connection` created
 * by this function.
 */
std::shared_ptr<ConfigServiceV2Connection> MakeConfigServiceV2Connection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_CONFIG_SERVICE_V2_CONNECTION_H
