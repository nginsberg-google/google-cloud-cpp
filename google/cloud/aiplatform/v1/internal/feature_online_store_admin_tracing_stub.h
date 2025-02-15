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
// source: google/cloud/aiplatform/v1/feature_online_store_admin_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_ONLINE_STORE_ADMIN_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_ONLINE_STORE_ADMIN_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class FeatureOnlineStoreAdminServiceTracingStub
    : public FeatureOnlineStoreAdminServiceStub {
 public:
  ~FeatureOnlineStoreAdminServiceTracingStub() override = default;

  explicit FeatureOnlineStoreAdminServiceTracingStub(
      std::shared_ptr<FeatureOnlineStoreAdminServiceStub> child);

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateFeatureOnlineStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>
  GetFeatureOnlineStore(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListFeatureOnlineStoresResponse>
  ListFeatureOnlineStores(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateFeatureOnlineStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteFeatureOnlineStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeatureView(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::FeatureView> GetFeatureView(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetFeatureViewRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListFeatureViewsResponse>
  ListFeatureViews(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListFeatureViewsRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeatureView(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeatureView(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SyncFeatureViewResponse>
  SyncFeatureView(grpc::ClientContext& context,
                  google::cloud::aiplatform::v1::SyncFeatureViewRequest const&
                      request) override;

  StatusOr<google::cloud::aiplatform::v1::FeatureViewSync> GetFeatureViewSync(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListFeatureViewSyncsResponse>
  ListFeatureViewSyncs(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<FeatureOnlineStoreAdminServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<FeatureOnlineStoreAdminServiceStub>
MakeFeatureOnlineStoreAdminServiceTracingStub(
    std::shared_ptr<FeatureOnlineStoreAdminServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURE_ONLINE_STORE_ADMIN_TRACING_STUB_H
