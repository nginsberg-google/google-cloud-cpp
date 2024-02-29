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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/v1/internal/certificate_manager_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/certificatemanager/v1/certificate_manager.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace certificatemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateManagerStub::~CertificateManagerStub() = default;

StatusOr<google::cloud::certificatemanager::v1::ListCertificatesResponse>
DefaultCertificateManagerStub::ListCertificates(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::ListCertificatesRequest const&
        request) {
  google::cloud::certificatemanager::v1::ListCertificatesResponse response;
  auto status = grpc_stub_->ListCertificates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
DefaultCertificateManagerStub::GetCertificate(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::GetCertificateRequest const&
        request) {
  google::cloud::certificatemanager::v1::Certificate response;
  auto status = grpc_stub_->GetCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncCreateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::CreateCertificateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::certificatemanager::v1::CreateCertificateRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCertificate(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncUpdateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::UpdateCertificateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCertificate(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncDeleteCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::DeleteCertificateRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCertificate(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::certificatemanager::v1::ListCertificateMapsResponse>
DefaultCertificateManagerStub::ListCertificateMaps(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::ListCertificateMapsRequest const&
        request) {
  google::cloud::certificatemanager::v1::ListCertificateMapsResponse response;
  auto status = grpc_stub_->ListCertificateMaps(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
DefaultCertificateManagerStub::GetCertificateMap(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
        request) {
  google::cloud::certificatemanager::v1::CertificateMap response;
  auto status = grpc_stub_->GetCertificateMap(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncCreateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::CreateCertificateMapRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 CreateCertificateMapRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCertificateMap(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncUpdateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::UpdateCertificateMapRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 UpdateCertificateMapRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCertificateMap(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncDeleteCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::DeleteCertificateMapRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateMapRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCertificateMap(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<
    google::cloud::certificatemanager::v1::ListCertificateMapEntriesResponse>
DefaultCertificateManagerStub::ListCertificateMapEntries(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::
        ListCertificateMapEntriesRequest const& request) {
  google::cloud::certificatemanager::v1::ListCertificateMapEntriesResponse
      response;
  auto status =
      grpc_stub_->ListCertificateMapEntries(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
DefaultCertificateManagerStub::GetCertificateMapEntry(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest const&
        request) {
  google::cloud::certificatemanager::v1::CertificateMapEntry response;
  auto status =
      grpc_stub_->GetCertificateMapEntry(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncCreateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::CreateCertificateMapEntryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 CreateCertificateMapEntryRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCertificateMapEntry(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncUpdateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::UpdateCertificateMapEntryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 UpdateCertificateMapEntryRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCertificateMapEntry(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncDeleteCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::DeleteCertificateMapEntryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateMapEntryRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCertificateMapEntry(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::certificatemanager::v1::ListDnsAuthorizationsResponse>
DefaultCertificateManagerStub::ListDnsAuthorizations(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest const&
        request) {
  google::cloud::certificatemanager::v1::ListDnsAuthorizationsResponse response;
  auto status = grpc_stub_->ListDnsAuthorizations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
DefaultCertificateManagerStub::GetDnsAuthorization(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
        request) {
  google::cloud::certificatemanager::v1::DnsAuthorization response;
  auto status = grpc_stub_->GetDnsAuthorization(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncCreateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 CreateDnsAuthorizationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDnsAuthorization(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncUpdateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 UpdateDnsAuthorizationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDnsAuthorization(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncDeleteDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 DeleteDnsAuthorizationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDnsAuthorization(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::certificatemanager::v1::
             ListCertificateIssuanceConfigsResponse>
DefaultCertificateManagerStub::ListCertificateIssuanceConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::
        ListCertificateIssuanceConfigsRequest const& request) {
  google::cloud::certificatemanager::v1::ListCertificateIssuanceConfigsResponse
      response;
  auto status =
      grpc_stub_->ListCertificateIssuanceConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
DefaultCertificateManagerStub::GetCertificateIssuanceConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const& request) {
  google::cloud::certificatemanager::v1::CertificateIssuanceConfig response;
  auto status =
      grpc_stub_->GetCertificateIssuanceConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncCreateCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::certificatemanager::v1::
                                        CreateCertificateIssuanceConfigRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 CreateCertificateIssuanceConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCertificateIssuanceConfig(context,
                                                                request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncDeleteCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::certificatemanager::v1::
                                        DeleteCertificateIssuanceConfigRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateIssuanceConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCertificateIssuanceConfig(context,
                                                                request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCertificateManagerStub::AsyncGetOperation(
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

future<Status> DefaultCertificateManagerStub::AsyncCancelOperation(
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
}  // namespace certificatemanager_v1_internal
}  // namespace cloud
}  // namespace google
