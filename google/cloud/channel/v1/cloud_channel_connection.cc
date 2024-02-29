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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/cloud_channel_connection.h"
#include "google/cloud/channel/v1/cloud_channel_options.h"
#include "google/cloud/channel/v1/internal/cloud_channel_connection_impl.h"
#include "google/cloud/channel/v1/internal/cloud_channel_option_defaults.h"
#include "google/cloud/channel/v1/internal/cloud_channel_stub_factory.h"
#include "google/cloud/channel/v1/internal/cloud_channel_tracing_connection.h"
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
namespace channel_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceConnection::~CloudChannelServiceConnection() = default;

StreamRange<google::cloud::channel::v1::Customer>
CloudChannelServiceConnection::ListCustomers(
    google::cloud::channel::v1::
        ListCustomersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Customer>>();
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceConnection::GetCustomer(
    google::cloud::channel::v1::GetCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceConnection::CheckCloudIdentityAccountsExist(
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceConnection::CreateCustomer(
    google::cloud::channel::v1::CreateCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceConnection::UpdateCustomer(
    google::cloud::channel::v1::UpdateCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudChannelServiceConnection::DeleteCustomer(
    google::cloud::channel::v1::DeleteCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceConnection::ImportCustomer(
    google::cloud::channel::v1::ImportCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::channel::v1::Customer>>
CloudChannelServiceConnection::ProvisionCloudIdentity(
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Customer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::channel::v1::Entitlement>
CloudChannelServiceConnection::ListEntitlements(
    google::cloud::channel::v1::
        ListEntitlementsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Entitlement>>();
}

StreamRange<google::cloud::channel::v1::TransferableSku>
CloudChannelServiceConnection::ListTransferableSkus(
    google::cloud::channel::v1::
        ListTransferableSkusRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::TransferableSku>>();
}

StreamRange<google::cloud::channel::v1::TransferableOffer>
CloudChannelServiceConnection::ListTransferableOffers(
    google::cloud::channel::v1::
        ListTransferableOffersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::TransferableOffer>>();
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceConnection::GetEntitlement(
    google::cloud::channel::v1::GetEntitlementRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::CreateEntitlement(
    google::cloud::channel::v1::CreateEntitlementRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::ChangeParameters(
    google::cloud::channel::v1::ChangeParametersRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::ChangeRenewalSettings(
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::ChangeOffer(
    google::cloud::channel::v1::ChangeOfferRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::StartPaidService(
    google::cloud::channel::v1::StartPaidServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::SuspendEntitlement(
    google::cloud::channel::v1::SuspendEntitlementRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
CloudChannelServiceConnection::CancelEntitlement(
    google::cloud::channel::v1::CancelEntitlementRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceConnection::ActivateEntitlement(
    google::cloud::channel::v1::ActivateEntitlementRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::Entitlement>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::TransferEntitlementsResponse>>
CloudChannelServiceConnection::TransferEntitlements(
    google::cloud::channel::v1::TransferEntitlementsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::TransferEntitlementsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
CloudChannelServiceConnection::TransferEntitlementsToGoogle(
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceConnection::ListChannelPartnerLinks(
    google::cloud::channel::v1::
        ListChannelPartnerLinksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::ChannelPartnerLink>>();
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceConnection::GetChannelPartnerLink(
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceConnection::CreateChannelPartnerLink(
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceConnection::UpdateChannelPartnerLink(
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceConnection::GetCustomerRepricingConfig(
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceConnection::ListCustomerRepricingConfigs(
    google::cloud::channel::v1::
        ListCustomerRepricingConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::CustomerRepricingConfig>>();
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceConnection::CreateCustomerRepricingConfig(
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceConnection::UpdateCustomerRepricingConfig(
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudChannelServiceConnection::DeleteCustomerRepricingConfig(
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceConnection::GetChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        GetChannelPartnerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceConnection::ListChannelPartnerRepricingConfigs(
    google::cloud::channel::v1::
        ListChannelPartnerRepricingConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::ChannelPartnerRepricingConfig>>();
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceConnection::CreateChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceConnection::UpdateChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudChannelServiceConnection::DeleteChannelPartnerRepricingConfig(
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::channel::v1::SkuGroup>
CloudChannelServiceConnection::ListSkuGroups(
    google::cloud::channel::v1::
        ListSkuGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::SkuGroup>>();
}

StreamRange<google::cloud::channel::v1::BillableSku>
CloudChannelServiceConnection::ListSkuGroupBillableSkus(
    google::cloud::channel::v1::
        ListSkuGroupBillableSkusRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::BillableSku>>();
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceConnection::LookupOffer(
    google::cloud::channel::v1::LookupOfferRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::channel::v1::Product>
CloudChannelServiceConnection::ListProducts(
    google::cloud::channel::v1::
        ListProductsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Product>>();
}

StreamRange<google::cloud::channel::v1::Sku>
CloudChannelServiceConnection::ListSkus(
    google::cloud::channel::v1::
        ListSkusRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Sku>>();
}

StreamRange<google::cloud::channel::v1::Offer>
CloudChannelServiceConnection::ListOffers(
    google::cloud::channel::v1::
        ListOffersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Offer>>();
}

StreamRange<google::cloud::channel::v1::PurchasableSku>
CloudChannelServiceConnection::ListPurchasableSkus(
    google::cloud::channel::v1::
        ListPurchasableSkusRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::PurchasableSku>>();
}

StreamRange<google::cloud::channel::v1::PurchasableOffer>
CloudChannelServiceConnection::ListPurchasableOffers(
    google::cloud::channel::v1::
        ListPurchasableOffersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::PurchasableOffer>>();
}

StatusOr<google::cloud::channel::v1::QueryEligibleBillingAccountsResponse>
CloudChannelServiceConnection::QueryEligibleBillingAccounts(
    google::cloud::channel::v1::QueryEligibleBillingAccountsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceConnection::RegisterSubscriber(
    google::cloud::channel::v1::RegisterSubscriberRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceConnection::UnregisterSubscriber(
    google::cloud::channel::v1::UnregisterSubscriberRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<std::string> CloudChannelServiceConnection::ListSubscribers(
    google::cloud::channel::v1::
        ListSubscribersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::string>>();
}

StreamRange<google::cloud::channel::v1::EntitlementChange>
CloudChannelServiceConnection::ListEntitlementChanges(
    google::cloud::channel::v1::
        ListEntitlementChangesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::EntitlementChange>>();
}

std::shared_ptr<CloudChannelServiceConnection>
MakeCloudChannelServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudChannelServicePolicyOptionList>(options,
                                                                      __func__);
  options = channel_v1_internal::CloudChannelServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = channel_v1_internal::CreateDefaultCloudChannelServiceStub(
      std::move(auth), options);
  return channel_v1_internal::MakeCloudChannelServiceTracingConnection(
      std::make_shared<channel_v1_internal::CloudChannelServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1
}  // namespace cloud
}  // namespace google
