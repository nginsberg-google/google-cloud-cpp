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
// source: google/cloud/metastore/v1/metastore.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_DATAPROC_METASTORE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_DATAPROC_METASTORE_CONNECTION_H

#include "google/cloud/metastore/v1/dataproc_metastore_connection_idempotency_policy.h"
#include "google/cloud/metastore/v1/internal/dataproc_metastore_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/metastore/v1/metastore.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DataprocMetastoreConnection`.
class DataprocMetastoreRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DataprocMetastoreRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DataprocMetastoreConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataprocMetastoreLimitedErrorCountRetryPolicy
    : public DataprocMetastoreRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DataprocMetastoreLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DataprocMetastoreLimitedErrorCountRetryPolicy(
      DataprocMetastoreLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DataprocMetastoreLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DataprocMetastoreLimitedErrorCountRetryPolicy(
      DataprocMetastoreLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DataprocMetastoreLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DataprocMetastoreRetryPolicy> clone() const override {
    return std::make_unique<DataprocMetastoreLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataprocMetastoreRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      metastore_v1_internal::DataprocMetastoreRetryTraits>
      impl_;
};

/**
 * A retry policy for `DataprocMetastoreConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataprocMetastoreLimitedTimeRetryPolicy
    : public DataprocMetastoreRetryPolicy {
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
  explicit DataprocMetastoreLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DataprocMetastoreLimitedTimeRetryPolicy(
      DataprocMetastoreLimitedTimeRetryPolicy&& rhs) noexcept
      : DataprocMetastoreLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DataprocMetastoreLimitedTimeRetryPolicy(
      DataprocMetastoreLimitedTimeRetryPolicy const& rhs) noexcept
      : DataprocMetastoreLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DataprocMetastoreRetryPolicy> clone() const override {
    return std::make_unique<DataprocMetastoreLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataprocMetastoreRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      metastore_v1_internal::DataprocMetastoreRetryTraits>
      impl_;
};

/**
 * The `DataprocMetastoreConnection` object for `DataprocMetastoreClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DataprocMetastoreClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `DataprocMetastoreClient`.
 *
 * To create a concrete instance, see `MakeDataprocMetastoreConnection()`.
 *
 * For mocking, see `metastore_v1_mocks::MockDataprocMetastoreConnection`.
 */
class DataprocMetastoreConnection {
 public:
  virtual ~DataprocMetastoreConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::metastore::v1::Service> ListServices(
      google::cloud::metastore::v1::ListServicesRequest request);

  virtual StatusOr<google::cloud::metastore::v1::Service> GetService(
      google::cloud::metastore::v1::GetServiceRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::Service>> CreateService(
      google::cloud::metastore::v1::CreateServiceRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::Service>> UpdateService(
      google::cloud::metastore::v1::UpdateServiceRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
  DeleteService(
      google::cloud::metastore::v1::DeleteServiceRequest const& request);

  virtual StreamRange<google::cloud::metastore::v1::MetadataImport>
  ListMetadataImports(
      google::cloud::metastore::v1::ListMetadataImportsRequest request);

  virtual StatusOr<google::cloud::metastore::v1::MetadataImport>
  GetMetadataImport(
      google::cloud::metastore::v1::GetMetadataImportRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
  CreateMetadataImport(
      google::cloud::metastore::v1::CreateMetadataImportRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
  UpdateMetadataImport(
      google::cloud::metastore::v1::UpdateMetadataImportRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::MetadataExport>>
  ExportMetadata(
      google::cloud::metastore::v1::ExportMetadataRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::Restore>>
  RestoreService(
      google::cloud::metastore::v1::RestoreServiceRequest const& request);

  virtual StreamRange<google::cloud::metastore::v1::Backup> ListBackups(
      google::cloud::metastore::v1::ListBackupsRequest request);

  virtual StatusOr<google::cloud::metastore::v1::Backup> GetBackup(
      google::cloud::metastore::v1::GetBackupRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::Backup>> CreateBackup(
      google::cloud::metastore::v1::CreateBackupRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
  DeleteBackup(
      google::cloud::metastore::v1::DeleteBackupRequest const& request);

  virtual future<StatusOr<google::cloud::metastore::v1::QueryMetadataResponse>>
  QueryMetadata(
      google::cloud::metastore::v1::QueryMetadataRequest const& request);

  virtual future<
      StatusOr<google::cloud::metastore::v1::MoveTableToDatabaseResponse>>
  MoveTableToDatabase(
      google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request);

  virtual future<StatusOr<
      google::cloud::metastore::v1::AlterMetadataResourceLocationResponse>>
  AlterMetadataResourceLocation(
      google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `DataprocMetastoreConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * DataprocMetastoreClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DataprocMetastoreConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::metastore_v1::DataprocMetastorePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DataprocMetastoreConnection` created
 * by this function.
 */
std::shared_ptr<DataprocMetastoreConnection> MakeDataprocMetastoreConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_DATAPROC_METASTORE_CONNECTION_H
