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
// source: google/cloud/domains/v1/domains.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_TRACING_CONNECTION_H

#include "google/cloud/domains/v1/domains_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DomainsTracingConnection : public domains_v1::DomainsConnection {
 public:
  ~DomainsTracingConnection() override = default;

  explicit DomainsTracingConnection(
      std::shared_ptr<domains_v1::DomainsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::domains::v1::SearchDomainsResponse> SearchDomains(
      google::cloud::domains::v1::SearchDomainsRequest const& request) override;

  StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
  RetrieveRegisterParameters(
      google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
          request) override;

  future<StatusOr<google::cloud::domains::v1::Registration>> RegisterDomain(
      google::cloud::domains::v1::RegisterDomainRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
  RetrieveTransferParameters(
      google::cloud::domains::v1::RetrieveTransferParametersRequest const&
          request) override;

  future<StatusOr<google::cloud::domains::v1::Registration>> TransferDomain(
      google::cloud::domains::v1::TransferDomainRequest const& request)
      override;

  StreamRange<google::cloud::domains::v1::Registration> ListRegistrations(
      google::cloud::domains::v1::ListRegistrationsRequest request) override;

  StatusOr<google::cloud::domains::v1::Registration> GetRegistration(
      google::cloud::domains::v1::GetRegistrationRequest const& request)
      override;

  future<StatusOr<google::cloud::domains::v1::Registration>> UpdateRegistration(
      google::cloud::domains::v1::UpdateRegistrationRequest const& request)
      override;

  future<StatusOr<google::cloud::domains::v1::Registration>>
  ConfigureManagementSettings(
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request) override;

  future<StatusOr<google::cloud::domains::v1::Registration>>
  ConfigureDnsSettings(
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request)
      override;

  future<StatusOr<google::cloud::domains::v1::Registration>>
  ConfigureContactSettings(
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request) override;

  future<StatusOr<google::cloud::domains::v1::Registration>> ExportRegistration(
      google::cloud::domains::v1::ExportRegistrationRequest const& request)
      override;

  future<StatusOr<google::cloud::domains::v1::OperationMetadata>>
  DeleteRegistration(
      google::cloud::domains::v1::DeleteRegistrationRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::AuthorizationCode>
  RetrieveAuthorizationCode(
      google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
          request) override;

  StatusOr<google::cloud::domains::v1::AuthorizationCode>
  ResetAuthorizationCode(
      google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request)
      override;

 private:
  std::shared_ptr<domains_v1::DomainsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<domains_v1::DomainsConnection> MakeDomainsTracingConnection(
    std::shared_ptr<domains_v1::DomainsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_TRACING_CONNECTION_H
