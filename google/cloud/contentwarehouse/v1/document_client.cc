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
// source: google/cloud/contentwarehouse/v1/document_service.proto

#include "google/cloud/contentwarehouse/v1/document_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentServiceClient::DocumentServiceClient(
    std::shared_ptr<DocumentServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DocumentServiceClient::~DocumentServiceClient() = default;

StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
DocumentServiceClient::CreateDocument(
    std::string const& parent,
    google::cloud::contentwarehouse::v1::Document const& document,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::CreateDocumentRequest request;
  request.set_parent(parent);
  *request.mutable_document() = document;
  return connection_->CreateDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
DocumentServiceClient::CreateDocument(
    google::cloud::contentwarehouse::v1::CreateDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceClient::GetDocument(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::GetDocumentRequest request;
  request.set_name(name);
  return connection_->GetDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceClient::GetDocument(
    google::cloud::contentwarehouse::v1::GetDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
DocumentServiceClient::UpdateDocument(
    std::string const& name,
    google::cloud::contentwarehouse::v1::Document const& document,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::UpdateDocumentRequest request;
  request.set_name(name);
  *request.mutable_document() = document;
  return connection_->UpdateDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
DocumentServiceClient::UpdateDocument(
    google::cloud::contentwarehouse::v1::UpdateDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDocument(request);
}

Status DocumentServiceClient::DeleteDocument(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::DeleteDocumentRequest request;
  request.set_name(name);
  return connection_->DeleteDocument(request);
}

Status DocumentServiceClient::DeleteDocument(
    google::cloud::contentwarehouse::v1::DeleteDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDocument(request);
}

StreamRange<google::cloud::contentwarehouse::v1::SearchDocumentsResponse::
                MatchingDocument>
DocumentServiceClient::SearchDocuments(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::SearchDocumentsRequest request;
  request.set_parent(parent);
  return connection_->SearchDocuments(request);
}

StreamRange<google::cloud::contentwarehouse::v1::SearchDocumentsResponse::
                MatchingDocument>
DocumentServiceClient::SearchDocuments(
    google::cloud::contentwarehouse::v1::SearchDocumentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchDocuments(std::move(request));
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceClient::LockDocument(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::LockDocumentRequest request;
  request.set_name(name);
  return connection_->LockDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceClient::LockDocument(
    google::cloud::contentwarehouse::v1::LockDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LockDocument(request);
}

StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse>
DocumentServiceClient::FetchAcl(std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::FetchAclRequest request;
  request.set_resource(resource);
  return connection_->FetchAcl(request);
}

StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse>
DocumentServiceClient::FetchAcl(
    google::cloud::contentwarehouse::v1::FetchAclRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchAcl(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse>
DocumentServiceClient::SetAcl(std::string const& resource,
                              google::iam::v1::Policy const& policy,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::SetAclRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetAcl(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse>
DocumentServiceClient::SetAcl(
    google::cloud::contentwarehouse::v1::SetAclRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetAcl(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google
