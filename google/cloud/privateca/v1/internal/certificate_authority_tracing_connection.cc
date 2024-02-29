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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/v1/internal/certificate_authority_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace privateca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CertificateAuthorityServiceTracingConnection::
    CertificateAuthorityServiceTracingConnection(
        std::shared_ptr<privateca_v1::CertificateAuthorityServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceTracingConnection::CreateCertificate(
    google::cloud::security::privateca::v1::CreateCertificateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::CreateCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateCertificate(request));
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceTracingConnection::GetCertificate(
    google::cloud::security::privateca::v1::GetCertificateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::GetCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCertificate(request));
}

StreamRange<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceTracingConnection::ListCertificates(
    google::cloud::security::privateca::v1::ListCertificatesRequest request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::ListCertificates");
  internal::OTelScope scope(span);
  auto sr = child_->ListCertificates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::security::privateca::v1::Certificate>(std::move(span),
                                                           std::move(sr));
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceTracingConnection::RevokeCertificate(
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::RevokeCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RevokeCertificate(request));
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceTracingConnection::UpdateCertificate(
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::UpdateCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateCertificate(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::ActivateCertificateAuthority(
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "ActivateCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ActivateCertificateAuthority(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::CreateCertificateAuthority(
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "CreateCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateCertificateAuthority(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::DisableCertificateAuthority(
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "DisableCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DisableCertificateAuthority(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::EnableCertificateAuthority(
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "EnableCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->EnableCertificateAuthority(request));
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceTracingConnection::FetchCertificateAuthorityCsr(
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "FetchCertificateAuthorityCsr");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->FetchCertificateAuthorityCsr(request));
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceTracingConnection::GetCertificateAuthority(
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "GetCertificateAuthority");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCertificateAuthority(request));
}

StreamRange<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceTracingConnection::ListCertificateAuthorities(
    google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "ListCertificateAuthorities");
  internal::OTelScope scope(span);
  auto sr = child_->ListCertificateAuthorities(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::UndeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "UndeleteCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeleteCertificateAuthority(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::DeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "DeleteCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteCertificateAuthority(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceTracingConnection::UpdateCertificateAuthority(
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "UpdateCertificateAuthority");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateCertificateAuthority(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceTracingConnection::CreateCaPool(
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::CreateCaPool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCaPool(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceTracingConnection::UpdateCaPool(
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::UpdateCaPool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCaPool(request));
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceTracingConnection::GetCaPool(
    google::cloud::security::privateca::v1::GetCaPoolRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::GetCaPool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCaPool(request));
}

StreamRange<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceTracingConnection::ListCaPools(
    google::cloud::security::privateca::v1::ListCaPoolsRequest request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::ListCaPools");
  internal::OTelScope scope(span);
  auto sr = child_->ListCaPools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::security::privateca::v1::CaPool>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceTracingConnection::DeleteCaPool(
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::DeleteCaPool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCaPool(request));
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceTracingConnection::FetchCaCerts(
    google::cloud::security::privateca::v1::FetchCaCertsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::FetchCaCerts");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->FetchCaCerts(request));
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceTracingConnection::GetCertificateRevocationList(
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "GetCertificateRevocationList");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetCertificateRevocationList(request));
}

StreamRange<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceTracingConnection::ListCertificateRevocationLists(
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "ListCertificateRevocationLists");
  internal::OTelScope scope(span);
  auto sr = child_->ListCertificateRevocationLists(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::security::privateca::v1::CertificateRevocationList>(
      std::move(span), std::move(sr));
}

future<
    StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>>
CertificateAuthorityServiceTracingConnection::UpdateCertificateRevocationList(
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "UpdateCertificateRevocationList");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateCertificateRevocationList(request));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceTracingConnection::CreateCertificateTemplate(
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "CreateCertificateTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateCertificateTemplate(request));
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceTracingConnection::DeleteCertificateTemplate(
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "DeleteCertificateTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteCertificateTemplate(request));
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceTracingConnection::GetCertificateTemplate(
    google::cloud::security::privateca::v1::GetCertificateTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "GetCertificateTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCertificateTemplate(request));
}

StreamRange<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceTracingConnection::ListCertificateTemplates(
    google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
        request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "ListCertificateTemplates");
  internal::OTelScope scope(span);
  auto sr = child_->ListCertificateTemplates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::security::privateca::v1::CertificateTemplate>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceTracingConnection::UpdateCertificateTemplate(
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "privateca_v1::CertificateAuthorityServiceConnection::"
      "UpdateCertificateTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateCertificateTemplate(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<privateca_v1::CertificateAuthorityServiceConnection>
MakeCertificateAuthorityServiceTracingConnection(
    std::shared_ptr<privateca_v1::CertificateAuthorityServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CertificateAuthorityServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_v1_internal
}  // namespace cloud
}  // namespace google
