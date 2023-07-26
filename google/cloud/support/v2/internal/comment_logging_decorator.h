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
// source: google/cloud/support/v2/comment_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_COMMENT_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_COMMENT_LOGGING_DECORATOR_H

#include "google/cloud/support/v2/internal/comment_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CommentServiceLogging : public CommentServiceStub {
 public:
  ~CommentServiceLogging() override = default;
  CommentServiceLogging(std::shared_ptr<CommentServiceStub> child,
                        TracingOptions tracing_options,
                        std::set<std::string> const& components);

  StatusOr<google::cloud::support::v2::ListCommentsResponse> ListComments(
      grpc::ClientContext& context,
      google::cloud::support::v2::ListCommentsRequest const& request) override;

  StatusOr<google::cloud::support::v2::Comment> CreateComment(
      grpc::ClientContext& context,
      google::cloud::support::v2::CreateCommentRequest const& request) override;

 private:
  std::shared_ptr<CommentServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // CommentServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_COMMENT_LOGGING_DECORATOR_H
