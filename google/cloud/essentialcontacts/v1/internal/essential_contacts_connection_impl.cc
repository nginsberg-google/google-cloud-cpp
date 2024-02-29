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
// source: google/cloud/essentialcontacts/v1/service.proto

#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_connection_impl.h"
#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace essentialcontacts_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<essentialcontacts_v1::EssentialContactsServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<essentialcontacts_v1::EssentialContactsServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<essentialcontacts_v1::EssentialContactsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    essentialcontacts_v1::EssentialContactsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<essentialcontacts_v1::
               EssentialContactsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

EssentialContactsServiceConnectionImpl::EssentialContactsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<essentialcontacts_v1_internal::EssentialContactsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), EssentialContactsServiceConnection::options())) {}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceConnectionImpl::CreateContact(
    google::cloud::essentialcontacts::v1::CreateContactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateContact(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::essentialcontacts::v1::CreateContactRequest const&
                 request) {
        return stub_->CreateContact(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceConnectionImpl::UpdateContact(
    google::cloud::essentialcontacts::v1::UpdateContactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateContact(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::essentialcontacts::v1::UpdateContactRequest const&
                 request) {
        return stub_->UpdateContact(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceConnectionImpl::ListContacts(
    google::cloud::essentialcontacts::v1::ListContactsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListContacts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::essentialcontacts::v1::Contact>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           essentialcontacts_v1::EssentialContactsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::essentialcontacts::v1::ListContactsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::essentialcontacts::v1::ListContactsRequest const&
                    request) {
              return stub->ListContacts(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::essentialcontacts::v1::ListContactsResponse r) {
        std::vector<google::cloud::essentialcontacts::v1::Contact> result(
            r.contacts().size());
        auto& messages = *r.mutable_contacts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceConnectionImpl::GetContact(
    google::cloud::essentialcontacts::v1::GetContactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetContact(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::essentialcontacts::v1::GetContactRequest const&
                 request) {
        return stub_->GetContact(context, options, request);
      },
      *current, request, __func__);
}

Status EssentialContactsServiceConnectionImpl::DeleteContact(
    google::cloud::essentialcontacts::v1::DeleteContactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteContact(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::essentialcontacts::v1::DeleteContactRequest const&
                 request) {
        return stub_->DeleteContact(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceConnectionImpl::ComputeContacts(
    google::cloud::essentialcontacts::v1::ComputeContactsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ComputeContacts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::essentialcontacts::v1::Contact>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           essentialcontacts_v1::EssentialContactsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::essentialcontacts::v1::ComputeContactsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::essentialcontacts::v1::
                       ComputeContactsRequest const& request) {
              return stub->ComputeContacts(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::essentialcontacts::v1::ComputeContactsResponse r) {
        std::vector<google::cloud::essentialcontacts::v1::Contact> result(
            r.contacts().size());
        auto& messages = *r.mutable_contacts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status EssentialContactsServiceConnectionImpl::SendTestMessage(
    google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SendTestMessage(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
                 request) {
        return stub_->SendTestMessage(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_internal
}  // namespace cloud
}  // namespace google
