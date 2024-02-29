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
// source: google/cloud/ids/v1/ids.proto

#include "google/cloud/ids/v1/ids_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace ids_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IDSClient::IDSClient(std::shared_ptr<IDSConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
IDSClient::~IDSClient() = default;

StreamRange<google::cloud::ids::v1::Endpoint> IDSClient::ListEndpoints(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::ids::v1::ListEndpointsRequest request;
  request.set_parent(parent);
  return connection_->ListEndpoints(request);
}

StreamRange<google::cloud::ids::v1::Endpoint> IDSClient::ListEndpoints(
    google::cloud::ids::v1::ListEndpointsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEndpoints(std::move(request));
}

StatusOr<google::cloud::ids::v1::Endpoint> IDSClient::GetEndpoint(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::ids::v1::GetEndpointRequest request;
  request.set_name(name);
  return connection_->GetEndpoint(request);
}

StatusOr<google::cloud::ids::v1::Endpoint> IDSClient::GetEndpoint(
    google::cloud::ids::v1::GetEndpointRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEndpoint(request);
}

future<StatusOr<google::cloud::ids::v1::Endpoint>> IDSClient::CreateEndpoint(
    std::string const& parent, google::cloud::ids::v1::Endpoint const& endpoint,
    std::string const& endpoint_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::ids::v1::CreateEndpointRequest request;
  request.set_parent(parent);
  *request.mutable_endpoint() = endpoint;
  request.set_endpoint_id(endpoint_id);
  return connection_->CreateEndpoint(request);
}

future<StatusOr<google::cloud::ids::v1::Endpoint>> IDSClient::CreateEndpoint(
    google::cloud::ids::v1::CreateEndpointRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEndpoint(request);
}

future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
IDSClient::DeleteEndpoint(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::ids::v1::DeleteEndpointRequest request;
  request.set_name(name);
  return connection_->DeleteEndpoint(request);
}

future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
IDSClient::DeleteEndpoint(
    google::cloud::ids::v1::DeleteEndpointRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEndpoint(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1
}  // namespace cloud
}  // namespace google
