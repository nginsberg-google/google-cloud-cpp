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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_V1_IAM_CHECKER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_V1_IAM_CHECKER_CLIENT_H

#include "google/cloud/policytroubleshooter/v1/iam_checker_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// IAM Policy Troubleshooter service.
///
/// This service helps you troubleshoot access issues for Google Cloud
/// resources.
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
class IamCheckerClient {
 public:
  explicit IamCheckerClient(std::shared_ptr<IamCheckerConnection> connection,
                            Options opts = {});
  ~IamCheckerClient();

  ///@{
  /// @name Copy and move support
  IamCheckerClient(IamCheckerClient const&) = default;
  IamCheckerClient& operator=(IamCheckerClient const&) = default;
  IamCheckerClient(IamCheckerClient&&) = default;
  IamCheckerClient& operator=(IamCheckerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(IamCheckerClient const& a, IamCheckerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IamCheckerClient const& a, IamCheckerClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Checks whether a principal has a specific permission for a specific
  /// resource, and explains why the principal does or does not have that
  /// permission.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.policytroubleshooter.v1.TroubleshootIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.policytroubleshooter.v1.TroubleshootIamPolicyResponse])
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
  /// [google.cloud.policytroubleshooter.v1.TroubleshootIamPolicyRequest]: @googleapis_reference_link{google/cloud/policytroubleshooter/v1/checker.proto#L56}
  /// [google.cloud.policytroubleshooter.v1.TroubleshootIamPolicyResponse]: @googleapis_reference_link{google/cloud/policytroubleshooter/v1/checker.proto#L64}
  ///
  // clang-format on
  StatusOr<
      google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
  TroubleshootIamPolicy(google::cloud::policytroubleshooter::v1::
                            TroubleshootIamPolicyRequest const& request,
                        Options opts = {});

 private:
  std::shared_ptr<IamCheckerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_V1_IAM_CHECKER_CLIENT_H
