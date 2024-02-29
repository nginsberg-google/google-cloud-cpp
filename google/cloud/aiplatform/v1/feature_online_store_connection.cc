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
// source: google/cloud/aiplatform/v1/feature_online_store_service.proto

#include "google/cloud/aiplatform/v1/feature_online_store_connection.h"
#include "google/cloud/aiplatform/v1/feature_online_store_options.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/feature_online_store_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeatureOnlineStoreServiceConnection::~FeatureOnlineStoreServiceConnection() =
    default;

StatusOr<google::cloud::aiplatform::v1::FetchFeatureValuesResponse>
FeatureOnlineStoreServiceConnection::FetchFeatureValues(
    google::cloud::aiplatform::v1::FetchFeatureValuesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::SearchNearestEntitiesResponse>
FeatureOnlineStoreServiceConnection::SearchNearestEntities(
    google::cloud::aiplatform::v1::SearchNearestEntitiesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<FeatureOnlineStoreServiceConnection>
MakeFeatureOnlineStoreServiceConnection(std::string const& location,
                                        Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 FeatureOnlineStoreServicePolicyOptionList>(
      options, __func__);
  options = aiplatform_v1_internal::FeatureOnlineStoreServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      aiplatform_v1_internal::CreateDefaultFeatureOnlineStoreServiceStub(
          std::move(auth), options);
  return aiplatform_v1_internal::MakeFeatureOnlineStoreServiceTracingConnection(
      std::make_shared<
          aiplatform_v1_internal::FeatureOnlineStoreServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
