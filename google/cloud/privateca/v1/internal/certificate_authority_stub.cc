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

#include "google/cloud/privateca/v1/internal/certificate_authority_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/security/privateca/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace privateca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateAuthorityServiceStub::~CertificateAuthorityServiceStub() = default;

StatusOr<google::cloud::security::privateca::v1::Certificate>
DefaultCertificateAuthorityServiceStub::CreateCertificate(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::CreateCertificateRequest const&
        request) {
  google::cloud::security::privateca::v1::Certificate response;
  auto status = grpc_stub_->CreateCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
DefaultCertificateAuthorityServiceStub::GetCertificate(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::GetCertificateRequest const&
        request) {
  google::cloud::security::privateca::v1::Certificate response;
  auto status = grpc_stub_->GetCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::ListCertificatesResponse>
DefaultCertificateAuthorityServiceStub::ListCertificates(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::ListCertificatesRequest const&
        request) {
  google::cloud::security::privateca::v1::ListCertificatesResponse response;
  auto status = grpc_stub_->ListCertificates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
DefaultCertificateAuthorityServiceStub::RevokeCertificate(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&
        request) {
  google::cloud::security::privateca::v1::Certificate response;
  auto status = grpc_stub_->RevokeCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
DefaultCertificateAuthorityServiceStub::UpdateCertificate(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&
        request) {
  google::cloud::security::privateca::v1::Certificate response;
  auto status = grpc_stub_->UpdateCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncActivateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::security::privateca::v1::
                                        ActivateCertificateAuthorityRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 ActivateCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncActivateCertificateAuthority(context, request,
                                                             cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncCreateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::CreateCertificateAuthorityRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 CreateCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCertificateAuthority(context, request,
                                                           cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncDisableCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::security::privateca::v1::
                                        DisableCertificateAuthorityRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 DisableCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDisableCertificateAuthority(context, request,
                                                            cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncEnableCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::EnableCertificateAuthorityRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 EnableCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEnableCertificateAuthority(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
DefaultCertificateAuthorityServiceStub::FetchCertificateAuthorityCsr(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const& request) {
  google::cloud::security::privateca::v1::FetchCertificateAuthorityCsrResponse
      response;
  auto status =
      grpc_stub_->FetchCertificateAuthorityCsr(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
DefaultCertificateAuthorityServiceStub::GetCertificateAuthority(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const& request) {
  google::cloud::security::privateca::v1::CertificateAuthority response;
  auto status =
      grpc_stub_->GetCertificateAuthority(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::security::privateca::v1::ListCertificateAuthoritiesResponse>
DefaultCertificateAuthorityServiceStub::ListCertificateAuthorities(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::
        ListCertificateAuthoritiesRequest const& request) {
  google::cloud::security::privateca::v1::ListCertificateAuthoritiesResponse
      response;
  auto status =
      grpc_stub_->ListCertificateAuthorities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncUndeleteCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::security::privateca::v1::
                                        UndeleteCertificateAuthorityRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 UndeleteCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteCertificateAuthority(context, request,
                                                             cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncDeleteCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::DeleteCertificateAuthorityRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 DeleteCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCertificateAuthority(context, request,
                                                           cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncUpdateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::UpdateCertificateAuthorityRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateAuthorityRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCertificateAuthority(context, request,
                                                           cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncCreateCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::CreateCaPoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::CreateCaPoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCaPool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncUpdateCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::UpdateCaPoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCaPool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
DefaultCertificateAuthorityServiceStub::GetCaPool(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::GetCaPoolRequest const& request) {
  google::cloud::security::privateca::v1::CaPool response;
  auto status = grpc_stub_->GetCaPool(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::ListCaPoolsResponse>
DefaultCertificateAuthorityServiceStub::ListCaPools(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::ListCaPoolsRequest const& request) {
  google::cloud::security::privateca::v1::ListCaPoolsResponse response;
  auto status = grpc_stub_->ListCaPools(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncDeleteCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::DeleteCaPoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCaPool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
DefaultCertificateAuthorityServiceStub::FetchCaCerts(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::FetchCaCertsRequest const&
        request) {
  google::cloud::security::privateca::v1::FetchCaCertsResponse response;
  auto status = grpc_stub_->FetchCaCerts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
DefaultCertificateAuthorityServiceStub::GetCertificateRevocationList(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const& request) {
  google::cloud::security::privateca::v1::CertificateRevocationList response;
  auto status =
      grpc_stub_->GetCertificateRevocationList(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::security::privateca::v1::
             ListCertificateRevocationListsResponse>
DefaultCertificateAuthorityServiceStub::ListCertificateRevocationLists(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest const& request) {
  google::cloud::security::privateca::v1::ListCertificateRevocationListsResponse
      response;
  auto status =
      grpc_stub_->ListCertificateRevocationLists(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncUpdateCertificateRevocationList(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::security::privateca::v1::
                                        UpdateCertificateRevocationListRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateRevocationListRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCertificateRevocationList(context,
                                                                request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncCreateCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::CreateCertificateTemplateRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 CreateCertificateTemplateRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCertificateTemplate(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncDeleteCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::DeleteCertificateTemplateRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 DeleteCertificateTemplateRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCertificateTemplate(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
DefaultCertificateAuthorityServiceStub::GetCertificateTemplate(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::GetCertificateTemplateRequest const&
        request) {
  google::cloud::security::privateca::v1::CertificateTemplate response;
  auto status =
      grpc_stub_->GetCertificateTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::security::privateca::v1::ListCertificateTemplatesResponse>
DefaultCertificateAuthorityServiceStub::ListCertificateTemplates(
    grpc::ClientContext& context, Options const&,
    google::cloud::security::privateca::v1::
        ListCertificateTemplatesRequest const& request) {
  google::cloud::security::privateca::v1::ListCertificateTemplatesResponse
      response;
  auto status =
      grpc_stub_->ListCertificateTemplates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncUpdateCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::security::privateca::v1::UpdateCertificateTemplateRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateTemplateRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCertificateTemplate(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateAuthorityServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultCertificateAuthorityServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_v1_internal
}  // namespace cloud
}  // namespace google
