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
// source: google/cloud/compute/url_maps/v1/url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_INTERNAL_URL_MAPS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_INTERNAL_URL_MAPS_TRACING_CONNECTION_H

#include "google/cloud/compute/url_maps/v1/url_maps_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class UrlMapsTracingConnection : public compute_url_maps_v1::UrlMapsConnection {
 public:
  ~UrlMapsTracingConnection() override = default;

  explicit UrlMapsTracingConnection(
      std::shared_ptr<compute_url_maps_v1::UrlMapsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::UrlMapsAggregatedList>
  AggregatedListUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::
          AggregatedListUrlMapsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::GetUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::InsertUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InvalidateCache(
      google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::UrlMap> ListUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::ListUrlMapsRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::PatchUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse> Validate(
      google::cloud::cpp::compute::url_maps::v1::ValidateRequest const& request)
      override;

 private:
  std::shared_ptr<compute_url_maps_v1::UrlMapsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_url_maps_v1::UrlMapsConnection>
MakeUrlMapsTracingConnection(
    std::shared_ptr<compute_url_maps_v1::UrlMapsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_url_maps_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_INTERNAL_URL_MAPS_TRACING_CONNECTION_H
