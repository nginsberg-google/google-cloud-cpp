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
// source: google/cloud/vision/v1/image_annotator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_IMAGE_ANNOTATOR_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_IMAGE_ANNOTATOR_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/vision/v1/image_annotator.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vision_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageAnnotatorStub {
 public:
  virtual ~ImageAnnotatorStub() = 0;

  virtual StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      grpc::ClientContext& context,
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request) = 0;

  virtual StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(
      grpc::ClientContext& context,
      google::cloud::vision::v1::BatchAnnotateFilesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncAsyncBatchAnnotateImages(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncAsyncBatchAnnotateFiles(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultImageAnnotatorStub : public ImageAnnotatorStub {
 public:
  DefaultImageAnnotatorStub(
      std::unique_ptr<google::cloud::vision::v1::ImageAnnotator::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      grpc::ClientContext& client_context,
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(grpc::ClientContext& client_context,
                     google::cloud::vision::v1::BatchAnnotateFilesRequest const&
                         request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncAsyncBatchAnnotateImages(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAsyncBatchAnnotateFiles(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::vision::v1::ImageAnnotator::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_INTERNAL_IMAGE_ANNOTATOR_STUB_H
