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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_FIREWALL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_FIREWALL_CLIENT_H

#include "google/cloud/appengine/v1/firewall_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Firewall resources are used to define a collection of access control rules
/// for an Application. Each rule is defined with a position which specifies
/// the rule's order in the sequence of rules, an IP range to be matched against
/// requests, and an action to take upon matching requests.
///
/// Every request is evaluated against the Firewall rules in priority order.
/// Processesing stops at the first rule which matches the request's IP address.
/// A final rule always specifies an action that applies to all remaining
/// IP addresses. The default final rule for a newly-created application will be
/// set to "allow" if not otherwise specified by the user.
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
class FirewallClient {
 public:
  explicit FirewallClient(std::shared_ptr<FirewallConnection> connection,
                          Options opts = {});
  ~FirewallClient();

  ///@{
  /// @name Copy and move support
  FirewallClient(FirewallClient const&) = default;
  FirewallClient& operator=(FirewallClient const&) = default;
  FirewallClient(FirewallClient&&) = default;
  FirewallClient& operator=(FirewallClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(FirewallClient const& a, FirewallClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(FirewallClient const& a, FirewallClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists the firewall rules of an application.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.ListIngressRulesRequest].
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
  ///     [google.appengine.v1.FirewallRule], or rather,
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
  /// [google.appengine.v1.FirewallRule]: @googleapis_reference_link{google/appengine/v1/firewall.proto#L29}
  /// [google.appengine.v1.ListIngressRulesRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L611}
  ///
  // clang-format on
  StreamRange<google::appengine::v1::FirewallRule> ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Replaces the entire firewall ruleset in one bulk operation. This overrides
  /// and replaces the rules of an existing firewall with the new rules.
  ///
  /// If the final rule does not match traffic with the '*' wildcard IP range,
  /// then an "allow all" rule is explicitly added to the end of the list.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.BatchUpdateIngressRulesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.appengine.v1.BatchUpdateIngressRulesResponse])
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
  /// [google.appengine.v1.BatchUpdateIngressRulesRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L638}
  /// [google.appengine.v1.BatchUpdateIngressRulesResponse]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L648}
  ///
  // clang-format on
  StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
  BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a firewall rule for the application.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.CreateIngressRuleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.appengine.v1.FirewallRule])
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
  /// [google.appengine.v1.CreateIngressRuleRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L654}
  /// [google.appengine.v1.FirewallRule]: @googleapis_reference_link{google/appengine/v1/firewall.proto#L29}
  ///
  // clang-format on
  StatusOr<google::appengine::v1::FirewallRule> CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the specified firewall rule.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.GetIngressRuleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.appengine.v1.FirewallRule])
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
  /// [google.appengine.v1.FirewallRule]: @googleapis_reference_link{google/appengine/v1/firewall.proto#L29}
  /// [google.appengine.v1.GetIngressRuleRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L673}
  ///
  // clang-format on
  StatusOr<google::appengine::v1::FirewallRule> GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified firewall rule.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.UpdateIngressRuleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.appengine.v1.FirewallRule])
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
  /// [google.appengine.v1.FirewallRule]: @googleapis_reference_link{google/appengine/v1/firewall.proto#L29}
  /// [google.appengine.v1.UpdateIngressRuleRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L680}
  ///
  // clang-format on
  StatusOr<google::appengine::v1::FirewallRule> UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified firewall rule.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.DeleteIngressRuleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.appengine.v1.DeleteIngressRuleRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L693}
  ///
  // clang-format on
  Status DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<FirewallConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_FIREWALL_CLIENT_H
