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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/lineage/v1/lineage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LineageLogging::LineageLogging(std::shared_ptr<LineageStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<
    google::cloud::datacatalog::lineage::v1::ProcessOpenLineageRunEventResponse>
LineageLogging::ProcessOpenLineageRunEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::
        ProcessOpenLineageRunEventRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::
                 ProcessOpenLineageRunEventRequest const& request) {
        return child_->ProcessOpenLineageRunEvent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageLogging::CreateProcess(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
              request) {
        return child_->CreateProcess(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageLogging::UpdateProcess(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
              request) {
        return child_->UpdateProcess(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageLogging::GetProcess(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::GetProcessRequest const&
                 request) {
        return child_->GetProcess(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListProcessesResponse>
LineageLogging::ListProcesses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
              request) {
        return child_->ListProcesses(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
LineageLogging::AsyncDeleteProcess(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
              request) {
        return child_->AsyncDeleteProcess(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageLogging::CreateRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::CreateRunRequest const&
                 request) {
        return child_->CreateRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageLogging::UpdateRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::UpdateRunRequest const&
                 request) {
        return child_->UpdateRun(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run> LineageLogging::GetRun(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::GetRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::GetRunRequest const&
                 request) { return child_->GetRun(context, options, request); },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListRunsResponse>
LineageLogging::ListRuns(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::ListRunsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::ListRunsRequest const&
                 request) {
        return child_->ListRuns(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> LineageLogging::AsyncDeleteRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&
                 request) {
        return child_->AsyncDeleteRun(cq, std::move(context),
                                      std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageLogging::CreateLineageEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::
                 CreateLineageEventRequest const& request) {
        return child_->CreateLineageEvent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageLogging::GetLineageEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
              request) {
        return child_->GetLineageEvent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse>
LineageLogging::ListLineageEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::
                 ListLineageEventsRequest const& request) {
        return child_->ListLineageEvents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status LineageLogging::DeleteLineageEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::
                 DeleteLineageEventRequest const& request) {
        return child_->DeleteLineageEvent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::lineage::v1::SearchLinksResponse>
LineageLogging::SearchLinks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
                 request) {
        return child_->SearchLinks(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse>
LineageLogging::BatchSearchLinkProcesses(
    grpc::ClientContext& context, Options const& options,
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::datacatalog::lineage::v1::
                 BatchSearchLinkProcessesRequest const& request) {
        return child_->BatchSearchLinkProcesses(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
LineageLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> LineageLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
