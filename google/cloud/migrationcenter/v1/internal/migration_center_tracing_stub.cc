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
// source: google/cloud/migrationcenter/v1/migrationcenter.proto

#include "google/cloud/migrationcenter/v1/internal/migration_center_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace migrationcenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MigrationCenterTracingStub::MigrationCenterTracingStub(
    std::shared_ptr<MigrationCenterStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::migrationcenter::v1::ListAssetsResponse>
MigrationCenterTracingStub::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListAssetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAssets(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterTracingStub::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAsset(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterTracingStub::UpdateAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::UpdateAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "UpdateAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateAsset(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>
MigrationCenterTracingStub::BatchUpdateAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "BatchUpdateAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->BatchUpdateAssets(context, options, request));
}

Status MigrationCenterTracingStub::DeleteAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::DeleteAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeleteAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteAsset(context, options, request));
}

Status MigrationCenterTracingStub::BatchDeleteAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "BatchDeleteAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->BatchDeleteAssets(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ReportAssetFramesResponse>
MigrationCenterTracingStub::ReportAssetFrames(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ReportAssetFrames");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ReportAssetFrames(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>
MigrationCenterTracingStub::AggregateAssetsValues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.migrationcenter.v1.MigrationCenter",
                             "AggregateAssetsValues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AggregateAssetsValues(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "CreateImportJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateImportJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::ListImportJobsResponse>
MigrationCenterTracingStub::ListImportJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListImportJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListImportJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListImportJobs(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ImportJob>
MigrationCenterTracingStub::GetImportJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetImportJob(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeleteImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeleteImportJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteImportJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncUpdateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "UpdateImportJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateImportJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncValidateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ValidateImportJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncValidateImportJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncRunImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::RunImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "RunImportJob");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRunImportJob(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>
MigrationCenterTracingStub::GetImportDataFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetImportDataFileRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetImportDataFile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetImportDataFile(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ListImportDataFilesResponse>
MigrationCenterTracingStub::ListImportDataFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListImportDataFilesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListImportDataFiles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListImportDataFiles(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreateImportDataFile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.migrationcenter.v1.MigrationCenter",
                             "CreateImportDataFile");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateImportDataFile(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeleteImportDataFile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.migrationcenter.v1.MigrationCenter",
                             "DeleteImportDataFile");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteImportDataFile(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::ListGroupsResponse>
MigrationCenterTracingStub::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListGroupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGroups(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::Group>
MigrationCenterTracingStub::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGroup(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "CreateGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncUpdateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "UpdateGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeleteGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeleteGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncAddAssetsToGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "AddAssetsToGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncAddAssetsToGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncRemoveAssetsFromGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.migrationcenter.v1.MigrationCenter",
                             "RemoveAssetsFromGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRemoveAssetsFromGroup(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::ListErrorFramesResponse>
MigrationCenterTracingStub::ListErrorFrames(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListErrorFramesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListErrorFrames");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListErrorFrames(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ErrorFrame>
MigrationCenterTracingStub::GetErrorFrame(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetErrorFrameRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetErrorFrame");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetErrorFrame(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ListSourcesResponse>
MigrationCenterTracingStub::ListSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListSourcesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListSources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSources(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::Source>
MigrationCenterTracingStub::GetSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetSource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSource(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "CreateSource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSource(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncUpdateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "UpdateSource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSource(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeleteSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeleteSource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSource(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::ListPreferenceSetsResponse>
MigrationCenterTracingStub::ListPreferenceSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListPreferenceSetsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListPreferenceSets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListPreferenceSets(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>
MigrationCenterTracingStub::GetPreferenceSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetPreferenceSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPreferenceSet(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreatePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "CreatePreferenceSet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreatePreferenceSet(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncUpdatePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "UpdatePreferenceSet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdatePreferenceSet(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeletePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeletePreferenceSet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeletePreferenceSet(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::Settings>
MigrationCenterTracingStub::GetSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSettings(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncUpdateSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "UpdateSettings");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateSettings(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreateReportConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "CreateReportConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateReportConfig(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::ReportConfig>
MigrationCenterTracingStub::GetReportConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetReportConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetReportConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetReportConfig(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ListReportConfigsResponse>
MigrationCenterTracingStub::ListReportConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListReportConfigsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListReportConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListReportConfigs(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeleteReportConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeleteReportConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteReportConfig(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncCreateReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateReportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "CreateReport");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateReport(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::migrationcenter::v1::Report>
MigrationCenterTracingStub::GetReport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetReportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "GetReport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetReport(context, options, request));
}

StatusOr<google::cloud::migrationcenter::v1::ListReportsResponse>
MigrationCenterTracingStub::ListReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListReportsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "ListReports");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListReports(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncDeleteReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteReportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.migrationcenter.v1.MigrationCenter", "DeleteReport");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteReport(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> MigrationCenterTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MigrationCenterStub> MakeMigrationCenterTracingStub(
    std::shared_ptr<MigrationCenterStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MigrationCenterTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1_internal
}  // namespace cloud
}  // namespace google
