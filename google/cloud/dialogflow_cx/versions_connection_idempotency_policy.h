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
// source: google/cloud/dialogflow/cx/v3/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/version.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VersionsConnectionIdempotencyPolicy {
 public:
  virtual ~VersionsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<VersionsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListVersions(
      google::cloud::dialogflow::cx::v3::ListVersionsRequest request);

  virtual google::cloud::Idempotency GetVersion(
      google::cloud::dialogflow::cx::v3::GetVersionRequest const& request);

  virtual google::cloud::Idempotency CreateVersion(
      google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request);

  virtual google::cloud::Idempotency UpdateVersion(
      google::cloud::dialogflow::cx::v3::UpdateVersionRequest const& request);

  virtual google::cloud::Idempotency DeleteVersion(
      google::cloud::dialogflow::cx::v3::DeleteVersionRequest const& request);

  virtual google::cloud::Idempotency LoadVersion(
      google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request);

  virtual google::cloud::Idempotency CompareVersions(
      google::cloud::dialogflow::cx::v3::CompareVersionsRequest const& request);
};

std::unique_ptr<VersionsConnectionIdempotencyPolicy>
MakeDefaultVersionsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CONNECTION_IDEMPOTENCY_POLICY_H
