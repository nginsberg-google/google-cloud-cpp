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
// google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultRegionNetworkFirewallPoliciesRestStub::
    DefaultRegionNetworkFirewallPoliciesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultRegionNetworkFirewallPoliciesRestStub::
    DefaultRegionNetworkFirewallPoliciesRestStub(
        std::shared_ptr<rest_internal::RestClient> service,
        std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncAddAssociation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.firewall_policy_association_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "addAssociation"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair(
                         "replace_existing_association",
                         request.replace_existing_association() ? "1" : "0"),
                     std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncAddRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.firewall_policy_rule_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "addRule"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("max_priority",
                                    std::to_string(request.max_priority())),
                     std::make_pair("min_priority",
                                    std::to_string(request.min_priority())),
                     std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncCloneRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "cloneRules"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id()),
                     std::make_pair("source_firewall_policy",
                                    request.source_firewall_policy())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncDeleteFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/",
                             request.firewall_policy()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
DefaultRegionNetworkFirewallPoliciesRestStub::GetFirewallPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetFirewallPolicyRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::FirewallPolicy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy()));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
DefaultRegionNetworkFirewallPoliciesRestStub::GetAssociation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetAssociationRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::FirewallPolicyAssociation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "getAssociation"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("name", request.name())}));
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
DefaultRegionNetworkFirewallPoliciesRestStub::GetEffectiveFirewalls(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetEffectiveFirewallsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::
          RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   "getEffectiveFirewalls"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("network", request.network())}));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultRegionNetworkFirewallPoliciesRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.resource(), "/", "getIamPolicy"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair(
          "options_requested_policy_version",
          std::to_string(request.options_requested_policy_version()))}));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
DefaultRegionNetworkFirewallPoliciesRestStub::GetRule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetRuleRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::FirewallPolicyRule>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.firewall_policy(), "/", "getRule"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("priority", std::to_string(request.priority()))}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncInsertFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.firewall_policy_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
DefaultRegionNetworkFirewallPoliciesRestStub::ListRegionNetworkFirewallPolicies(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        ListRegionNetworkFirewallPoliciesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::FirewallPolicyList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncPatchFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.firewall_policy_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/",
                             request.firewall_policy()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncPatchRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.firewall_policy_rule_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "patchRule"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("priority",
                                    std::to_string(request.priority())),
                     std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncRemoveAssociation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "removeAssociation"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("name", request.name()),
                     std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncRemoveRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "firewallPolicies", "/", request.firewall_policy(),
                             "/", "removeRule"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("priority",
                                    std::to_string(request.priority())),
                     std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultRegionNetworkFirewallPoliciesRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.region_set_policy_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.resource(), "/", "setIamPolicy"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultRegionNetworkFirewallPoliciesRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "firewallPolicies", "/",
                   request.resource(), "/", "testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/projects/", request.project(), "/regions/",
                             request.region(), "/operations/",
                             request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status>
DefaultRegionNetworkFirewallPoliciesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat(
                "/compute/", rest_internal::DetermineApiVersion("v1", *options),
                "/projects/", request.project(), "/regions/", request.region(),
                "/operations/", request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
