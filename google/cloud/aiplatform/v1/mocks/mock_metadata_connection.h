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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_METADATA_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_METADATA_CONNECTION_H

#include "google/cloud/aiplatform/v1/metadata_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `MetadataServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `MetadataServiceClient`. To do so,
 * construct an object of type `MetadataServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockMetadataServiceConnection
    : public aiplatform_v1::MetadataServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::MetadataStore>>,
              CreateMetadataStore,
              (google::cloud::aiplatform::v1::CreateMetadataStoreRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::MetadataStore>, GetMetadataStore,
      (google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::aiplatform::v1::MetadataStore>,
      ListMetadataStores,
      (google::cloud::aiplatform::v1::ListMetadataStoresRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>>,
      DeleteMetadataStore,
      (google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Artifact>, CreateArtifact,
      (google::cloud::aiplatform::v1::CreateArtifactRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Artifact>, GetArtifact,
      (google::cloud::aiplatform::v1::GetArtifactRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Artifact>,
              ListArtifacts,
              (google::cloud::aiplatform::v1::ListArtifactsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Artifact>, UpdateArtifact,
      (google::cloud::aiplatform::v1::UpdateArtifactRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteArtifact,
      (google::cloud::aiplatform::v1::DeleteArtifactRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PurgeArtifactsResponse>>,
      PurgeArtifacts,
      (google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Context>, CreateContext,
      (google::cloud::aiplatform::v1::CreateContextRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Context>, GetContext,
              (google::cloud::aiplatform::v1::GetContextRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Context>, ListContexts,
              (google::cloud::aiplatform::v1::ListContextsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Context>, UpdateContext,
      (google::cloud::aiplatform::v1::UpdateContextRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteContext,
      (google::cloud::aiplatform::v1::DeleteContextRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PurgeContextsResponse>>,
      PurgeContexts,
      (google::cloud::aiplatform::v1::PurgeContextsRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::
                           AddContextArtifactsAndExecutionsResponse>,
              AddContextArtifactsAndExecutions,
              (google::cloud::aiplatform::v1::
                   AddContextArtifactsAndExecutionsRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>,
      AddContextChildren,
      (google::cloud::aiplatform::v1::AddContextChildrenRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>,
      RemoveContextChildren,
      (google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>,
      QueryContextLineageSubgraph,
      (google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Execution>, CreateExecution,
      (google::cloud::aiplatform::v1::CreateExecutionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Execution>, GetExecution,
      (google::cloud::aiplatform::v1::GetExecutionRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::aiplatform::v1::Execution>,
              ListExecutions,
              (google::cloud::aiplatform::v1::ListExecutionsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Execution>, UpdateExecution,
      (google::cloud::aiplatform::v1::UpdateExecutionRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteExecution,
      (google::cloud::aiplatform::v1::DeleteExecutionRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PurgeExecutionsResponse>>,
      PurgeExecutions,
      (google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>,
      AddExecutionEvents,
      (google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>,
              QueryExecutionInputsAndOutputs,
              (google::cloud::aiplatform::v1::
                   QueryExecutionInputsAndOutputsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::MetadataSchema>,
              CreateMetadataSchema,
              (google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::MetadataSchema>,
      GetMetadataSchema,
      (google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::aiplatform::v1::MetadataSchema>,
      ListMetadataSchemas,
      (google::cloud::aiplatform::v1::ListMetadataSchemasRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>,
      QueryArtifactLineageSubgraph,
      (google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_METADATA_CONNECTION_H
