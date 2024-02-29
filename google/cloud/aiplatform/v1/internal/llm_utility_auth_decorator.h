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
// source: google/cloud/aiplatform/v1/llm_utility_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_LLM_UTILITY_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_LLM_UTILITY_AUTH_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/llm_utility_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LlmUtilityServiceAuth : public LlmUtilityServiceStub {
 public:
  ~LlmUtilityServiceAuth() override = default;
  LlmUtilityServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<LlmUtilityServiceStub> child);

  StatusOr<google::cloud::aiplatform::v1::CountTokensResponse> CountTokens(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CountTokensRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ComputeTokensResponse> ComputeTokens(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ComputeTokensRequest const& request)
      override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<LlmUtilityServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_LLM_UTILITY_AUTH_DECORATOR_H
