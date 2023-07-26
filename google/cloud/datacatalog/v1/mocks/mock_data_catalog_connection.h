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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_MOCKS_MOCK_DATA_CATALOG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_MOCKS_MOCK_DATA_CATALOG_CONNECTION_H

#include "google/cloud/datacatalog/v1/data_catalog_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace datacatalog_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DataCatalogConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DataCatalogClient`. To do so,
 * construct an object of type `DataCatalogClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDataCatalogConnection : public datacatalog_v1::DataCatalogConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>,
              SearchCatalog,
              (google::cloud::datacatalog::v1::SearchCatalogRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::EntryGroup>, CreateEntryGroup,
      (google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::EntryGroup>, GetEntryGroup,
      (google::cloud::datacatalog::v1::GetEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::EntryGroup>, UpdateEntryGroup,
      (google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteEntryGroup,
      (google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::datacatalog::v1::EntryGroup>,
              ListEntryGroups,
              (google::cloud::datacatalog::v1::ListEntryGroupsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::Entry>, CreateEntry,
      (google::cloud::datacatalog::v1::CreateEntryRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::Entry>, UpdateEntry,
      (google::cloud::datacatalog::v1::UpdateEntryRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteEntry,
      (google::cloud::datacatalog::v1::DeleteEntryRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::Entry>, GetEntry,
              (google::cloud::datacatalog::v1::GetEntryRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::Entry>, LookupEntry,
      (google::cloud::datacatalog::v1::LookupEntryRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::datacatalog::v1::Entry>, ListEntries,
              (google::cloud::datacatalog::v1::ListEntriesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::EntryOverview>,
              ModifyEntryOverview,
              (google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::Contacts>,
              ModifyEntryContacts,
              (google::cloud::datacatalog::v1::ModifyEntryContactsRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::TagTemplate>, CreateTagTemplate,
      (google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::TagTemplate>, GetTagTemplate,
      (google::cloud::datacatalog::v1::GetTagTemplateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::TagTemplate>, UpdateTagTemplate,
      (google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteTagTemplate,
      (google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::TagTemplateField>,
      CreateTagTemplateField,
      (google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::TagTemplateField>,
      UpdateTagTemplateField,
      (google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::TagTemplateField>,
      RenameTagTemplateField,
      (google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::TagTemplateField>,
              RenameTagTemplateFieldEnumValue,
              (google::cloud::datacatalog::v1::
                   RenameTagTemplateFieldEnumValueRequest const& request),
              (override));

  MOCK_METHOD(
      Status, DeleteTagTemplateField,
      (google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::Tag>, CreateTag,
              (google::cloud::datacatalog::v1::CreateTagRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::Tag>, UpdateTag,
              (google::cloud::datacatalog::v1::UpdateTagRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteTag,
              (google::cloud::datacatalog::v1::DeleteTagRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::datacatalog::v1::Tag>, ListTags,
              (google::cloud::datacatalog::v1::ListTagsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>,
      ReconcileTags,
      (google::cloud::datacatalog::v1::ReconcileTagsRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>,
              StarEntry,
              (google::cloud::datacatalog::v1::StarEntryRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>,
      UnstarEntry,
      (google::cloud::datacatalog::v1::UnstarEntryRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>,
      ImportEntries,
      (google::cloud::datacatalog::v1::ImportEntriesRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_MOCKS_MOCK_DATA_CATALOG_CONNECTION_H
