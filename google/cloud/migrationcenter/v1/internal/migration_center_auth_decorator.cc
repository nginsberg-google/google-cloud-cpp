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

#include "google/cloud/migrationcenter/v1/internal/migration_center_auth_decorator.h"
#include <google/cloud/migrationcenter/v1/migrationcenter.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace migrationcenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationCenterAuth::MigrationCenterAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<MigrationCenterStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::migrationcenter::v1::ListAssetsResponse>
MigrationCenterAuth::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListAssetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAssets(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterAuth::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAsset(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::Asset>
MigrationCenterAuth::UpdateAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::UpdateAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateAsset(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>
MigrationCenterAuth::BatchUpdateAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchUpdateAssets(context, options, request);
}

Status MigrationCenterAuth::DeleteAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::DeleteAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAsset(context, options, request);
}

Status MigrationCenterAuth::BatchDeleteAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchDeleteAssets(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ReportAssetFramesResponse>
MigrationCenterAuth::ReportAssetFrames(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReportAssetFrames(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>
MigrationCenterAuth::AggregateAssetsValues(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AggregateAssetsValues(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateImportJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateImportJob(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::ListImportJobsResponse>
MigrationCenterAuth::ListImportJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListImportJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListImportJobs(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ImportJob>
MigrationCenterAuth::GetImportJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetImportJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetImportJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeleteImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteImportJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteImportJob(cq, *std::move(context),
                                           std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncUpdateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateImportJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateImportJob(cq, *std::move(context),
                                           std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncValidateImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncValidateImportJob(cq, *std::move(context),
                                             std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncRunImportJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::RunImportJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRunImportJob(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>
MigrationCenterAuth::GetImportDataFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetImportDataFileRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetImportDataFile(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListImportDataFilesResponse>
MigrationCenterAuth::ListImportDataFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListImportDataFilesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListImportDataFiles(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreateImportDataFile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateImportDataFile(cq, *std::move(context),
                                                std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeleteImportDataFile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteImportDataFile(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::ListGroupsResponse>
MigrationCenterAuth::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListGroupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListGroups(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::Group>
MigrationCenterAuth::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetGroupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGroup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateGroupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateGroup(cq, *std::move(context),
                                       std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncUpdateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateGroupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateGroup(cq, *std::move(context),
                                       std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeleteGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteGroupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteGroup(cq, *std::move(context),
                                       std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncAddAssetsToGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncAddAssetsToGroup(cq, *std::move(context),
                                            std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncRemoveAssetsFromGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRemoveAssetsFromGroup(cq, *std::move(context),
                                                 std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::ListErrorFramesResponse>
MigrationCenterAuth::ListErrorFrames(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListErrorFramesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListErrorFrames(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ErrorFrame>
MigrationCenterAuth::GetErrorFrame(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetErrorFrameRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetErrorFrame(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListSourcesResponse>
MigrationCenterAuth::ListSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListSourcesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSources(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::Source>
MigrationCenterAuth::GetSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetSourceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSource(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateSourceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateSource(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncUpdateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateSourceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateSource(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeleteSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteSourceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteSource(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::ListPreferenceSetsResponse>
MigrationCenterAuth::ListPreferenceSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListPreferenceSetsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPreferenceSets(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>
MigrationCenterAuth::GetPreferenceSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPreferenceSet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreatePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreatePreferenceSet(cq, *std::move(context),
                                               std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncUpdatePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdatePreferenceSet(cq, *std::move(context),
                                               std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeletePreferenceSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeletePreferenceSet(cq, *std::move(context),
                                               std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::Settings>
MigrationCenterAuth::GetSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSettings(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncUpdateSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateSettings(cq, *std::move(context),
                                          std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreateReportConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateReportConfig(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::ReportConfig>
MigrationCenterAuth::GetReportConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetReportConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetReportConfig(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListReportConfigsResponse>
MigrationCenterAuth::ListReportConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListReportConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListReportConfigs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeleteReportConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteReportConfig(cq, *std::move(context),
                                              std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncCreateReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::CreateReportRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateReport(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::cloud::migrationcenter::v1::Report>
MigrationCenterAuth::GetReport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::GetReportRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetReport(context, options, request);
}

StatusOr<google::cloud::migrationcenter::v1::ListReportsResponse>
MigrationCenterAuth::ListReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::migrationcenter::v1::ListReportsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListReports(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncDeleteReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::migrationcenter::v1::DeleteReportRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteReport(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MigrationCenterAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> MigrationCenterAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1_internal
}  // namespace cloud
}  // namespace google
