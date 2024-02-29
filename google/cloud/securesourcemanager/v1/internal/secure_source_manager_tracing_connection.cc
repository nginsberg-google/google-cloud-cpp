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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securesourcemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecureSourceManagerTracingConnection::SecureSourceManagerTracingConnection(
    std::shared_ptr<securesourcemanager_v1::SecureSourceManagerConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerTracingConnection::ListInstances(
    google::cloud::securesourcemanager::v1::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securesourcemanager::v1::Instance>(std::move(span),
                                                        std::move(sr));
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerTracingConnection::GetInstance(
    google::cloud::securesourcemanager::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerTracingConnection::CreateInstance(
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerTracingConnection::DeleteInstance(
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

StreamRange<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerTracingConnection::ListRepositories(
    google::cloud::securesourcemanager::v1::ListRepositoriesRequest request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::"
      "ListRepositories");
  internal::OTelScope scope(span);
  auto sr = child_->ListRepositories(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securesourcemanager::v1::Repository>(std::move(span),
                                                          std::move(sr));
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerTracingConnection::GetRepository(
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::GetRepository");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRepository(request));
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerTracingConnection::CreateRepository(
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::"
      "CreateRepository");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRepository(request));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerTracingConnection::DeleteRepository(
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::"
      "DeleteRepository");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRepository(request));
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerTracingConnection::GetIamPolicyRepo(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::"
      "GetIamPolicyRepo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicyRepo(request));
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerTracingConnection::SetIamPolicyRepo(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::"
      "SetIamPolicyRepo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicyRepo(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerTracingConnection::TestIamPermissionsRepo(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "securesourcemanager_v1::SecureSourceManagerConnection::"
      "TestIamPermissionsRepo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissionsRepo(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<securesourcemanager_v1::SecureSourceManagerConnection>
MakeSecureSourceManagerTracingConnection(
    std::shared_ptr<securesourcemanager_v1::SecureSourceManagerConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<SecureSourceManagerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1_internal
}  // namespace cloud
}  // namespace google
