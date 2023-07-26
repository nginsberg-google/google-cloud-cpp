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
// source: google/cloud/dialogflow/v2/document.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/document.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentsConnectionIdempotencyPolicy {
 public:
  virtual ~DocumentsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DocumentsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListDocuments(
      google::cloud::dialogflow::v2::ListDocumentsRequest request);

  virtual google::cloud::Idempotency GetDocument(
      google::cloud::dialogflow::v2::GetDocumentRequest const& request);

  virtual google::cloud::Idempotency CreateDocument(
      google::cloud::dialogflow::v2::CreateDocumentRequest const& request);

  virtual google::cloud::Idempotency ImportDocuments(
      google::cloud::dialogflow::v2::ImportDocumentsRequest const& request);

  virtual google::cloud::Idempotency DeleteDocument(
      google::cloud::dialogflow::v2::DeleteDocumentRequest const& request);

  virtual google::cloud::Idempotency UpdateDocument(
      google::cloud::dialogflow::v2::UpdateDocumentRequest const& request);

  virtual google::cloud::Idempotency ReloadDocument(
      google::cloud::dialogflow::v2::ReloadDocumentRequest const& request);

  virtual google::cloud::Idempotency ExportDocument(
      google::cloud::dialogflow::v2::ExportDocumentRequest const& request);
};

std::unique_ptr<DocumentsConnectionIdempotencyPolicy>
MakeDefaultDocumentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
