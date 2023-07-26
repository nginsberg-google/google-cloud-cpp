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
// source:
// google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CLIENT_H

#include "google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_notification_endpoints_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionNotificationEndpoints resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionNotificationEndpoints
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
class RegionNotificationEndpointsClient {
 public:
  explicit RegionNotificationEndpointsClient(
      ExperimentalTag,
      std::shared_ptr<RegionNotificationEndpointsConnection> connection,
      Options opts = {});
  ~RegionNotificationEndpointsClient();

  ///@{
  /// @name Copy and move support
  RegionNotificationEndpointsClient(RegionNotificationEndpointsClient const&) =
      default;
  RegionNotificationEndpointsClient& operator=(
      RegionNotificationEndpointsClient const&) = default;
  RegionNotificationEndpointsClient(RegionNotificationEndpointsClient&&) =
      default;
  RegionNotificationEndpointsClient& operator=(
      RegionNotificationEndpointsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionNotificationEndpointsClient const& a,
                         RegionNotificationEndpointsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionNotificationEndpointsClient const& a,
                         RegionNotificationEndpointsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified NotificationEndpoint in the given region
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param notification_endpoint  Name of the NotificationEndpoint resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
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
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.DeleteRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L86}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionNotificationEndpoints(std::string const& project,
                                    std::string const& region,
                                    std::string const& notification_endpoint,
                                    Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified NotificationEndpoint in the given region
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_notification_endpoints.v1.DeleteRegionNotificationEndpointsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
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
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.DeleteRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L86}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          DeleteRegionNotificationEndpointsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified NotificationEndpoint resource in the given region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param notification_endpoint  Name of the NotificationEndpoint resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.NotificationEndpoint])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.GetRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L116}
  /// [google.cloud.cpp.compute.v1.NotificationEndpoint]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17268}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
  GetRegionNotificationEndpoints(std::string const& project,
                                 std::string const& region,
                                 std::string const& notification_endpoint,
                                 Options opts = {});

  // clang-format off
  ///
  /// Returns the specified NotificationEndpoint resource in the given region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_notification_endpoints.v1.GetRegionNotificationEndpointsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.NotificationEndpoint])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.GetRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L116}
  /// [google.cloud.cpp.compute.v1.NotificationEndpoint]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17268}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
  GetRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          GetRegionNotificationEndpointsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Create a NotificationEndpoint in the specified project in the given region
  /// using the parameters that are included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param notification_endpoint_resource  The NotificationEndpoint for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
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
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.InsertRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L128}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionNotificationEndpoints(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::NotificationEndpoint const&
          notification_endpoint_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Create a NotificationEndpoint in the specified project in the given region
  /// using the parameters that are included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_notification_endpoints.v1.InsertRegionNotificationEndpointsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
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
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.InsertRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L128}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          InsertRegionNotificationEndpointsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the NotificationEndpoints for a project in the given region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
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
  ///     [google.cloud.cpp.compute.v1.NotificationEndpoint], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.ListRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L159}
  /// [google.cloud.cpp.compute.v1.NotificationEndpoint]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17268}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::NotificationEndpoint>
  ListRegionNotificationEndpoints(std::string const& project,
                                  std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Lists the NotificationEndpoints for a project in the given region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_notification_endpoints.v1.ListRegionNotificationEndpointsRequest].
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
  ///     [google.cloud.cpp.compute.v1.NotificationEndpoint], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_notification_endpoints.v1.ListRegionNotificationEndpointsRequest]: @googleapis_reference_link{google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto#L159}
  /// [google.cloud.cpp.compute.v1.NotificationEndpoint]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17268}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::NotificationEndpoint>
  ListRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          ListRegionNotificationEndpointsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<RegionNotificationEndpointsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_notification_endpoints_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CLIENT_H
