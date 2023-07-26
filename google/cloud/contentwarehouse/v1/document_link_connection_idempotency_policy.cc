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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#include "google/cloud/contentwarehouse/v1/document_link_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DocumentLinkServiceConnectionIdempotencyPolicy::
    ~DocumentLinkServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<DocumentLinkServiceConnectionIdempotencyPolicy>
DocumentLinkServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DocumentLinkServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency DocumentLinkServiceConnectionIdempotencyPolicy::ListLinkedTargets(
    google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentLinkServiceConnectionIdempotencyPolicy::ListLinkedSources(
    google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentLinkServiceConnectionIdempotencyPolicy::CreateDocumentLink(
    google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentLinkServiceConnectionIdempotencyPolicy::DeleteDocumentLink(
    google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<DocumentLinkServiceConnectionIdempotencyPolicy>
MakeDefaultDocumentLinkServiceConnectionIdempotencyPolicy() {
  return std::make_unique<DocumentLinkServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google
