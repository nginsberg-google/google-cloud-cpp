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
// source: google/cloud/talent/v4/company_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_COMPANY_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_COMPANY_TRACING_STUB_H

#include "google/cloud/talent/v4/internal/company_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CompanyServiceTracingStub : public CompanyServiceStub {
 public:
  ~CompanyServiceTracingStub() override = default;

  explicit CompanyServiceTracingStub(std::shared_ptr<CompanyServiceStub> child);

  StatusOr<google::cloud::talent::v4::Company> CreateCompany(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::CreateCompanyRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Company> GetCompany(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::GetCompanyRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Company> UpdateCompany(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::UpdateCompanyRequest const& request) override;

  Status DeleteCompany(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::DeleteCompanyRequest const& request) override;

  StatusOr<google::cloud::talent::v4::ListCompaniesResponse> ListCompanies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::ListCompaniesRequest const& request) override;

 private:
  std::shared_ptr<CompanyServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<CompanyServiceStub> MakeCompanyServiceTracingStub(
    std::shared_ptr<CompanyServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_COMPANY_TRACING_STUB_H
