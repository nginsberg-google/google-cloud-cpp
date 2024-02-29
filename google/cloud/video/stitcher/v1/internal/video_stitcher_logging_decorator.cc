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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/internal/video_stitcher_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/video/stitcher/v1/video_stitcher_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceLogging::VideoStitcherServiceLogging(
    std::shared_ptr<VideoStitcherServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncCreateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::CreateCdnKeyRequest const&
                 request) {
        return child_->AsyncCreateCdnKey(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse>
VideoStitcherServiceLogging::ListCdnKeys(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::ListCdnKeysRequest const&
                 request) {
        return child_->ListCdnKeys(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceLogging::GetCdnKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
        return child_->GetCdnKey(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncDeleteCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&
                 request) {
        return child_->AsyncDeleteCdnKey(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncUpdateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const&
                 request) {
        return child_->AsyncUpdateCdnKey(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceLogging::CreateVodSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
                 request) {
        return child_->CreateVodSession(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceLogging::GetVodSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetVodSessionRequest const&
                 request) {
        return child_->GetVodSession(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
VideoStitcherServiceLogging::ListVodStitchDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
              request) {
        return child_->ListVodStitchDetails(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceLogging::GetVodStitchDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
              request) {
        return child_->GetVodStitchDetail(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
VideoStitcherServiceLogging::ListVodAdTagDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
              request) {
        return child_->ListVodAdTagDetails(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceLogging::GetVodAdTagDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
                 request) {
        return child_->GetVodAdTagDetail(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
VideoStitcherServiceLogging::ListLiveAdTagDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
              request) {
        return child_->ListLiveAdTagDetails(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceLogging::GetLiveAdTagDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
              request) {
        return child_->GetLiveAdTagDetail(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncCreateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::CreateSlateRequest const&
                 request) {
        return child_->AsyncCreateSlate(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse>
VideoStitcherServiceLogging::ListSlates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListSlatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::ListSlatesRequest const&
                 request) {
        return child_->ListSlates(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceLogging::GetSlate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
        return child_->GetSlate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncUpdateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::UpdateSlateRequest const&
                 request) {
        return child_->AsyncUpdateSlate(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncDeleteSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::DeleteSlateRequest const&
                 request) {
        return child_->AsyncDeleteSlate(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceLogging::CreateLiveSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
                 request) {
        return child_->CreateLiveSession(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceLogging::GetLiveSession(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetLiveSessionRequest const&
                 request) {
        return child_->GetLiveSession(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncCreateLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
                 request) {
        return child_->AsyncCreateLiveConfig(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveConfigsResponse>
VideoStitcherServiceLogging::ListLiveConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::ListLiveConfigsRequest const&
                 request) {
        return child_->ListLiveConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceLogging::GetLiveConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetLiveConfigRequest const&
                 request) {
        return child_->GetLiveConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncDeleteLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
                 request) {
        return child_->AsyncDeleteLiveConfig(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceLogging::AsyncGetOperation(
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

future<Status> VideoStitcherServiceLogging::AsyncCancelOperation(
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
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google
