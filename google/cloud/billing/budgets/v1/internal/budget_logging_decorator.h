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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGETS_V1_INTERNAL_BUDGET_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGETS_V1_INTERNAL_BUDGET_LOGGING_DECORATOR_H

#include "google/cloud/billing/budgets/v1/internal/budget_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace billing_budgets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BudgetServiceLogging : public BudgetServiceStub {
 public:
  ~BudgetServiceLogging() override = default;
  BudgetServiceLogging(std::shared_ptr<BudgetServiceStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> const& components);

  StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      grpc::ClientContext& context,
      google::cloud::billing::budgets::v1::CreateBudgetRequest const& request)
      override;

  StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      grpc::ClientContext& context,
      google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request)
      override;

  StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      grpc::ClientContext& context,
      google::cloud::billing::budgets::v1::GetBudgetRequest const& request)
      override;

  StatusOr<google::cloud::billing::budgets::v1::ListBudgetsResponse>
  ListBudgets(grpc::ClientContext& context,
              google::cloud::billing::budgets::v1::ListBudgetsRequest const&
                  request) override;

  Status DeleteBudget(
      grpc::ClientContext& context,
      google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request)
      override;

 private:
  std::shared_ptr<BudgetServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // BudgetServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_budgets_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGETS_V1_INTERNAL_BUDGET_LOGGING_DECORATOR_H
