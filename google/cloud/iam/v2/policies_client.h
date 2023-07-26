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
// source: google/iam/v2/policy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_POLICIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_POLICIES_CLIENT_H

#include "google/cloud/iam/v2/policies_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace iam_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// An interface for managing Identity and Access Management (IAM) policies.
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
class PoliciesClient {
 public:
  explicit PoliciesClient(std::shared_ptr<PoliciesConnection> connection,
                          Options opts = {});
  ~PoliciesClient();

  ///@{
  /// @name Copy and move support
  PoliciesClient(PoliciesClient const&) = default;
  PoliciesClient& operator=(PoliciesClient const&) = default;
  PoliciesClient(PoliciesClient&&) = default;
  PoliciesClient& operator=(PoliciesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PoliciesClient const& a, PoliciesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PoliciesClient const& a, PoliciesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves the policies of the specified kind that are attached to a
  /// resource.
  ///
  /// The response lists only policy metadata. In particular, policy rules are
  /// omitted.
  ///
  /// @param parent  Required. The resource that the policy is attached to, along with the kind of policy
  ///  to list. Format:
  ///  `policies/{attachment_point}/denypolicies`
  ///  @n
  ///  The attachment point is identified by its URL-encoded full resource name,
  ///  which means that the forward-slash character, `/`, must be written as
  ///  `%2F`. For example,
  ///  `policies/cloudresourcemanager.googleapis.com%2Fprojects%2Fmy-project/denypolicies`.
  ///  @n
  ///  For organizations and folders, use the numeric ID in the full resource
  ///  name. For projects, you can use the alphanumeric or the numeric ID.
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
  ///     [google.iam.v2.Policy], or rather,
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
  /// [google.iam.v2.ListPoliciesRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L176}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  StreamRange<google::iam::v2::Policy> ListPolicies(std::string const& parent,
                                                    Options opts = {});

  // clang-format off
  ///
  /// Retrieves the policies of the specified kind that are attached to a
  /// resource.
  ///
  /// The response lists only policy metadata. In particular, policy rules are
  /// omitted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v2.ListPoliciesRequest].
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
  ///     [google.iam.v2.Policy], or rather,
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
  /// [google.iam.v2.ListPoliciesRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L176}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  StreamRange<google::iam::v2::Policy> ListPolicies(
      google::iam::v2::ListPoliciesRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets a policy.
  ///
  /// @param name  Required. The resource name of the policy to retrieve. Format:
  ///  `policies/{attachment_point}/denypolicies/{policy_id}`
  ///  @n
  ///  Use the URL-encoded full resource name, which means that the forward-slash
  ///  character, `/`, must be written as `%2F`. For example,
  ///  `policies/cloudresourcemanager.googleapis.com%2Fprojects%2Fmy-project/denypolicies/my-policy`.
  ///  @n
  ///  For organizations and folders, use the numeric ID in the full resource
  ///  name. For projects, you can use the alphanumeric or the numeric ID.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v2.Policy])
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
  /// [google.iam.v2.GetPolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L211}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  StatusOr<google::iam::v2::Policy> GetPolicy(std::string const& name,
                                              Options opts = {});

  // clang-format off
  ///
  /// Gets a policy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v2.GetPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v2.Policy])
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
  /// [google.iam.v2.GetPolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L211}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  StatusOr<google::iam::v2::Policy> GetPolicy(
      google::iam::v2::GetPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Creates a policy.
  ///
  /// @param parent  Required. The resource that the policy is attached to, along with the kind of policy
  ///  to create. Format: `policies/{attachment_point}/denypolicies`
  ///  @n
  ///  The attachment point is identified by its URL-encoded full resource name,
  ///  which means that the forward-slash character, `/`, must be written as
  ///  `%2F`. For example,
  ///  `policies/cloudresourcemanager.googleapis.com%2Fprojects%2Fmy-project/denypolicies`.
  ///  @n
  ///  For organizations and folders, use the numeric ID in the full resource
  ///  name. For projects, you can use the alphanumeric or the numeric ID.
  /// @param policy  Required. The policy to create.
  /// @param policy_id  The ID to use for this policy, which will become the final component of
  ///  the policy's resource name. The ID must contain 3 to 63 characters. It can
  ///  contain lowercase letters and numbers, as well as dashes (`-`) and periods
  ///  (`.`). The first character must be a lowercase letter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.iam.v2.Policy] proto message.
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
  /// [google.iam.v2.CreatePolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L226}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  future<StatusOr<google::iam::v2::Policy>> CreatePolicy(
      std::string const& parent, google::iam::v2::Policy const& policy,
      std::string const& policy_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a policy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v2.CreatePolicyRequest].
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
  ///     [google.iam.v2.Policy] proto message.
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
  /// [google.iam.v2.CreatePolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L226}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  future<StatusOr<google::iam::v2::Policy>> CreatePolicy(
      google::iam::v2::CreatePolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified policy.
  ///
  /// You can update only the rules and the display name for the policy.
  ///
  /// To update a policy, you should use a read-modify-write loop:
  ///
  /// 1. Use [GetPolicy][google.iam.v2.Policies.GetPolicy] to read the current version of the policy.
  /// 2. Modify the policy as needed.
  /// 3. Use `UpdatePolicy` to write the updated policy.
  ///
  /// This pattern helps prevent conflicts between concurrent updates.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v2.UpdatePolicyRequest].
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
  ///     [google.iam.v2.Policy] proto message.
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
  /// [google.iam.v2.Policies.GetPolicy]: @googleapis_reference_link{google/iam/v2/policy.proto#L51}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  /// [google.iam.v2.UpdatePolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L251}
  ///
  // clang-format on
  future<StatusOr<google::iam::v2::Policy>> UpdatePolicy(
      google::iam::v2::UpdatePolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Deletes a policy. This action is permanent.
  ///
  /// @param name  Required. The resource name of the policy to delete. Format:
  ///  `policies/{attachment_point}/denypolicies/{policy_id}`
  ///  @n
  ///  Use the URL-encoded full resource name, which means that the forward-slash
  ///  character, `/`, must be written as `%2F`. For example,
  ///  `policies/cloudresourcemanager.googleapis.com%2Fprojects%2Fmy-project/denypolicies/my-policy`.
  ///  @n
  ///  For organizations and folders, use the numeric ID in the full resource
  ///  name. For projects, you can use the alphanumeric or the numeric ID.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.iam.v2.Policy] proto message.
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
  /// [google.iam.v2.DeletePolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L261}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  future<StatusOr<google::iam::v2::Policy>> DeletePolicy(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a policy. This action is permanent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v2.DeletePolicyRequest].
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
  ///     [google.iam.v2.Policy] proto message.
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
  /// [google.iam.v2.DeletePolicyRequest]: @googleapis_reference_link{google/iam/v2/policy.proto#L261}
  /// [google.iam.v2.Policy]: @googleapis_reference_link{google/iam/v2/policy.proto#L107}
  ///
  // clang-format on
  future<StatusOr<google::iam::v2::Policy>> DeletePolicy(
      google::iam::v2::DeletePolicyRequest const& request, Options opts = {});

 private:
  std::shared_ptr<PoliciesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_POLICIES_CLIENT_H
