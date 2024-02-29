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
// source: google/cloud/kms/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_INTERNAL_KEY_MANAGEMENT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_INTERNAL_KEY_MANAGEMENT_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/kms/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class KeyManagementServiceStub {
 public:
  virtual ~KeyManagementServiceStub() = 0;

  virtual StatusOr<google::cloud::kms::v1::ListKeyRingsResponse> ListKeyRings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListKeyRingsRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse>
  ListCryptoKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListCryptoKeysRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
  ListCryptoKeyVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::ListImportJobsResponse>
  ListImportJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListImportJobsRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::KeyRing> GetKeyRing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetKeyRingRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKey> GetCryptoKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetCryptoKeyRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
  GetCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::PublicKey> GetPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetPublicKeyRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::ImportJob> GetImportJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetImportJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::KeyRing> CreateKeyRing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateKeyRingRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKey> CreateCryptoKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateCryptoKeyRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
  CreateCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
  ImportCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::ImportJob> CreateImportJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateImportJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKey> UpdateCryptoKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
  UpdateCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKey>
  UpdateCryptoKeyPrimaryVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
  DestroyCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
  RestoreCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::kms::v1::EncryptResponse> Encrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::EncryptRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::DecryptResponse> Decrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::DecryptRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::RawEncryptResponse> RawEncrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::RawEncryptRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::RawDecryptResponse> RawDecrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::RawDecryptRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
  AsymmetricSign(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::AsymmetricSignRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
  AsymmetricDecrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::AsymmetricDecryptRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::MacSignResponse> MacSign(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::MacSignRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::MacVerifyResponse> MacVerify(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::MacVerifyRequest const& request) = 0;

  virtual StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
  GenerateRandomBytes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GenerateRandomBytesRequest const& request) = 0;
};

class DefaultKeyManagementServiceStub : public KeyManagementServiceStub {
 public:
  explicit DefaultKeyManagementServiceStub(
      std::unique_ptr<
          google::cloud::kms::v1::KeyManagementService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::kms::v1::ListKeyRingsResponse> ListKeyRings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListKeyRingsRequest const& request) override;

  StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse> ListCryptoKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListCryptoKeysRequest const& request) override;

  StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
  ListCryptoKeyVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::ListImportJobsResponse> ListImportJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ListImportJobsRequest const& request) override;

  StatusOr<google::cloud::kms::v1::KeyRing> GetKeyRing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetKeyRingRequest const& request) override;

  StatusOr<google::cloud::kms::v1::CryptoKey> GetCryptoKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetCryptoKeyRequest const& request) override;

  StatusOr<google::cloud::kms::v1::CryptoKeyVersion> GetCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::PublicKey> GetPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetPublicKeyRequest const& request) override;

  StatusOr<google::cloud::kms::v1::ImportJob> GetImportJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::GetImportJobRequest const& request) override;

  StatusOr<google::cloud::kms::v1::KeyRing> CreateKeyRing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateKeyRingRequest const& request) override;

  StatusOr<google::cloud::kms::v1::CryptoKey> CreateCryptoKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateCryptoKeyRequest const& request) override;

  StatusOr<google::cloud::kms::v1::CryptoKeyVersion> CreateCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::CryptoKeyVersion> ImportCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::ImportJob> CreateImportJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::CreateImportJobRequest const& request) override;

  StatusOr<google::cloud::kms::v1::CryptoKey> UpdateCryptoKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) override;

  StatusOr<google::cloud::kms::v1::CryptoKeyVersion> UpdateCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::CryptoKey> UpdateCryptoKeyPrimaryVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
          request) override;

  StatusOr<google::cloud::kms::v1::CryptoKeyVersion> DestroyCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::CryptoKeyVersion> RestoreCryptoKeyVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request)
      override;

  StatusOr<google::cloud::kms::v1::EncryptResponse> Encrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::EncryptRequest const& request) override;

  StatusOr<google::cloud::kms::v1::DecryptResponse> Decrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::DecryptRequest const& request) override;

  StatusOr<google::cloud::kms::v1::RawEncryptResponse> RawEncrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::RawEncryptRequest const& request) override;

  StatusOr<google::cloud::kms::v1::RawDecryptResponse> RawDecrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::RawDecryptRequest const& request) override;

  StatusOr<google::cloud::kms::v1::AsymmetricSignResponse> AsymmetricSign(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::AsymmetricSignRequest const& request) override;

  StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse> AsymmetricDecrypt(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::AsymmetricDecryptRequest const& request) override;

  StatusOr<google::cloud::kms::v1::MacSignResponse> MacSign(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::MacSignRequest const& request) override;

  StatusOr<google::cloud::kms::v1::MacVerifyResponse> MacVerify(
      grpc::ClientContext& context, Options const& options,
      google::cloud::kms::v1::MacVerifyRequest const& request) override;

  StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
  GenerateRandomBytes(grpc::ClientContext& context, Options const& options,
                      google::cloud::kms::v1::GenerateRandomBytesRequest const&
                          request) override;

 private:
  std::unique_ptr<google::cloud::kms::v1::KeyManagementService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_INTERNAL_KEY_MANAGEMENT_STUB_H
