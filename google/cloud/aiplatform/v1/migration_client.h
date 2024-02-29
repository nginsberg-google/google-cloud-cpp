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
// source: google/cloud/aiplatform/v1/migration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MIGRATION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MIGRATION_CLIENT_H

#include "google/cloud/aiplatform/v1/migration_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service that migrates resources from automl.googleapis.com,
/// datalabeling.googleapis.com and ml.googleapis.com to Vertex AI.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class MigrationServiceClient {
 public:
  explicit MigrationServiceClient(
      std::shared_ptr<MigrationServiceConnection> connection,
      Options opts = {});
  ~MigrationServiceClient();

  ///@{
  /// @name Copy and move support
  MigrationServiceClient(MigrationServiceClient const&) = default;
  MigrationServiceClient& operator=(MigrationServiceClient const&) = default;
  MigrationServiceClient(MigrationServiceClient&&) = default;
  MigrationServiceClient& operator=(MigrationServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(MigrationServiceClient const& a,
                         MigrationServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(MigrationServiceClient const& a,
                         MigrationServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Searches all of the resources in automl.googleapis.com,
  /// datalabeling.googleapis.com and ml.googleapis.com that can be migrated to
  /// Vertex AI's given location.
  ///
  /// @param parent  Required. The location that the migratable resources should be searched
  ///  from. It's the Vertex AI location that the resources can be migrated to,
  ///  not the resources' original location. Format:
  ///  `projects/{project}/locations/{location}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.aiplatform.v1.MigratableResource], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.MigratableResource]: @googleapis_reference_link{google/cloud/aiplatform/v1/migratable_resource.proto#L53}
  /// [google.cloud.aiplatform.v1.SearchMigratableResourcesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/migration_service.proto#L73}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::MigratableResource>
  SearchMigratableResources(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Searches all of the resources in automl.googleapis.com,
  /// datalabeling.googleapis.com and ml.googleapis.com that can be migrated to
  /// Vertex AI's given location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.SearchMigratableResourcesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.aiplatform.v1.MigratableResource], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.MigratableResource]: @googleapis_reference_link{google/cloud/aiplatform/v1/migratable_resource.proto#L53}
  /// [google.cloud.aiplatform.v1.SearchMigratableResourcesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/migration_service.proto#L73}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::MigratableResource>
  SearchMigratableResources(
      google::cloud::aiplatform::v1::SearchMigratableResourcesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Batch migrates resources from ml.googleapis.com, automl.googleapis.com,
  /// and datalabeling.googleapis.com to Vertex AI.
  ///
  /// @param parent  Required. The location of the migrated resource will live in.
  ///  Format: `projects/{project}/locations/{location}`
  /// @param migrate_resource_requests  Required. The request messages specifying the resources to migrate.
  ///  They must be in the same location as the destination.
  ///  Up to 50 resources can be migrated in one batch.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.BatchMigrateResourcesResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.BatchMigrateResourcesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/migration_service.proto#L122}
  /// [google.cloud.aiplatform.v1.BatchMigrateResourcesResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/migration_service.proto#L261}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
  BatchMigrateResources(
      std::string const& parent,
      std::vector<google::cloud::aiplatform::v1::MigrateResourceRequest> const&
          migrate_resource_requests,
      Options opts = {});

  // clang-format off
  ///
  /// Batch migrates resources from ml.googleapis.com, automl.googleapis.com,
  /// and datalabeling.googleapis.com to Vertex AI.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.BatchMigrateResourcesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.BatchMigrateResourcesResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.BatchMigrateResourcesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/migration_service.proto#L122}
  /// [google.cloud.aiplatform.v1.BatchMigrateResourcesResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/migration_service.proto#L261}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
  BatchMigrateResources(
      google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<MigrationServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MIGRATION_CLIENT_H
