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
// source: google/cloud/notebooks/v1/managed_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_MANAGED_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_MANAGED_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/notebooks/v1/managed_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ManagedNotebookServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ManagedNotebookServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ManagedNotebookServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListRuntimes(
      google::cloud::notebooks::v1::ListRuntimesRequest request);

  virtual google::cloud::Idempotency GetRuntime(
      google::cloud::notebooks::v1::GetRuntimeRequest const& request);

  virtual google::cloud::Idempotency CreateRuntime(
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request);

  virtual google::cloud::Idempotency UpdateRuntime(
      google::cloud::notebooks::v1::UpdateRuntimeRequest const& request);

  virtual google::cloud::Idempotency DeleteRuntime(
      google::cloud::notebooks::v1::DeleteRuntimeRequest const& request);

  virtual google::cloud::Idempotency StartRuntime(
      google::cloud::notebooks::v1::StartRuntimeRequest const& request);

  virtual google::cloud::Idempotency StopRuntime(
      google::cloud::notebooks::v1::StopRuntimeRequest const& request);

  virtual google::cloud::Idempotency SwitchRuntime(
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request);

  virtual google::cloud::Idempotency ResetRuntime(
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request);

  virtual google::cloud::Idempotency UpgradeRuntime(
      google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request);

  virtual google::cloud::Idempotency ReportRuntimeEvent(
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request);

  virtual google::cloud::Idempotency RefreshRuntimeTokenInternal(
      google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
          request);

  virtual google::cloud::Idempotency DiagnoseRuntime(
      google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request);
};

std::unique_ptr<ManagedNotebookServiceConnectionIdempotencyPolicy>
MakeDefaultManagedNotebookServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_MANAGED_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H
