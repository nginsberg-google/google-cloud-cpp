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
// source: google/cloud/compute/disks/v1/disks.proto

#include "google/cloud/compute/disks/v1/internal/disks_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/disks/v1/disks.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultDisksRestStub::DefaultDisksRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultDisksRestStub::DefaultDisksRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncAddResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.disks_add_resource_policies_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk(), "/", "addResourcePolicies"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
DefaultDisksRestStub::AggregatedListDisks(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
        request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::DiskAggregatedList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "aggregated", "/",
                   "disks"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("include_all_scopes",
                          request.include_all_scopes() ? "1" : "0"),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0"),
           std::make_pair("service_project_number",
                          request.service_project_number())}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncBulkInsert(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.bulk_insert_disk_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             "bulkInsert"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncCreateSnapshot(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.snapshot_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk(), "/", "createSnapshot"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("guest_flush",
                                    request.guest_flush() ? "1" : "0"),
                     std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncDeleteDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Disk> DefaultDisksRestStub::GetDisk(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::disks::v1::GetDiskRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Disk>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "disks", "/", request.disk()));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultDisksRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "disks", "/", request.resource(), "/",
                   "getIamPolicy"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair(
          "options_requested_policy_version",
          std::to_string(request.options_requested_policy_version()))}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncInsertDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::InsertDiskRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.disk_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id()),
                     std::make_pair("source_image", request.source_image())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::DiskList>
DefaultDisksRestStub::ListDisks(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::disks::v1::ListDisksRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::DiskList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "disks"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncRemoveResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::RemoveResourcePoliciesRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.disks_remove_resource_policies_request_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk(), "/", "removeResourcePolicies"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::ResizeRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.disks_resize_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk(), "/", "resize"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultDisksRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
        request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.zone_set_policy_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "disks", "/", request.resource(), "/",
                   "setIamPolicy"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.zone_set_labels_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.resource(), "/", "setLabels"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncStartAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::StartAsyncReplicationRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.disks_start_async_replication_request_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk(), "/", "startAsyncReplication"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncStopAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk(), "/", "stopAsyncReplication"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncStopGroupAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::
        StopGroupAsyncReplicationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.disks_stop_group_async_replication_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             "stopGroupAsyncReplication"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultDisksRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
        request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "disks", "/", request.resource(), "/",
                   "testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncUpdateDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.disk_resource(), false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/", "projects", "/", request.project(), "/",
                             "zones", "/", request.zone(), "/", "disks", "/",
                             request.disk()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("paths", request.paths()),
                     std::make_pair("request_id", request.request_id()),
                     std::make_pair("update_mask", request.update_mask())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultDisksRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/",
                             rest_internal::DetermineApiVersion("v1", *options),
                             "/projects/", request.project(), "/zones/",
                             request.zone(), "/operations/",
                             request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultDisksRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat("/compute/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/projects/", request.project(), "/zones/",
                         request.zone(), "/operations/", request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1_internal
}  // namespace cloud
}  // namespace google
