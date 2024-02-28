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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_INTERNAL_SECURITY_CENTER_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_INTERNAL_SECURITY_CENTER_AUTH_DECORATOR_H

#include "google/cloud/securitycenter/v1/internal/security_center_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterAuth : public SecurityCenterStub {
 public:
  ~SecurityCenterAuth() override = default;
  SecurityCenterAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<SecurityCenterStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncBulkMuteFindings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request)
      override;

  StatusOr<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  CreateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Source> CreateSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::CreateSourceRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Finding> CreateFinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::CreateFindingRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::MuteConfig> CreateMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  CreateNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
          request) override;

  Status DeleteMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request)
      override;

  Status DeleteNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
          request) override;

  Status DeleteSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::BigQueryExport> GetBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v1::MuteConfig> GetMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::GetMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  GetNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
  GetOrganizationSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::
               EffectiveSecurityHealthAnalyticsCustomModule>
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  GetSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Source> GetSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::GetSourceRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse> GroupAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::GroupAssetsRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
  GroupFindings(grpc::ClientContext& context, Options const& options,
                google::cloud::securitycenter::v1::GroupFindingsRequest const&
                    request) override;

  StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse> ListAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::ListAssetsRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::
               ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
  ListDescendantSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
              request) override;

  StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
  ListFindings(grpc::ClientContext& context, Options const& options,
               google::cloud::securitycenter::v1::ListFindingsRequest const&
                   request) override;

  StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
  ListMuteConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
  ListNotificationConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::
               ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
              request) override;

  StatusOr<google::cloud::securitycenter::v1::
               ListSecurityHealthAnalyticsCustomModulesResponse>
  ListSecurityHealthAnalyticsCustomModules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse> ListSources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::ListSourcesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunAssetDiscovery(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::Finding> SetFindingState(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::SetFindingStateRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Finding> SetMute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::SetMuteRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v1::
               SimulateSecurityHealthAnalyticsCustomModuleResponse>
  SimulateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          SimulateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
  UpdateExternalSystem(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::Finding> UpdateFinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateFindingRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::MuteConfig> UpdateMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  UpdateNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
  UpdateOrganizationSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          UpdateOrganizationSettingsRequest const& request) override;

  StatusOr<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  UpdateSecurityHealthAnalyticsCustomModule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Source> UpdateSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateSourceRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
  UpdateSecurityMarks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
  CreateBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
          request) override;

  Status DeleteBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
  UpdateBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
  ListBigQueryExports(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<SecurityCenterStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_INTERNAL_SECURITY_CENTER_AUTH_DECORATOR_H
