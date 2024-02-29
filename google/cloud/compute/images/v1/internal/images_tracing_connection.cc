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
// source: google/cloud/compute/images/v1/images.proto

#include "google/cloud/compute/images/v1/internal/images_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ImagesTracingConnection::ImagesTracingConnection(
    std::shared_ptr<compute_images_v1::ImagesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesTracingConnection::DeleteImage(
    google::cloud::cpp::compute::images::v1::DeleteImageRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::DeleteImage");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteImage(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesTracingConnection::Deprecate(
    google::cloud::cpp::compute::images::v1::DeprecateRequest const& request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::Deprecate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Deprecate(request));
}

StatusOr<google::cloud::cpp::compute::v1::Image>
ImagesTracingConnection::GetImage(
    google::cloud::cpp::compute::images::v1::GetImageRequest const& request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::GetImage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetImage(request));
}

StatusOr<google::cloud::cpp::compute::v1::Image>
ImagesTracingConnection::GetFromFamily(
    google::cloud::cpp::compute::images::v1::GetFromFamilyRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::GetFromFamily");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFromFamily(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ImagesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::images::v1::GetIamPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesTracingConnection::InsertImage(
    google::cloud::cpp::compute::images::v1::InsertImageRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::InsertImage");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertImage(request));
}

StreamRange<google::cloud::cpp::compute::v1::Image>
ImagesTracingConnection::ListImages(
    google::cloud::cpp::compute::images::v1::ListImagesRequest request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::ListImages");
  internal::OTelScope scope(span);
  auto sr = child_->ListImages(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Image>(std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesTracingConnection::PatchImage(
    google::cloud::cpp::compute::images::v1::PatchImageRequest const& request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::PatchImage");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchImage(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ImagesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::images::v1::SetIamPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesTracingConnection::SetLabels(
    google::cloud::cpp::compute::images::v1::SetLabelsRequest const& request) {
  auto span =
      internal::MakeSpan("compute_images_v1::ImagesConnection::SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ImagesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_images_v1::ImagesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_images_v1::ImagesConnection>
MakeImagesTracingConnection(
    std::shared_ptr<compute_images_v1::ImagesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ImagesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_images_v1_internal
}  // namespace cloud
}  // namespace google
