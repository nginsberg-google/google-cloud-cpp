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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_REGION_NETWORK_FIREWALL_POLICIES_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_REGION_NETWORK_FIREWALL_POLICIES_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionNetworkFirewallPoliciesRestLogging
    : public RegionNetworkFirewallPoliciesRestStub {
 public:
  ~RegionNetworkFirewallPoliciesRestLogging() override = default;
  RegionNetworkFirewallPoliciesRestLogging(
      std::shared_ptr<RegionNetworkFirewallPoliciesRestStub> child,
      TracingOptions tracing_options, std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddAssociation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          AddAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          AddRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncCloneRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          CloneRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteRegionNetworkFirewallPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          DeleteRegionNetworkFirewallPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
  GetRegionNetworkFirewallPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetRegionNetworkFirewallPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::rest_internal::RestContext& rest_context,
                 google::cloud::cpp::compute::region_network_firewall_policies::
                     v1::GetAssociationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetEffectiveFirewallsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertRegionNetworkFirewallPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          InsertRegionNetworkFirewallPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
  ListRegionNetworkFirewallPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          ListRegionNetworkFirewallPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRegionNetworkFirewallPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          PatchRegionNetworkFirewallPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          PatchRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveAssociation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          RemoveAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncRemoveRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          RemoveRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest const& request) override;

 private:
  std::shared_ptr<RegionNetworkFirewallPoliciesRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_REGION_NETWORK_FIREWALL_POLICIES_REST_LOGGING_DECORATOR_H
