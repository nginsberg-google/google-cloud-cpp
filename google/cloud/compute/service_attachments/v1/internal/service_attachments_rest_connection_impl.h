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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_INTERNAL_SERVICE_ATTACHMENTS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_INTERNAL_SERVICE_ATTACHMENTS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_rest_stub.h"
#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_retry_traits.h"
#include "google/cloud/compute/service_attachments/v1/service_attachments_connection.h"
#include "google/cloud/compute/service_attachments/v1/service_attachments_connection_idempotency_policy.h"
#include "google/cloud/compute/service_attachments/v1/service_attachments_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceAttachmentsRestConnectionImpl
    : public compute_service_attachments_v1::ServiceAttachmentsConnection {
 public:
  ~ServiceAttachmentsRestConnectionImpl() override = default;

  ServiceAttachmentsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_service_attachments_v1_internal::ServiceAttachmentsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentAggregatedList>
  AggregatedListServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          AggregatedListServiceAttachmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          DeleteServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
  GetServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          GetServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::service_attachments::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          InsertServiceAttachmentsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::ServiceAttachment>
  ListServiceAttachments(google::cloud::cpp::compute::service_attachments::v1::
                             ListServiceAttachmentsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          PatchServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::service_attachments::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::service_attachments::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<compute_service_attachments_v1::ServiceAttachmentsRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_service_attachments_v1::
                        ServiceAttachmentsRetryPolicyOption>()) {
      return options
          .get<compute_service_attachments_v1::
                   ServiceAttachmentsRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_service_attachments_v1::
                 ServiceAttachmentsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_service_attachments_v1::
                        ServiceAttachmentsBackoffPolicyOption>()) {
      return options
          .get<compute_service_attachments_v1::
                   ServiceAttachmentsBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_service_attachments_v1::
                 ServiceAttachmentsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_service_attachments_v1::
                      ServiceAttachmentsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<compute_service_attachments_v1::
                     ServiceAttachmentsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_service_attachments_v1::
                   ServiceAttachmentsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_service_attachments_v1::
                 ServiceAttachmentsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_service_attachments_v1::
                        ServiceAttachmentsPollingPolicyOption>()) {
      return options
          .get<compute_service_attachments_v1::
                   ServiceAttachmentsPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_service_attachments_v1::
                 ServiceAttachmentsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_service_attachments_v1_internal::ServiceAttachmentsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_INTERNAL_SERVICE_ATTACHMENTS_REST_CONNECTION_IMPL_H
