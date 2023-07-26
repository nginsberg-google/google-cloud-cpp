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
// source: google/cloud/networksecurity/v1/network_security.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_INTERNAL_NETWORK_SECURITY_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_INTERNAL_NETWORK_SECURITY_LOGGING_DECORATOR_H

#include "google/cloud/networksecurity/v1/internal/network_security_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkSecurityLogging : public NetworkSecurityStub {
 public:
  ~NetworkSecurityLogging() override = default;
  NetworkSecurityLogging(std::shared_ptr<NetworkSecurityStub> child,
                         TracingOptions tracing_options,
                         std::set<std::string> const& components);

  StatusOr<
      google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
  ListAuthorizationPolicies(
      grpc::ClientContext& context,
      google::cloud::networksecurity::v1::
          ListAuthorizationPoliciesRequest const& request) override;

  StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
  GetAuthorizationPolicy(
      grpc::ClientContext& context,
      google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAuthorizationPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::
          CreateAuthorizationPolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAuthorizationPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::
          UpdateAuthorizationPolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAuthorizationPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::
          DeleteAuthorizationPolicyRequest const& request) override;

  StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
  ListServerTlsPolicies(
      grpc::ClientContext& context,
      google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
          request) override;

  StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
  GetServerTlsPolicy(
      grpc::ClientContext& context,
      google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateServerTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateServerTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteServerTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request) override;

  StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
  ListClientTlsPolicies(
      grpc::ClientContext& context,
      google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
          request) override;

  StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
  GetClientTlsPolicy(
      grpc::ClientContext& context,
      google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateClientTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateClientTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteClientTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<NetworkSecurityStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // NetworkSecurityLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_INTERNAL_NETWORK_SECURITY_LOGGING_DECORATOR_H
