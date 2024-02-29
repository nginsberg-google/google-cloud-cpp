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
// source: google/monitoring/v3/metric_service.proto

#include "google/cloud/monitoring/v3/internal/metric_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/v3/metric_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricServiceMetadata::MetricServiceMetadata(
    std::shared_ptr<MetricServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::monitoring::v3::ListMonitoredResourceDescriptorsResponse>
MetricServiceMetadata::ListMonitoredResourceDescriptors(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListMonitoredResourceDescriptorsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListMonitoredResourceDescriptors(context, options, request);
}

StatusOr<google::api::MonitoredResourceDescriptor>
MetricServiceMetadata::GetMonitoredResourceDescriptor(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMonitoredResourceDescriptor(context, options, request);
}

StatusOr<google::monitoring::v3::ListMetricDescriptorsResponse>
MetricServiceMetadata::ListMetricDescriptors(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListMetricDescriptorsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListMetricDescriptors(context, options, request);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceMetadata::GetMetricDescriptor(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::GetMetricDescriptorRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetricDescriptor(context, options, request);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceMetadata::CreateMetricDescriptor(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateMetricDescriptorRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateMetricDescriptor(context, options, request);
}

Status MetricServiceMetadata::DeleteMetricDescriptor(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::DeleteMetricDescriptorRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteMetricDescriptor(context, options, request);
}

StatusOr<google::monitoring::v3::ListTimeSeriesResponse>
MetricServiceMetadata::ListTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::ListTimeSeriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListTimeSeries(context, options, request);
}

Status MetricServiceMetadata::CreateTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateTimeSeries(context, options, request);
}

Status MetricServiceMetadata::CreateServiceTimeSeries(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CreateServiceTimeSeries(context, options, request);
}

future<Status> MetricServiceMetadata::AsyncCreateTimeSeries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  SetMetadata(*context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCreateTimeSeries(cq, std::move(context), request);
}

void MetricServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void MetricServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
