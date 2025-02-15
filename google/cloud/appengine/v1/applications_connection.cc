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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/applications_connection.h"
#include "google/cloud/appengine/v1/applications_options.h"
#include "google/cloud/appengine/v1/internal/applications_connection_impl.h"
#include "google/cloud/appengine/v1/internal/applications_option_defaults.h"
#include "google/cloud/appengine/v1/internal/applications_stub_factory.h"
#include "google/cloud/appengine/v1/internal/applications_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApplicationsConnection::~ApplicationsConnection() = default;

StatusOr<google::appengine::v1::Application>
ApplicationsConnection::GetApplication(
    google::appengine::v1::GetApplicationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsConnection::CreateApplication(
    google::appengine::v1::CreateApplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Application>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsConnection::UpdateApplication(
    google::appengine::v1::UpdateApplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Application>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsConnection::RepairApplication(
    google::appengine::v1::RepairApplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Application>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ApplicationsConnection> MakeApplicationsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ApplicationsPolicyOptionList>(options,
                                                               __func__);
  options =
      appengine_v1_internal::ApplicationsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = appengine_v1_internal::CreateDefaultApplicationsStub(
      std::move(auth), options);
  return appengine_v1_internal::MakeApplicationsTracingConnection(
      std::make_shared<appengine_v1_internal::ApplicationsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google
