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
// source: google/cloud/aiplatform/v1/match_service.proto

#include "google/cloud/aiplatform/v1/match_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MatchServiceClient::MatchServiceClient(
    std::shared_ptr<MatchServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
MatchServiceClient::~MatchServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::FindNeighborsResponse>
MatchServiceClient::FindNeighbors(
    google::cloud::aiplatform::v1::FindNeighborsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FindNeighbors(request);
}

StatusOr<google::cloud::aiplatform::v1::ReadIndexDatapointsResponse>
MatchServiceClient::ReadIndexDatapoints(
    google::cloud::aiplatform::v1::ReadIndexDatapointsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReadIndexDatapoints(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
