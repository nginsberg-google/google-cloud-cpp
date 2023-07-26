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
// source:
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClientConnectorServicesServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ClientConnectorServicesServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      ClientConnectorServicesServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListClientConnectorServices(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ListClientConnectorServicesRequest request);

  virtual google::cloud::Idempotency GetClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          GetClientConnectorServiceRequest const& request);

  virtual google::cloud::Idempotency CreateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          CreateClientConnectorServiceRequest const& request);

  virtual google::cloud::Idempotency UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          UpdateClientConnectorServiceRequest const& request);

  virtual google::cloud::Idempotency DeleteClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          DeleteClientConnectorServiceRequest const& request);
};

std::unique_ptr<ClientConnectorServicesServiceConnectionIdempotencyPolicy>
MakeDefaultClientConnectorServicesServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
