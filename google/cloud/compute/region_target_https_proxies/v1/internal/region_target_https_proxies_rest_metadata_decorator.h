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
// source:
// google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_INTERNAL_REGION_TARGET_HTTPS_PROXIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_INTERNAL_REGION_TARGET_HTTPS_PROXIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/region_target_https_proxies/v1/internal/region_target_https_proxies_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionTargetHttpsProxiesRestMetadata
    : public RegionTargetHttpsProxiesRestStub {
 public:
  ~RegionTargetHttpsProxiesRestMetadata() override = default;
  explicit RegionTargetHttpsProxiesRestMetadata(
      std::shared_ptr<RegionTargetHttpsProxiesRestStub> child,
      std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetHttpsProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          DeleteTargetHttpsProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetTargetHttpsProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          GetTargetHttpsProxyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetHttpsProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          InsertTargetHttpsProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyList>
  ListRegionTargetHttpsProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          ListRegionTargetHttpsProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchTargetHttpsProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          PatchTargetHttpsProxyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSslCertificates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          SetSslCertificatesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetUrlMap(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          SetUrlMapRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<RegionTargetHttpsProxiesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_INTERNAL_REGION_TARGET_HTTPS_PROXIES_REST_METADATA_DECORATOR_H
