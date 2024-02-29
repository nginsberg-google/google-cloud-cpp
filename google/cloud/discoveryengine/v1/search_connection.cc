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
// source: google/cloud/discoveryengine/v1/search_service.proto

#include "google/cloud/discoveryengine/v1/search_connection.h"
#include "google/cloud/discoveryengine/v1/internal/search_connection_impl.h"
#include "google/cloud/discoveryengine/v1/internal/search_option_defaults.h"
#include "google/cloud/discoveryengine/v1/internal/search_stub_factory.h"
#include "google/cloud/discoveryengine/v1/internal/search_tracing_connection.h"
#include "google/cloud/discoveryengine/v1/search_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SearchServiceConnection::~SearchServiceConnection() = default;

StreamRange<google::cloud::discoveryengine::v1::SearchResponse::SearchResult>
SearchServiceConnection::Search(
    google::cloud::discoveryengine::v1::
        SearchRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::discoveryengine::v1::SearchResponse::SearchResult>>();
}

std::shared_ptr<SearchServiceConnection> MakeSearchServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SearchServicePolicyOptionList>(options,
                                                                __func__);
  options = discoveryengine_v1_internal::SearchServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = discoveryengine_v1_internal::CreateDefaultSearchServiceStub(
      std::move(auth), options);
  return discoveryengine_v1_internal::MakeSearchServiceTracingConnection(
      std::make_shared<
          discoveryengine_v1_internal::SearchServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
