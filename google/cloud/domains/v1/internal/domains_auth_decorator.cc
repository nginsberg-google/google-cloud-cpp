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
// source: google/cloud/domains/v1/domains.proto

#include "google/cloud/domains/v1/internal/domains_auth_decorator.h"
#include <google/cloud/domains/v1/domains.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainsAuth::DomainsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DomainsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
DomainsAuth::SearchDomains(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::SearchDomainsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchDomains(context, options, request);
}

StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
DomainsAuth::RetrieveRegisterParameters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetrieveRegisterParameters(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncRegisterDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::RegisterDomainRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRegisterDomain(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
DomainsAuth::RetrieveTransferParameters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::RetrieveTransferParametersRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetrieveTransferParameters(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncTransferDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::TransferDomainRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncTransferDomain(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::cloud::domains::v1::ListRegistrationsResponse>
DomainsAuth::ListRegistrations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::ListRegistrationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRegistrations(context, options, request);
}

StatusOr<google::cloud::domains::v1::Registration> DomainsAuth::GetRegistration(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::GetRegistrationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRegistration(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncUpdateRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::UpdateRegistrationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateRegistration(cq, *std::move(context),
                                              std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncConfigureManagementSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncConfigureManagementSettings(
            cq, *std::move(context), std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncConfigureDnsSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncConfigureDnsSettings(cq, *std::move(context),
                                                std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncConfigureContactSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::ConfigureContactSettingsRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncConfigureContactSettings(
            cq, *std::move(context), std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncExportRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::ExportRegistrationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportRegistration(cq, *std::move(context),
                                              std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DomainsAuth::AsyncDeleteRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::domains::v1::DeleteRegistrationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRegistration(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsAuth::RetrieveAuthorizationCode(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetrieveAuthorizationCode(context, options, request);
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsAuth::ResetAuthorizationCode(
    grpc::ClientContext& context, Options const& options,
    google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResetAuthorizationCode(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> DomainsAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> DomainsAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google
