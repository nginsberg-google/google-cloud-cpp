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
// source: google/cloud/compute/instances/v1/instances.proto

#include "google/cloud/compute/instances/v1/internal/instances_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstancesTracingConnection::InstancesTracingConnection(
    std::shared_ptr<compute_instances_v1::InstancesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::AddAccessConfig(
    google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::AddAccessConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AddAccessConfig(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::AddResourcePolicies(
    google::cloud::cpp::compute::instances::v1::
        AddResourcePoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::AddResourcePolicies");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AddResourcePolicies(request));
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::InstancesScopedList>>
InstancesTracingConnection::AggregatedListInstances(
    google::cloud::cpp::compute::instances::v1::AggregatedListInstancesRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::AggregatedListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListInstances(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::InstancesScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::AttachDisk(
    google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::AttachDisk");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AttachDisk(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::BulkInsert(
    google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::BulkInsert");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BulkInsert(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::DeleteInstance(
    google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::DeleteAccessConfig(
    google::cloud::cpp::compute::instances::v1::DeleteAccessConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::DeleteAccessConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteAccessConfig(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::DetachDisk(
    google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::DetachDisk");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DetachDisk(request));
}

StatusOr<google::cloud::cpp::compute::v1::Instance>
InstancesTracingConnection::GetInstance(
    google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

StatusOr<
    google::cloud::cpp::compute::v1::InstancesGetEffectiveFirewallsResponse>
InstancesTracingConnection::GetEffectiveFirewalls(
    google::cloud::cpp::compute::instances::v1::
        GetEffectiveFirewallsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetEffectiveFirewalls");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEffectiveFirewalls(request));
}

StatusOr<google::cloud::cpp::compute::v1::GuestAttributes>
InstancesTracingConnection::GetGuestAttributes(
    google::cloud::cpp::compute::instances::v1::GetGuestAttributesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetGuestAttributes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGuestAttributes(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstancesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Screenshot>
InstancesTracingConnection::GetScreenshot(
    google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetScreenshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetScreenshot(request));
}

StatusOr<google::cloud::cpp::compute::v1::SerialPortOutput>
InstancesTracingConnection::GetSerialPortOutput(
    google::cloud::cpp::compute::instances::v1::
        GetSerialPortOutputRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetSerialPortOutput");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSerialPortOutput(request));
}

StatusOr<google::cloud::cpp::compute::v1::ShieldedInstanceIdentity>
InstancesTracingConnection::GetShieldedInstanceIdentity(
    google::cloud::cpp::compute::instances::v1::
        GetShieldedInstanceIdentityRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::GetShieldedInstanceIdentity");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetShieldedInstanceIdentity(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::InsertInstance(
    google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::InsertInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertInstance(request));
}

StreamRange<google::cloud::cpp::compute::v1::Instance>
InstancesTracingConnection::ListInstances(
    google::cloud::cpp::compute::instances::v1::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Instance>(std::move(span),
                                                 std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::Reference>
InstancesTracingConnection::ListReferrers(
    google::cloud::cpp::compute::instances::v1::ListReferrersRequest request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::ListReferrers");
  internal::OTelScope scope(span);
  auto sr = child_->ListReferrers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Reference>(std::move(span),
                                                  std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::PerformMaintenance(
    google::cloud::cpp::compute::instances::v1::PerformMaintenanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::PerformMaintenance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PerformMaintenance(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::RemoveResourcePolicies(
    google::cloud::cpp::compute::instances::v1::
        RemoveResourcePoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::RemoveResourcePolicies");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RemoveResourcePolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::Reset(
    google::cloud::cpp::compute::instances::v1::ResetRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::Reset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Reset(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::Resume(
    google::cloud::cpp::compute::instances::v1::ResumeRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::Resume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Resume(request));
}

Status InstancesTracingConnection::SendDiagnosticInterrupt(
    google::cloud::cpp::compute::instances::v1::
        SendDiagnosticInterruptRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SendDiagnosticInterrupt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SendDiagnosticInterrupt(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetDeletionProtection(
    google::cloud::cpp::compute::instances::v1::
        SetDeletionProtectionRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetDeletionProtection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetDeletionProtection(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetDiskAutoDelete(
    google::cloud::cpp::compute::instances::v1::SetDiskAutoDeleteRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetDiskAutoDelete");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetDiskAutoDelete(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstancesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetLabels(
    google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetMachineResources(
    google::cloud::cpp::compute::instances::v1::
        SetMachineResourcesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetMachineResources");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetMachineResources(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetMachineType(
    google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetMachineType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetMachineType(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetMetadata(
    google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetMetadata");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetMetadata(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetMinCpuPlatform(
    google::cloud::cpp::compute::instances::v1::SetMinCpuPlatformRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetMinCpuPlatform");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetMinCpuPlatform(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetName(
    google::cloud::cpp::compute::instances::v1::SetNameRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::SetName");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetName(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetScheduling(
    google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetScheduling");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetScheduling(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetSecurityPolicy(
    google::cloud::cpp::compute::instances::v1::SetSecurityPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetSecurityPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetSecurityPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetServiceAccount(
    google::cloud::cpp::compute::instances::v1::SetServiceAccountRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SetServiceAccount");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetServiceAccount(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetShieldedInstanceIntegrityPolicy(
    google::cloud::cpp::compute::instances::v1::
        SetShieldedInstanceIntegrityPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::"
      "SetShieldedInstanceIntegrityPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetShieldedInstanceIntegrityPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SetTags(
    google::cloud::cpp::compute::instances::v1::SetTagsRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::SetTags");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetTags(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::SimulateMaintenanceEvent(
    google::cloud::cpp::compute::instances::v1::
        SimulateMaintenanceEventRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::SimulateMaintenanceEvent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SimulateMaintenanceEvent(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::Start(
    google::cloud::cpp::compute::instances::v1::StartRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::Start");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Start(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::StartWithEncryptionKey(
    google::cloud::cpp::compute::instances::v1::
        StartWithEncryptionKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::StartWithEncryptionKey");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StartWithEncryptionKey(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::Stop(
    google::cloud::cpp::compute::instances::v1::StopRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::Stop");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Stop(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::Suspend(
    google::cloud::cpp::compute::instances::v1::SuspendRequest const& request) {
  auto span =
      internal::MakeSpan("compute_instances_v1::InstancesConnection::Suspend");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Suspend(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstancesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::instances::v1::TestIamPermissionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::UpdateInstance(
    google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::UpdateAccessConfig(
    google::cloud::cpp::compute::instances::v1::UpdateAccessConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::UpdateAccessConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAccessConfig(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::UpdateDisplayDevice(
    google::cloud::cpp::compute::instances::v1::
        UpdateDisplayDeviceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::UpdateDisplayDevice");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDisplayDevice(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::UpdateNetworkInterface(
    google::cloud::cpp::compute::instances::v1::
        UpdateNetworkInterfaceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::UpdateNetworkInterface");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateNetworkInterface(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesTracingConnection::UpdateShieldedInstanceConfig(
    google::cloud::cpp::compute::instances::v1::
        UpdateShieldedInstanceConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instances_v1::InstancesConnection::"
      "UpdateShieldedInstanceConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateShieldedInstanceConfig(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_instances_v1::InstancesConnection>
MakeInstancesTracingConnection(
    std::shared_ptr<compute_instances_v1::InstancesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InstancesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1_internal
}  // namespace cloud
}  // namespace google
