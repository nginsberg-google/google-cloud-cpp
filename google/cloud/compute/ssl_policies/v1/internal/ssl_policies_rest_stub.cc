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
// source: google/cloud/compute/ssl_policies/v1/ssl_policies.proto

#include "google/cloud/compute/ssl_policies/v1/internal/ssl_policies_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/ssl_policies/v1/ssl_policies.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultSslPoliciesRestStub::DefaultSslPoliciesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultSslPoliciesRestStub::DefaultSslPoliciesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::SslPoliciesAggregatedList>
DefaultSslPoliciesRestStub::AggregatedListSslPolicies(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        AggregatedListSslPoliciesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::SslPoliciesAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/aggregated/sslPolicies"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("include_all_scopes",
                      request.include_all_scopes() ? "1" : "0"),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultSslPoliciesRestStub::AsyncDeleteSslPolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        DeleteSslPoliciesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/sslPolicies/", request.ssl_policy(),
                             "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
DefaultSslPoliciesRestStub::GetSslPolicies(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::GetSslPoliciesRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::SslPolicy>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/sslPolicies/", request.ssl_policy(), ""),
      {});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultSslPoliciesRestStub::AsyncInsertSslPolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        InsertSslPoliciesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.ssl_policy_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/sslPolicies")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::SslPoliciesList>
DefaultSslPoliciesRestStub::ListSslPolicies(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::ListSslPoliciesRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::SslPoliciesList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/sslPolicies"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
DefaultSslPoliciesRestStub::ListAvailableFeatures(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        ListAvailableFeaturesRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::
                                SslPoliciesListAvailableFeaturesResponse>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/sslPolicies/listAvailableFeatures"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultSslPoliciesRestStub::AsyncPatchSslPolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::ssl_policies::v1::
        PatchSslPoliciesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.ssl_policy_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/sslPolicies/", request.ssl_policy(),
                             "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultSslPoliciesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultSslPoliciesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request,
            absl::StrCat("/compute/v1/projects/", request.project(),
                         "/global/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google
