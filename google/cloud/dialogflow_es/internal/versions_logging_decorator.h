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
// source: google/cloud/dialogflow/v2/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_VERSIONS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_VERSIONS_LOGGING_DECORATOR_H

#include "google/cloud/dialogflow_es/internal/versions_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VersionsLogging : public VersionsStub {
 public:
  ~VersionsLogging() override = default;
  VersionsLogging(std::shared_ptr<VersionsStub> child,
                  TracingOptions tracing_options,
                  std::set<std::string> const& components);

  StatusOr<google::cloud::dialogflow::v2::ListVersionsResponse> ListVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListVersionsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Version> GetVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetVersionRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Version> CreateVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateVersionRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Version> UpdateVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::UpdateVersionRequest const& request)
      override;

  Status DeleteVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::DeleteVersionRequest const& request)
      override;

 private:
  std::shared_ptr<VersionsStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // VersionsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_VERSIONS_LOGGING_DECORATOR_H
