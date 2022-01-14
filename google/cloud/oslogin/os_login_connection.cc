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
// source: google/cloud/oslogin/v1/oslogin.proto

#include "google/cloud/oslogin/os_login_connection.h"
#include "google/cloud/oslogin/internal/os_login_option_defaults.h"
#include "google/cloud/oslogin/internal/os_login_stub_factory.h"
#include "google/cloud/oslogin/os_login_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace oslogin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsLoginServiceConnection::~OsLoginServiceConnection() = default;

Status OsLoginServiceConnection::DeletePosixAccount(
    google::cloud::oslogin::v1::DeletePosixAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status OsLoginServiceConnection::DeleteSshPublicKey(
    google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::oslogin::v1::LoginProfile>
OsLoginServiceConnection::GetLoginProfile(
    google::cloud::oslogin::v1::GetLoginProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceConnection::GetSshPublicKey(
    google::cloud::oslogin::v1::GetSshPublicKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceConnection::ImportSshPublicKey(
    google::cloud::oslogin::v1::ImportSshPublicKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceConnection::UpdateSshPublicKey(
    google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class OsLoginServiceConnectionImpl : public OsLoginServiceConnection {
 public:
  OsLoginServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<oslogin_internal::OsLoginServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<OsLoginServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<OsLoginServiceBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<OsLoginServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~OsLoginServiceConnectionImpl() override = default;

  Status DeletePosixAccount(
      google::cloud::oslogin::v1::DeletePosixAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeletePosixAccount(request),
        [this](grpc::ClientContext& context,
               google::cloud::oslogin::v1::DeletePosixAccountRequest const&
                   request) {
          return stub_->DeletePosixAccount(context, request);
        },
        request, __func__);
  }

  Status DeleteSshPublicKey(
      google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteSshPublicKey(request),
        [this](grpc::ClientContext& context,
               google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const&
                   request) {
          return stub_->DeleteSshPublicKey(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      google::cloud::oslogin::v1::GetLoginProfileRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetLoginProfile(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::oslogin::v1::GetLoginProfileRequest const& request) {
          return stub_->GetLoginProfile(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::oslogin::common::SshPublicKey> GetSshPublicKey(
      google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetSshPublicKey(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request) {
          return stub_->GetSshPublicKey(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ImportSshPublicKey(request),
        [this](grpc::ClientContext& context,
               google::cloud::oslogin::v1::ImportSshPublicKeyRequest const&
                   request) {
          return stub_->ImportSshPublicKey(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::oslogin::common::SshPublicKey> UpdateSshPublicKey(
      google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateSshPublicKey(request),
        [this](grpc::ClientContext& context,
               google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const&
                   request) {
          return stub_->UpdateSshPublicKey(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<oslogin_internal::OsLoginServiceStub> stub_;
  std::unique_ptr<OsLoginServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<OsLoginServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<OsLoginServiceConnection> MakeOsLoginServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 OsLoginServicePolicyOptionList>(options,
                                                                 __func__);
  options = oslogin_internal::OsLoginServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = oslogin_internal::CreateDefaultOsLoginServiceStub(
      background->cq(), options);
  return std::make_shared<OsLoginServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace oslogin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<oslogin::OsLoginServiceConnection> MakeOsLoginServiceConnection(
    std::shared_ptr<OsLoginServiceStub> stub, Options options) {
  options = OsLoginServiceDefaultOptions(std::move(options));
  return std::make_shared<oslogin::OsLoginServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_internal
}  // namespace cloud
}  // namespace google
