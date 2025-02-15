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
// source: google/cloud/timeseriesinsights/v1/timeseries_insights.proto

#include "google/cloud/timeseriesinsights/v1/timeseries_insights_controller_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TimeseriesInsightsControllerClient::TimeseriesInsightsControllerClient(
    std::shared_ptr<TimeseriesInsightsControllerConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TimeseriesInsightsControllerClient::~TimeseriesInsightsControllerClient() =
    default;

StreamRange<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerClient::ListDataSets(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::timeseriesinsights::v1::ListDataSetsRequest request;
  request.set_parent(parent);
  return connection_->ListDataSets(request);
}

StreamRange<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerClient::ListDataSets(
    google::cloud::timeseriesinsights::v1::ListDataSetsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDataSets(std::move(request));
}

StatusOr<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerClient::CreateDataSet(
    std::string const& parent,
    google::cloud::timeseriesinsights::v1::DataSet const& dataset,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::timeseriesinsights::v1::CreateDataSetRequest request;
  request.set_parent(parent);
  *request.mutable_dataset() = dataset;
  return connection_->CreateDataSet(request);
}

StatusOr<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerClient::CreateDataSet(
    google::cloud::timeseriesinsights::v1::CreateDataSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDataSet(request);
}

Status TimeseriesInsightsControllerClient::DeleteDataSet(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::timeseriesinsights::v1::DeleteDataSetRequest request;
  request.set_name(name);
  return connection_->DeleteDataSet(request);
}

Status TimeseriesInsightsControllerClient::DeleteDataSet(
    google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDataSet(request);
}

StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
TimeseriesInsightsControllerClient::AppendEvents(
    std::string const& dataset,
    std::vector<google::cloud::timeseriesinsights::v1::Event> const& events,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::timeseriesinsights::v1::AppendEventsRequest request;
  request.set_dataset(dataset);
  *request.mutable_events() = {events.begin(), events.end()};
  return connection_->AppendEvents(request);
}

StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
TimeseriesInsightsControllerClient::AppendEvents(
    google::cloud::timeseriesinsights::v1::AppendEventsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AppendEvents(request);
}

StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>
TimeseriesInsightsControllerClient::QueryDataSet(
    google::cloud::timeseriesinsights::v1::QueryDataSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->QueryDataSet(request);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerClient::EvaluateSlice(
    google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EvaluateSlice(request);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerClient::EvaluateTimeseries(
    google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EvaluateTimeseries(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1
}  // namespace cloud
}  // namespace google
