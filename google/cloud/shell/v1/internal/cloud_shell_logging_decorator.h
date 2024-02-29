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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_INTERNAL_CLOUD_SHELL_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_INTERNAL_CLOUD_SHELL_LOGGING_DECORATOR_H

#include "google/cloud/shell/v1/internal/cloud_shell_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace shell_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudShellServiceLogging : public CloudShellServiceStub {
 public:
  ~CloudShellServiceLogging() override = default;
  CloudShellServiceLogging(std::shared_ptr<CloudShellServiceStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components);

  StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::shell::v1::GetEnvironmentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::StartEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAuthorizeEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddPublicKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::AddPublicKeyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemovePublicKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CloudShellServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // CloudShellServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_INTERNAL_CLOUD_SHELL_LOGGING_DECORATOR_H
