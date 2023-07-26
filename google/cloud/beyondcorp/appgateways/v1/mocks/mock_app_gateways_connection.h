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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_MOCKS_MOCK_APP_GATEWAYS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_MOCKS_MOCK_APP_GATEWAYS_CONNECTION_H

#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace beyondcorp_appgateways_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AppGatewaysServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AppGatewaysServiceClient`. To do
 * so, construct an object of type `AppGatewaysServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAppGatewaysServiceConnection
    : public beyondcorp_appgateways_v1::AppGatewaysServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>,
      ListAppGateways,
      (google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>,
      GetAppGateway,
      (google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>,
      CreateAppGateway,
      (google::cloud::beyondcorp::appgateways::v1::
           CreateAppGatewayRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::beyondcorp::appgateways::v1::
                                  AppGatewayOperationMetadata>>,
              DeleteAppGateway,
              (google::cloud::beyondcorp::appgateways::v1::
                   DeleteAppGatewayRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_MOCKS_MOCK_APP_GATEWAYS_CONNECTION_H
