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
// source: google/cloud/aiplatform/v1/featurestore_online_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_online_serving_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FeaturestoreOnlineServingServiceTracingConnection::
    FeaturestoreOnlineServingServiceTracingConnection(
        std::shared_ptr<
            aiplatform_v1::FeaturestoreOnlineServingServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceTracingConnection::ReadFeatureValues(
    google::cloud::aiplatform::v1::ReadFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreOnlineServingServiceConnection::"
      "ReadFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ReadFeatureValues(request));
}

StreamRange<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceTracingConnection::StreamingReadFeatureValues(
    google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreOnlineServingServiceConnection::"
      "StreamingReadFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->StreamingReadFeatureValues(request);
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::ReadFeatureValuesResponse>(std::move(span),
                                                                std::move(sr));
}
StatusOr<google::cloud::aiplatform::v1::WriteFeatureValuesResponse>
FeaturestoreOnlineServingServiceTracingConnection::WriteFeatureValues(
    google::cloud::aiplatform::v1::WriteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreOnlineServingServiceConnection::"
      "WriteFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->WriteFeatureValues(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::FeaturestoreOnlineServingServiceConnection>
MakeFeaturestoreOnlineServingServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeaturestoreOnlineServingServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<FeaturestoreOnlineServingServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
