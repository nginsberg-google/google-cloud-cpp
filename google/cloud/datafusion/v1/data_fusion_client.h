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
// source: google/cloud/datafusion/v1/datafusion.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAFUSION_V1_DATA_FUSION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAFUSION_V1_DATA_FUSION_CLIENT_H

#include "google/cloud/datafusion/v1/data_fusion_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace datafusion_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for creating and managing Data Fusion instances.
/// Data Fusion enables ETL developers to build code-free, data integration
/// pipelines via a point-and-click UI.
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
class DataFusionClient {
 public:
  explicit DataFusionClient(std::shared_ptr<DataFusionConnection> connection,
                            Options opts = {});
  ~DataFusionClient();

  ///@{
  /// @name Copy and move support
  DataFusionClient(DataFusionClient const&) = default;
  DataFusionClient& operator=(DataFusionClient const&) = default;
  DataFusionClient(DataFusionClient&&) = default;
  DataFusionClient& operator=(DataFusionClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DataFusionClient const& a, DataFusionClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DataFusionClient const& a, DataFusionClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists possible versions for Data Fusion instances in the specified project
  /// and location.
  ///
  /// @param parent  Required. The project and location for which to retrieve instance information
  ///  in the format projects/{project}/locations/{location}.
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
  ///     [google.cloud.datafusion.v1.Version], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.datafusion.v1.ListAvailableVersionsRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L448}
  /// [google.cloud.datafusion.v1.Version]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L141}
  ///
  // clang-format on
  StreamRange<google::cloud::datafusion::v1::Version> ListAvailableVersions(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists possible versions for Data Fusion instances in the specified project
  /// and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.ListAvailableVersionsRequest].
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
  ///     [google.cloud.datafusion.v1.Version], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.datafusion.v1.ListAvailableVersionsRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L448}
  /// [google.cloud.datafusion.v1.Version]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L141}
  ///
  // clang-format on
  StreamRange<google::cloud::datafusion::v1::Version> ListAvailableVersions(
      google::cloud::datafusion::v1::ListAvailableVersionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists Data Fusion instances in the specified project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.ListInstancesRequest].
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
  ///     [google.cloud.datafusion.v1.Instance], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  /// [google.cloud.datafusion.v1.ListInstancesRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L408}
  ///
  // clang-format on
  StreamRange<google::cloud::datafusion::v1::Instance> ListInstances(
      google::cloud::datafusion::v1::ListInstancesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single Data Fusion instance.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.GetInstanceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.datafusion.v1.Instance])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.datafusion.v1.GetInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L482}
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  ///
  // clang-format on
  StatusOr<google::cloud::datafusion::v1::Instance> GetInstance(
      google::cloud::datafusion::v1::GetInstanceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new Data Fusion instance in the specified project and location.
  ///
  /// @param parent  Required. The instance's project and location in the format
  ///  projects/{project}/locations/{location}.
  /// @param instance  An instance resource.
  /// @param instance_id  Required. The name of the instance to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.datafusion.v1.Instance] proto message.
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
  /// [google.cloud.datafusion.v1.CreateInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L494}
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::Instance>> CreateInstance(
      std::string const& parent,
      google::cloud::datafusion::v1::Instance const& instance,
      std::string const& instance_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new Data Fusion instance in the specified project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.CreateInstanceRequest].
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
  ///     [google.cloud.datafusion.v1.Instance] proto message.
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
  /// [google.cloud.datafusion.v1.CreateInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L494}
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::Instance>> CreateInstance(
      google::cloud::datafusion::v1::CreateInstanceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a single Date Fusion instance.
  ///
  /// @param name  Required. The instance resource name in the format
  ///  projects/{project}/locations/{location}/instances/{instance}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.datafusion.v1.OperationMetadata] proto message.
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
  /// [google.cloud.datafusion.v1.DeleteInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L512}
  /// [google.cloud.datafusion.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L554}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::OperationMetadata>>
  DeleteInstance(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single Date Fusion instance.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.DeleteInstanceRequest].
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
  ///     [google.cloud.datafusion.v1.OperationMetadata] proto message.
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
  /// [google.cloud.datafusion.v1.DeleteInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L512}
  /// [google.cloud.datafusion.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L554}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::OperationMetadata>>
  DeleteInstance(
      google::cloud::datafusion::v1::DeleteInstanceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a single Data Fusion instance.
  ///
  /// @param instance  Required. The instance resource that replaces the resource on the server. Currently,
  ///  Data Fusion only allows replacing labels, options, and stack driver
  ///  settings. All other fields will be ignored.
  /// @param update_mask  Field mask is used to specify the fields that the update will overwrite
  ///  in an instance resource. The fields specified in the update_mask are
  ///  relative to the resource, not the full request.
  ///  A field will be overwritten if it is in the mask.
  ///  If the user does not provide a mask, all the supported fields (labels,
  ///  options, and version currently) will be overwritten.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.datafusion.v1.Instance] proto message.
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
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  /// [google.cloud.datafusion.v1.UpdateInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L526}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::Instance>> UpdateInstance(
      google::cloud::datafusion::v1::Instance const& instance,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates a single Data Fusion instance.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.UpdateInstanceRequest].
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
  ///     [google.cloud.datafusion.v1.Instance] proto message.
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
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  /// [google.cloud.datafusion.v1.UpdateInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L526}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::Instance>> UpdateInstance(
      google::cloud::datafusion::v1::UpdateInstanceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Restart a single Data Fusion instance.
  /// At the end of an operation instance is fully restarted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.datafusion.v1.RestartInstanceRequest].
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
  ///     [google.cloud.datafusion.v1.Instance] proto message.
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
  /// [google.cloud.datafusion.v1.Instance]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L223}
  /// [google.cloud.datafusion.v1.RestartInstanceRequest]: @googleapis_reference_link{google/cloud/datafusion/v1/datafusion.proto#L542}
  ///
  // clang-format on
  future<StatusOr<google::cloud::datafusion::v1::Instance>> RestartInstance(
      google::cloud::datafusion::v1::RestartInstanceRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DataFusionConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAFUSION_V1_DATA_FUSION_CLIENT_H
