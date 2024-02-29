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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/v2/product_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductServiceClient::ProductServiceClient(
    std::shared_ptr<ProductServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ProductServiceClient::~ProductServiceClient() = default;

StatusOr<google::cloud::retail::v2::Product>
ProductServiceClient::CreateProduct(
    std::string const& parent,
    google::cloud::retail::v2::Product const& product,
    std::string const& product_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::CreateProductRequest request;
  request.set_parent(parent);
  *request.mutable_product() = product;
  request.set_product_id(product_id);
  return connection_->CreateProduct(request);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceClient::CreateProduct(
    google::cloud::retail::v2::CreateProductRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateProduct(request);
}

StatusOr<google::cloud::retail::v2::Product> ProductServiceClient::GetProduct(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::GetProductRequest request;
  request.set_name(name);
  return connection_->GetProduct(request);
}

StatusOr<google::cloud::retail::v2::Product> ProductServiceClient::GetProduct(
    google::cloud::retail::v2::GetProductRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProduct(request);
}

StreamRange<google::cloud::retail::v2::Product>
ProductServiceClient::ListProducts(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::ListProductsRequest request;
  request.set_parent(parent);
  return connection_->ListProducts(request);
}

StreamRange<google::cloud::retail::v2::Product>
ProductServiceClient::ListProducts(
    google::cloud::retail::v2::ListProductsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProducts(std::move(request));
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceClient::UpdateProduct(
    google::cloud::retail::v2::Product const& product,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::UpdateProductRequest request;
  *request.mutable_product() = product;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateProduct(request);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceClient::UpdateProduct(
    google::cloud::retail::v2::UpdateProductRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateProduct(request);
}

Status ProductServiceClient::DeleteProduct(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::DeleteProductRequest request;
  request.set_name(name);
  return connection_->DeleteProduct(request);
}

Status ProductServiceClient::DeleteProduct(
    google::cloud::retail::v2::DeleteProductRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteProduct(request);
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceClient::ImportProducts(
    google::cloud::retail::v2::ImportProductsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportProducts(request);
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceClient::SetInventory(
    google::cloud::retail::v2::Product const& inventory,
    google::protobuf::FieldMask const& set_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::SetInventoryRequest request;
  *request.mutable_inventory() = inventory;
  *request.mutable_set_mask() = set_mask;
  return connection_->SetInventory(request);
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceClient::SetInventory(
    google::cloud::retail::v2::SetInventoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetInventory(request);
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceClient::AddFulfillmentPlaces(std::string const& product,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::AddFulfillmentPlacesRequest request;
  request.set_product(product);
  return connection_->AddFulfillmentPlaces(request);
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceClient::AddFulfillmentPlaces(
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddFulfillmentPlaces(request);
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceClient::RemoveFulfillmentPlaces(std::string const& product,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::RemoveFulfillmentPlacesRequest request;
  request.set_product(product);
  return connection_->RemoveFulfillmentPlaces(request);
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceClient::RemoveFulfillmentPlaces(
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveFulfillmentPlaces(request);
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceClient::AddLocalInventories(std::string const& product,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::AddLocalInventoriesRequest request;
  request.set_product(product);
  return connection_->AddLocalInventories(request);
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceClient::AddLocalInventories(
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddLocalInventories(request);
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceClient::RemoveLocalInventories(std::string const& product,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::RemoveLocalInventoriesRequest request;
  request.set_product(product);
  return connection_->RemoveLocalInventories(request);
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceClient::RemoveLocalInventories(
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveLocalInventories(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
