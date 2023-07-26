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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_CLOUD_CHANNEL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_CLOUD_CHANNEL_CONNECTION_H

#include "google/cloud/channel/v1/cloud_channel_connection_idempotency_policy.h"
#include "google/cloud/channel/v1/internal/cloud_channel_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/channel/v1/operations.pb.h>
#include <google/cloud/channel/v1/service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudChannelServiceConnection`.
class CloudChannelServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudChannelServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudChannelServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudChannelServiceLimitedErrorCountRetryPolicy
    : public CloudChannelServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudChannelServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudChannelServiceLimitedErrorCountRetryPolicy(
      CloudChannelServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudChannelServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  CloudChannelServiceLimitedErrorCountRetryPolicy(
      CloudChannelServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudChannelServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudChannelServiceRetryPolicy> clone() const override {
    return std::make_unique<CloudChannelServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudChannelServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      channel_v1_internal::CloudChannelServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudChannelServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudChannelServiceLimitedTimeRetryPolicy
    : public CloudChannelServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit CloudChannelServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudChannelServiceLimitedTimeRetryPolicy(
      CloudChannelServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudChannelServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudChannelServiceLimitedTimeRetryPolicy(
      CloudChannelServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudChannelServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudChannelServiceRetryPolicy> clone() const override {
    return std::make_unique<CloudChannelServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudChannelServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      channel_v1_internal::CloudChannelServiceRetryTraits>
      impl_;
};

/**
 * The `CloudChannelServiceConnection` object for `CloudChannelServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudChannelServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CloudChannelServiceClient`.
 *
 * To create a concrete instance, see `MakeCloudChannelServiceConnection()`.
 *
 * For mocking, see `channel_v1_mocks::MockCloudChannelServiceConnection`.
 */
class CloudChannelServiceConnection {
 public:
  virtual ~CloudChannelServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::channel::v1::Customer> ListCustomers(
      google::cloud::channel::v1::ListCustomersRequest request);

  virtual StatusOr<google::cloud::channel::v1::Customer> GetCustomer(
      google::cloud::channel::v1::GetCustomerRequest const& request);

  virtual StatusOr<
      google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
  CheckCloudIdentityAccountsExist(
      google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
          request);

  virtual StatusOr<google::cloud::channel::v1::Customer> CreateCustomer(
      google::cloud::channel::v1::CreateCustomerRequest const& request);

  virtual StatusOr<google::cloud::channel::v1::Customer> UpdateCustomer(
      google::cloud::channel::v1::UpdateCustomerRequest const& request);

  virtual Status DeleteCustomer(
      google::cloud::channel::v1::DeleteCustomerRequest const& request);

  virtual StatusOr<google::cloud::channel::v1::Customer> ImportCustomer(
      google::cloud::channel::v1::ImportCustomerRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Customer>>
  ProvisionCloudIdentity(
      google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request);

  virtual StreamRange<google::cloud::channel::v1::Entitlement> ListEntitlements(
      google::cloud::channel::v1::ListEntitlementsRequest request);

  virtual StreamRange<google::cloud::channel::v1::TransferableSku>
  ListTransferableSkus(
      google::cloud::channel::v1::ListTransferableSkusRequest request);

  virtual StreamRange<google::cloud::channel::v1::TransferableOffer>
  ListTransferableOffers(
      google::cloud::channel::v1::ListTransferableOffersRequest request);

  virtual StatusOr<google::cloud::channel::v1::Entitlement> GetEntitlement(
      google::cloud::channel::v1::GetEntitlementRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>>
  CreateEntitlement(
      google::cloud::channel::v1::CreateEntitlementRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>>
  ChangeParameters(
      google::cloud::channel::v1::ChangeParametersRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>>
  ChangeRenewalSettings(
      google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>> ChangeOffer(
      google::cloud::channel::v1::ChangeOfferRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>>
  StartPaidService(
      google::cloud::channel::v1::StartPaidServiceRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>>
  SuspendEntitlement(
      google::cloud::channel::v1::SuspendEntitlementRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
  CancelEntitlement(
      google::cloud::channel::v1::CancelEntitlementRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::Entitlement>>
  ActivateEntitlement(
      google::cloud::channel::v1::ActivateEntitlementRequest const& request);

  virtual future<
      StatusOr<google::cloud::channel::v1::TransferEntitlementsResponse>>
  TransferEntitlements(
      google::cloud::channel::v1::TransferEntitlementsRequest const& request);

  virtual future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
  TransferEntitlementsToGoogle(
      google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
          request);

  virtual StreamRange<google::cloud::channel::v1::ChannelPartnerLink>
  ListChannelPartnerLinks(
      google::cloud::channel::v1::ListChannelPartnerLinksRequest request);

  virtual StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
  GetChannelPartnerLink(
      google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request);

  virtual StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
  CreateChannelPartnerLink(
      google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
          request);

  virtual StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
  UpdateChannelPartnerLink(
      google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
          request);

  virtual StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
  GetCustomerRepricingConfig(
      google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
          request);

  virtual StreamRange<google::cloud::channel::v1::CustomerRepricingConfig>
  ListCustomerRepricingConfigs(
      google::cloud::channel::v1::ListCustomerRepricingConfigsRequest request);

  virtual StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
  CreateCustomerRepricingConfig(
      google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
          request);

  virtual StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
  UpdateCustomerRepricingConfig(
      google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
          request);

  virtual Status DeleteCustomerRepricingConfig(
      google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
          request);

  virtual StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  GetChannelPartnerRepricingConfig(
      google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
          request);

  virtual StreamRange<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  ListChannelPartnerRepricingConfigs(
      google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest
          request);

  virtual StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  CreateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          CreateChannelPartnerRepricingConfigRequest const& request);

  virtual StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  UpdateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          UpdateChannelPartnerRepricingConfigRequest const& request);

  virtual Status DeleteChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          DeleteChannelPartnerRepricingConfigRequest const& request);

  virtual StreamRange<google::cloud::channel::v1::SkuGroup> ListSkuGroups(
      google::cloud::channel::v1::ListSkuGroupsRequest request);

  virtual StreamRange<google::cloud::channel::v1::BillableSku>
  ListSkuGroupBillableSkus(
      google::cloud::channel::v1::ListSkuGroupBillableSkusRequest request);

  virtual StatusOr<google::cloud::channel::v1::Offer> LookupOffer(
      google::cloud::channel::v1::LookupOfferRequest const& request);

  virtual StreamRange<google::cloud::channel::v1::Product> ListProducts(
      google::cloud::channel::v1::ListProductsRequest request);

  virtual StreamRange<google::cloud::channel::v1::Sku> ListSkus(
      google::cloud::channel::v1::ListSkusRequest request);

  virtual StreamRange<google::cloud::channel::v1::Offer> ListOffers(
      google::cloud::channel::v1::ListOffersRequest request);

  virtual StreamRange<google::cloud::channel::v1::PurchasableSku>
  ListPurchasableSkus(
      google::cloud::channel::v1::ListPurchasableSkusRequest request);

  virtual StreamRange<google::cloud::channel::v1::PurchasableOffer>
  ListPurchasableOffers(
      google::cloud::channel::v1::ListPurchasableOffersRequest request);

  virtual StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
  RegisterSubscriber(
      google::cloud::channel::v1::RegisterSubscriberRequest const& request);

  virtual StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
  UnregisterSubscriber(
      google::cloud::channel::v1::UnregisterSubscriberRequest const& request);

  virtual StreamRange<std::string> ListSubscribers(
      google::cloud::channel::v1::ListSubscribersRequest request);

  virtual StreamRange<google::cloud::channel::v1::EntitlementChange>
  ListEntitlementChanges(
      google::cloud::channel::v1::ListEntitlementChangesRequest request);
};

/**
 * A factory function to construct an object of type
 * `CloudChannelServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CloudChannelServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudChannelServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::channel_v1::CloudChannelServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudChannelServiceConnection`
 * created by this function.
 */
std::shared_ptr<CloudChannelServiceConnection>
MakeCloudChannelServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_CLOUD_CHANNEL_CONNECTION_H
