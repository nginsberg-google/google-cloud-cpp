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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicDelegatedPrefixesRestMetadata
    : public PublicDelegatedPrefixesRestStub {
 public:
  ~PublicDelegatedPrefixesRestMetadata() override = default;
  explicit PublicDelegatedPrefixesRestMetadata(
      std::shared_ptr<PublicDelegatedPrefixesRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
  AggregatedListPublicDelegatedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AggregatedListPublicDelegatedPrefixesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAnnounce(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AnnounceRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixList>
  ListPublicDelegatedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          ListPublicDelegatedPrefixesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPublicDelegatedPrefix(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncWithdraw(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          WithdrawRequest const& request) override;

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

  std::shared_ptr<PublicDelegatedPrefixesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_METADATA_DECORATOR_H
