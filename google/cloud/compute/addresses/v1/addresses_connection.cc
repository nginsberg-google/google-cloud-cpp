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
// source: google/cloud/compute/addresses/v1/addresses.proto

#include "google/cloud/compute/addresses/v1/addresses_connection.h"
#include "google/cloud/compute/addresses/v1/addresses_options.h"
#include "google/cloud/compute/addresses/v1/internal/addresses_option_defaults.h"
#include "google/cloud/compute/addresses/v1/internal/addresses_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_addresses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AddressesConnection::~AddressesConnection() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::AddressesScopedList>>
AddressesConnection::AggregatedListAddresses(
    google::cloud::cpp::compute::addresses::v1::
        AggregatedListAddressesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::AddressesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesConnection::DeleteAddress(
    google::cloud::cpp::compute::addresses::v1::DeleteAddressRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Address>
AddressesConnection::GetAddress(
    google::cloud::cpp::compute::addresses::v1::GetAddressRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesConnection::InsertAddress(
    google::cloud::cpp::compute::addresses::v1::InsertAddressRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::Address>
AddressesConnection::ListAddresses(
    google::cloud::cpp::compute::addresses::v1::
        ListAddressesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Address>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesConnection::Move(
    google::cloud::cpp::compute::addresses::v1::MoveRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesConnection::SetLabels(
    google::cloud::cpp::compute::addresses::v1::SetLabelsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_addresses_v1
}  // namespace cloud
}  // namespace google
