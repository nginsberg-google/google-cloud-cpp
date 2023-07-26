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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_V1_OS_CONFIG_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_V1_OS_CONFIG_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/osconfig/v1/osconfig_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OsConfigServiceConnectionIdempotencyPolicy {
 public:
  virtual ~OsConfigServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<OsConfigServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ExecutePatchJob(
      google::cloud::osconfig::v1::ExecutePatchJobRequest const& request);

  virtual google::cloud::Idempotency GetPatchJob(
      google::cloud::osconfig::v1::GetPatchJobRequest const& request);

  virtual google::cloud::Idempotency CancelPatchJob(
      google::cloud::osconfig::v1::CancelPatchJobRequest const& request);

  virtual google::cloud::Idempotency ListPatchJobs(
      google::cloud::osconfig::v1::ListPatchJobsRequest request);

  virtual google::cloud::Idempotency ListPatchJobInstanceDetails(
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest request);

  virtual google::cloud::Idempotency CreatePatchDeployment(
      google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request);

  virtual google::cloud::Idempotency GetPatchDeployment(
      google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request);

  virtual google::cloud::Idempotency ListPatchDeployments(
      google::cloud::osconfig::v1::ListPatchDeploymentsRequest request);

  virtual google::cloud::Idempotency DeletePatchDeployment(
      google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request);

  virtual google::cloud::Idempotency UpdatePatchDeployment(
      google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request);

  virtual google::cloud::Idempotency PausePatchDeployment(
      google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request);

  virtual google::cloud::Idempotency ResumePatchDeployment(
      google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request);
};

std::unique_ptr<OsConfigServiceConnectionIdempotencyPolicy>
MakeDefaultOsConfigServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_V1_OS_CONFIG_CONNECTION_IDEMPOTENCY_POLICY_H
