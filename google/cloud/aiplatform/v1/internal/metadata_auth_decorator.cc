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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#include "google/cloud/aiplatform/v1/internal/metadata_auth_decorator.h"
#include <google/cloud/aiplatform/v1/metadata_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetadataServiceAuth::MetadataServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<MetadataServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncCreateMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateMetadataStore(cq, *std::move(context),
                                               request);
      });
}

StatusOr<google::cloud::aiplatform::v1::MetadataStore>
MetadataServiceAuth::GetMetadataStore(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMetadataStore(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataStoresResponse>
MetadataServiceAuth::ListMetadataStores(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListMetadataStoresRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMetadataStores(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncDeleteMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteMetadataStore(cq, *std::move(context),
                                               request);
      });
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceAuth::CreateArtifact(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateArtifact(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceAuth::GetArtifact(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetArtifact(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListArtifactsResponse>
MetadataServiceAuth::ListArtifacts(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListArtifactsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListArtifacts(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceAuth::UpdateArtifact(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateArtifact(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncDeleteArtifact(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteArtifact(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncPurgeArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPurgeArtifacts(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceAuth::CreateContext(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateContext(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceAuth::GetContext(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetContext(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListContextsResponse>
MetadataServiceAuth::ListContexts(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListContextsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListContexts(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceAuth::UpdateContext(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateContext(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncDeleteContext(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteContext(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncPurgeContexts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPurgeContexts(cq, *std::move(context), request);
      });
}

StatusOr<
    google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
MetadataServiceAuth::AddContextArtifactsAndExecutions(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::
        AddContextArtifactsAndExecutionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddContextArtifactsAndExecutions(context, request);
}

StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
MetadataServiceAuth::AddContextChildren(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::AddContextChildrenRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddContextChildren(context, request);
}

StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
MetadataServiceAuth::RemoveContextChildren(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RemoveContextChildren(context, request);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceAuth::QueryContextLineageSubgraph(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryContextLineageSubgraph(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceAuth::CreateExecution(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateExecutionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateExecution(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceAuth::GetExecution(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetExecution(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListExecutionsResponse>
MetadataServiceAuth::ListExecutions(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListExecutionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListExecutions(context, request);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceAuth::UpdateExecution(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateExecutionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateExecution(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteExecution(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncPurgeExecutions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPurgeExecutions(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
MetadataServiceAuth::AddExecutionEvents(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddExecutionEvents(context, request);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceAuth::QueryExecutionInputsAndOutputs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::QueryExecutionInputsAndOutputsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryExecutionInputsAndOutputs(context, request);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceAuth::CreateMetadataSchema(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateMetadataSchema(context, request);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceAuth::GetMetadataSchema(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMetadataSchema(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataSchemasResponse>
MetadataServiceAuth::ListMetadataSchemas(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListMetadataSchemasRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMetadataSchemas(context, request);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceAuth::QueryArtifactLineageSubgraph(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryArtifactLineageSubgraph(context, request);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> MetadataServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
