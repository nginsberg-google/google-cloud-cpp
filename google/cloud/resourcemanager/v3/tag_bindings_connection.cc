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
// source: google/cloud/resourcemanager/v3/tag_bindings.proto

#include "google/cloud/resourcemanager/v3/tag_bindings_connection.h"
#include "google/cloud/resourcemanager/v3/internal/tag_bindings_connection_impl.h"
#include "google/cloud/resourcemanager/v3/internal/tag_bindings_option_defaults.h"
#include "google/cloud/resourcemanager/v3/internal/tag_bindings_stub_factory.h"
#include "google/cloud/resourcemanager/v3/internal/tag_bindings_tracing_connection.h"
#include "google/cloud/resourcemanager/v3/tag_bindings_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TagBindingsConnection::~TagBindingsConnection() = default;

StreamRange<google::cloud::resourcemanager::v3::TagBinding>
TagBindingsConnection::ListTagBindings(
    google::cloud::resourcemanager::v3::
        ListTagBindingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::TagBinding>>();
}

future<StatusOr<google::cloud::resourcemanager::v3::TagBinding>>
TagBindingsConnection::CreateTagBinding(
    google::cloud::resourcemanager::v3::CreateTagBindingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::resourcemanager::v3::TagBinding>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>>
TagBindingsConnection::DeleteTagBinding(
    google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>
TagBindingsConnection::ListEffectiveTags(
    google::cloud::resourcemanager::v3::
        ListEffectiveTagsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>>();
}

std::shared_ptr<TagBindingsConnection> MakeTagBindingsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TagBindingsPolicyOptionList>(options,
                                                              __func__);
  options = resourcemanager_v3_internal::TagBindingsDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = resourcemanager_v3_internal::CreateDefaultTagBindingsStub(
      background->cq(), options);
  return resourcemanager_v3_internal::MakeTagBindingsTracingConnection(
      std::make_shared<resourcemanager_v3_internal::TagBindingsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google
