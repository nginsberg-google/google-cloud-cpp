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
// source: google/cloud/dialogflow/v2/agent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_AGENTS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_AGENTS_LOGGING_DECORATOR_H

#include "google/cloud/dialogflow_es/internal/agents_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AgentsLogging : public AgentsStub {
 public:
  ~AgentsLogging() override = default;
  AgentsLogging(std::shared_ptr<AgentsStub> child,
                TracingOptions tracing_options,
                std::set<std::string> const& components);

  StatusOr<google::cloud::dialogflow::v2::Agent> GetAgent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetAgentRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Agent> SetAgent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::SetAgentRequest const& request) override;

  Status DeleteAgent(grpc::ClientContext& context,
                     google::cloud::dialogflow::v2::DeleteAgentRequest const&
                         request) override;

  StatusOr<google::cloud::dialogflow::v2::SearchAgentsResponse> SearchAgents(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::SearchAgentsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncTrainAgent(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::TrainAgentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportAgent(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::ExportAgentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportAgent(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::ImportAgentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreAgent(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::RestoreAgentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ValidationResult> GetValidationResult(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetValidationResultRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<AgentsStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // AgentsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_AGENTS_LOGGING_DECORATOR_H
