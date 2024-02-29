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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/reservation/v1/internal/reservation_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/reservation/v1/reservation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_reservation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationServiceStub::~ReservationServiceStub() = default;

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
DefaultReservationServiceStub::CreateReservation(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::Reservation response;
  auto status = grpc_stub_->CreateReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::ListReservationsResponse>
DefaultReservationServiceStub::ListReservations(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::ListReservationsRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::ListReservationsResponse response;
  auto status = grpc_stub_->ListReservations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
DefaultReservationServiceStub::GetReservation(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::Reservation response;
  auto status = grpc_stub_->GetReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultReservationServiceStub::DeleteReservation(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
DefaultReservationServiceStub::UpdateReservation(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::Reservation response;
  auto status = grpc_stub_->UpdateReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
DefaultReservationServiceStub::CreateCapacityCommitment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const& request) {
  google::cloud::bigquery::reservation::v1::CapacityCommitment response;
  auto status =
      grpc_stub_->CreateCapacityCommitment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse>
DefaultReservationServiceStub::ListCapacityCommitments(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        ListCapacityCommitmentsRequest const& request) {
  google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse
      response;
  auto status =
      grpc_stub_->ListCapacityCommitments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
DefaultReservationServiceStub::GetCapacityCommitment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const& request) {
  google::cloud::bigquery::reservation::v1::CapacityCommitment response;
  auto status = grpc_stub_->GetCapacityCommitment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultReservationServiceStub::DeleteCapacityCommitment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteCapacityCommitment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
DefaultReservationServiceStub::UpdateCapacityCommitment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const& request) {
  google::cloud::bigquery::reservation::v1::CapacityCommitment response;
  auto status =
      grpc_stub_->UpdateCapacityCommitment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
DefaultReservationServiceStub::SplitCapacityCommitment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const& request) {
  google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse
      response;
  auto status =
      grpc_stub_->SplitCapacityCommitment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
DefaultReservationServiceStub::MergeCapacityCommitments(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const& request) {
  google::cloud::bigquery::reservation::v1::CapacityCommitment response;
  auto status =
      grpc_stub_->MergeCapacityCommitments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
DefaultReservationServiceStub::CreateAssignment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::Assignment response;
  auto status = grpc_stub_->CreateAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::ListAssignmentsResponse>
DefaultReservationServiceStub::ListAssignments(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::ListAssignmentsRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::ListAssignmentsResponse response;
  auto status = grpc_stub_->ListAssignments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultReservationServiceStub::DeleteAssignment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse>
DefaultReservationServiceStub::SearchAssignments(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse response;
  auto status = grpc_stub_->SearchAssignments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse>
DefaultReservationServiceStub::SearchAllAssignments(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse
      response;
  auto status = grpc_stub_->SearchAllAssignments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
DefaultReservationServiceStub::MoveAssignment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::Assignment response;
  auto status = grpc_stub_->MoveAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
DefaultReservationServiceStub::UpdateAssignment(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::Assignment response;
  auto status = grpc_stub_->UpdateAssignment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
DefaultReservationServiceStub::GetBiReservation(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::BiReservation response;
  auto status = grpc_stub_->GetBiReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
DefaultReservationServiceStub::UpdateBiReservation(
    grpc::ClientContext& context, Options const&,
    google::cloud::bigquery::reservation::v1::UpdateBiReservationRequest const&
        request) {
  google::cloud::bigquery::reservation::v1::BiReservation response;
  auto status = grpc_stub_->UpdateBiReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1_internal
}  // namespace cloud
}  // namespace google
