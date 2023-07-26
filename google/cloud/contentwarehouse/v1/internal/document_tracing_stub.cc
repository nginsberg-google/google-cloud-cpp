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

#include "google/cloud/contentwarehouse/v1/internal/document_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentServiceTracingStub::DocumentServiceTracingStub(
    std::shared_ptr<DocumentServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
DocumentServiceTracingStub::CreateDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::CreateDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "CreateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateDocument(context, request));
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceTracingStub::GetDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::GetDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "GetDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetDocument(context, request));
}

StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
DocumentServiceTracingStub::UpdateDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::UpdateDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "UpdateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateDocument(context, request));
}

Status DocumentServiceTracingStub::DeleteDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::DeleteDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "DeleteDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteDocument(context, request));
}

StatusOr<google::cloud::contentwarehouse::v1::SearchDocumentsResponse>
DocumentServiceTracingStub::SearchDocuments(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::SearchDocumentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "SearchDocuments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SearchDocuments(context, request));
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceTracingStub::LockDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::LockDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "LockDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->LockDocument(context, request));
}

StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse>
DocumentServiceTracingStub::FetchAcl(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::FetchAclRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "FetchAcl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->FetchAcl(context, request));
}

StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse>
DocumentServiceTracingStub::SetAcl(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::SetAclRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentService", "SetAcl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->SetAcl(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DocumentServiceStub> MakeDocumentServiceTracingStub(
    std::shared_ptr<DocumentServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DocumentServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
