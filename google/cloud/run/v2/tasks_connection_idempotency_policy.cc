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
// source: google/cloud/run/v2/task.proto

#include "google/cloud/run/v2/tasks_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TasksConnectionIdempotencyPolicy::~TasksConnectionIdempotencyPolicy() = default;

std::unique_ptr<TasksConnectionIdempotencyPolicy>
TasksConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TasksConnectionIdempotencyPolicy>(*this);
}

Idempotency TasksConnectionIdempotencyPolicy::GetTask(
    google::cloud::run::v2::GetTaskRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TasksConnectionIdempotencyPolicy::ListTasks(
    google::cloud::run::v2::ListTasksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<TasksConnectionIdempotencyPolicy>
MakeDefaultTasksConnectionIdempotencyPolicy() {
  return std::make_unique<TasksConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google
