// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/pubsub/admin/subscription_admin_client.h"
#include "google/cloud/pubsub/admin/topic_admin_client.h"
#include "google/cloud/pubsub/samples/pubsub_samples_common.h"
#include "google/cloud/pubsub/subscription.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/random.h"
#include "google/cloud/testing_util/example_driver.h"
#include <sstream>

namespace {

using google::cloud::pubsub::examples::Cleanup;
using ::google::cloud::pubsub::examples::UsingEmulator;

using SubscriptionAdminCommand =
    std::function<void(google::cloud::pubsub_admin::SubscriptionAdminClient,
                       std::vector<std::string> const&)>;

google::cloud::testing_util::Commands::value_type
CreateSubscriptionAdminCommand(std::string const& name,
                               std::vector<std::string> const& arg_names,
                               SubscriptionAdminCommand const& command) {
  auto adapter = [=](std::vector<std::string> const& argv) {
    if ((argv.size() == 1 && argv[0] == "--help") ||
        argv.size() != arg_names.size()) {
      std::ostringstream os;
      os << name;
      for (auto const& a : arg_names) {
        os << " <" << a << ">";
      }
      throw google::cloud::testing_util::Usage{std::move(os).str()};
    }
    google::cloud::pubsub_admin::SubscriptionAdminClient client(
        google::cloud::pubsub_admin::MakeSubscriptionAdminConnection());
    command(std::move(client), std::move(argv));
  };
  return google::cloud::testing_util::Commands::value_type{name,
                                                           std::move(adapter)};
}

void CreateSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  namespace pubsub = ::google::cloud::pubsub;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id) {
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
  }(std::move(client), argv.at(0), argv.at(1), argv.at(2));
}

void CreateBigQuerySubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id, std::string const& table_id) {
    //! [START pubsub_create_bigquery_subscription]
    //! [create-bigquery-subscription]
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.mutable_bigquery_config()->set_table(table_id);
    auto sub = client.CreateSubscription(request);
    if (!sub) {
      if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
        std::cout << "The subscription already exists\n";
        return;
      }
      throw std::move(sub).status();
    }

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
    //! [END pubsub_create_bigquery_subscription] [create-bigquery-subscription]
  }(std::move(client), argv.at(0), argv.at(1), argv.at(2), argv.at(3));
}

void CreateCloudStorageSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id, std::string const& bucket) {
    //! [START pubsub_create_cloud_storage_subscription]
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.mutable_cloud_storage_config()->set_bucket(bucket);
    auto sub = client.CreateSubscription(request);
    if (!sub) {
      if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
        std::cout << "The subscription already exists\n";
        return;
      }
      throw std::move(sub).status();
    }

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
    //! [END pubsub_create_cloud_storage_subscription]
  }(std::move(client), argv.at(0), argv.at(1), argv.at(2), argv.at(3));
}

void CreateDeadLetterSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id,
     std::string const& dead_letter_topic_id,
     int dead_letter_delivery_attempts) {
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.mutable_dead_letter_policy()->set_dead_letter_topic(
        pubsub::Topic(project_id, dead_letter_topic_id).FullName());
    request.mutable_dead_letter_policy()->set_max_delivery_attempts(
        dead_letter_delivery_attempts);
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";

    std::cout << "It will forward dead letter messages to: "
              << sub->dead_letter_policy().dead_letter_topic() << "\n";

    std::cout << "After " << sub->dead_letter_policy().max_delivery_attempts()
              << " delivery attempts.\n";
  }(std::move(client), argv.at(0), argv.at(1), argv.at(2), argv.at(3),
    std::stoi(argv.at(4)));
}

void CreateSubscriptionWithExactlyOnceDelivery(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  // [START pubsub_create_subscription_with_exactly_once_delivery]
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id) {
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.set_enable_exactly_once_delivery(true);
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
  }
  // [END pubsub_create_subscription_with_exactly_once_delivery]
  (std::move(client), argv.at(0), argv.at(1), argv.at(2));
}

void CreateFilteredSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string topic_id,
     std::string subscription_id) {
    //! [START pubsub_create_subscription_with_filter]
    //! [create-filtered-subscription]
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, std::move(subscription_id))
            .FullName());
    request.set_topic(
        pubsub::Topic(project_id, std::move(topic_id)).FullName());
    request.set_filter(R"""(attributes.is-even = "false")""");
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
    //! [END pubsub_create_subscription_with_filter]
    //! [create-filtered-subscription]
  }(std::move(client), argv.at(0), argv.at(1), argv.at(2));
}

void CreateOrderingSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  //! [START pubsub_enable_subscription_ordering] [enable-subscription-ordering]
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id) {
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.set_enable_message_ordering(true);
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
  }
  //! [END pubsub_enable_subscription_ordering] [enable-subscription-ordering]
  (std::move(client), argv.at(0), argv.at(1), argv.at(2));
}

void CreatePushSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id, std::string const& endpoint) {
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.mutable_push_config()->set_push_endpoint(endpoint);
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
  }(std::move(client), argv.at(0), argv.at(1), argv.at(2), argv.at(3));
}

void CreateUnwrappedPushSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  //! [START pubsub_create_unwrapped_push_subscription]
  namespace pubsub = ::google::cloud::pubsub;
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& topic_id,
     std::string const& subscription_id, std::string const& endpoint) {
    google::pubsub::v1::Subscription request;
    request.set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.set_topic(pubsub::Topic(project_id, topic_id).FullName());
    request.mutable_push_config()->set_push_endpoint(endpoint);
    request.mutable_push_config()->mutable_no_wrapper()->set_write_metadata(
        true);
    auto sub = client.CreateSubscription(request);
    if (sub.status().code() == google::cloud::StatusCode::kAlreadyExists) {
      std::cout << "The subscription already exists\n";
      return;
    }
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription was successfully created: "
              << sub->DebugString() << "\n";
  }
  //! [END pubsub_create_unwrapped_push_subscription]
  (std::move(client), argv.at(0), argv.at(1), argv.at(2), argv.at(3));
}

void RemoveDeadLetterPolicy(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  //! [START pubsub_dead_letter_remove] [dead-letter-remove]
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  namespace pubsub = ::google::cloud::pubsub;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& subscription_id) {
    google::pubsub::v1::UpdateSubscriptionRequest request;
    request.mutable_subscription()->set_name(
        pubsub::Subscription(project_id, subscription_id).FullName());
    request.mutable_subscription()->clear_dead_letter_policy();
    *request.mutable_update_mask()->add_paths() = "dead_letter_policy";
    auto sub = client.UpdateSubscription(request);
    if (!sub) throw std::move(sub).status();

    std::cout << "The subscription has been updated to: " << sub->DebugString()
              << "\n";
  }
  //! [END pubsub_dead_letter_remove] [dead-letter-remove]
  (std::move(client), argv.at(0), argv.at(1));
}

void DeleteSubscription(
    google::cloud::pubsub_admin::SubscriptionAdminClient client,
    std::vector<std::string> const& argv) {
  namespace pubsub_admin = ::google::cloud::pubsub_admin;
  namespace pubsub = ::google::cloud::pubsub;
  [](pubsub_admin::SubscriptionAdminClient client,
     std::string const& project_id, std::string const& subscription_id) {
    auto status = client.DeleteSubscription(
        pubsub::Subscription(project_id, subscription_id).FullName());
    // Note that kNotFound is a possible result when the library retries.
    if (status.code() == google::cloud::StatusCode::kNotFound) {
      std::cout << "The subscription was not found\n";
      return;
    }
    if (!status.ok()) throw std::runtime_error(status.message());

    std::cout << "The subscription was successfully deleted\n";
  }(std::move(client), argv.at(0), argv.at(1));
}

void AutoRun(std::vector<std::string> const& argv) {
  namespace examples = ::google::cloud::testing_util;
  namespace pubsub = ::google::cloud::pubsub;
  using ::google::cloud::pubsub::examples::RandomSubscriptionId;
  using ::google::cloud::pubsub::examples::RandomTopicId;

  if (!argv.empty()) throw examples::Usage{"auto"};
  examples::CheckEnvironmentVariablesAreSet({"GOOGLE_CLOUD_PROJECT"});
  auto project_id =
      google::cloud::internal::GetEnv("GOOGLE_CLOUD_PROJECT").value();

  auto generator = google::cloud::internal::MakeDefaultPRNG();
  auto const topic_id = RandomTopicId(generator);
  auto const topic = google::cloud::pubsub::Topic(project_id, topic_id);
  auto const subscription_id = RandomSubscriptionId(generator);
  auto const subscription =
      google::cloud::pubsub::Subscription(project_id, subscription_id);
  auto const bigquery_subscription_id = RandomSubscriptionId(generator);
  auto const cloud_storage_subscription_id = RandomSubscriptionId(generator);
  auto const dead_letter_topic_id = "dead-letter-" + RandomTopicId(generator);
  auto const dead_letter_topic =
      google::cloud::pubsub::Topic(project_id, dead_letter_topic_id);
  auto const dead_letter_subscription_id = RandomSubscriptionId(generator);

  auto const exactly_once_subscription_id = RandomSubscriptionId(generator);
  auto const filtered_subscription_id = RandomSubscriptionId(generator);
  auto const ordering_topic_id = "ordering-" + RandomTopicId(generator);
  auto const ordering_topic =
      google::cloud::pubsub::Topic(project_id, ordering_topic_id);
  auto const ordering_subscription_id = RandomSubscriptionId(generator);
  auto const push_subscription_id = RandomSubscriptionId(generator);
  auto const unwrapped_push_subscription_id = RandomSubscriptionId(generator);

  auto topic_admin_client = google::cloud::pubsub_admin::TopicAdminClient(
      google::cloud::pubsub_admin::MakeTopicAdminConnection());
  google::cloud::pubsub_admin::SubscriptionAdminClient
      subscription_admin_client(
          google::cloud::pubsub_admin::MakeSubscriptionAdminConnection());

  using ::google::cloud::StatusCode;
  auto ignore_emulator_failures =
      [](auto lambda, StatusCode code = StatusCode::kUnimplemented) {
        try {
          lambda();
        } catch (google::cloud::Status const& s) {
          if (UsingEmulator() && s.code() == code) return;
          throw;
        } catch (...) {
          throw;
        }
      };

  std::cout << "\nCreate topic (" << topic_id << ")" << std::endl;
  topic_admin_client.CreateTopic(topic.FullName());
  std::cout << "\nCreate topic (" << dead_letter_topic_id << ")" << std::endl;
  topic_admin_client.CreateTopic(dead_letter_topic.FullName());
  std::cout << "\nCreate topic (" << ordering_topic_id << ")" << std::endl;
  topic_admin_client.CreateTopic(ordering_topic.FullName());
  Cleanup cleanup;
  cleanup.Defer([topic_admin_client, topic, ordering_topic]() mutable {
    std::cout << "\nDelete topic (" << topic.topic_id() << ")" << std::endl;
    (void)topic_admin_client.DeleteTopic(topic.FullName());
    std::cout << "\nDelete topic (" << ordering_topic.topic_id() << ")"
              << std::endl;
    (void)topic_admin_client.DeleteTopic(ordering_topic.FullName());
  });

  std::cout << "\nRunning CreateSubscription() [1] sample" << std::endl;
  CreateSubscription(subscription_admin_client,
                     {project_id, topic_id, subscription_id});
  cleanup.Defer(
      [subscription_admin_client, project_id, subscription_id]() mutable {
        std::cout << "\nRunning DeleteSubscription() sample" << std::endl;
        DeleteSubscription(subscription_admin_client,
                           {project_id, subscription_id});
      });

  // Verify kAlreadyExists is returned.
  std::cout << "\nRunning CreateSubscription() [2] sample" << std::endl;
  CreateSubscription(subscription_admin_client,
                     {project_id, topic_id, subscription_id});

  auto const bucket_id = project_id + "-pubsub-bucket";
  std::cout << "\nRunning CreateCloudStorageSubscription() sample" << std::endl;
  CreateCloudStorageSubscription(
      subscription_admin_client,
      {project_id, topic_id, cloud_storage_subscription_id, bucket_id});
  cleanup.Defer([subscription_admin_client, project_id,
                 cloud_storage_subscription_id]() mutable {
    std::cout << "\nDelete subscription (" << cloud_storage_subscription_id
              << ")" << std::endl;
    subscription_admin_client.DeleteSubscription(
        pubsub::Subscription(project_id, cloud_storage_subscription_id)
            .FullName());
  });

  // Hardcode this number as it does not really matter. The other samples
  // pick something between 10 and 15.
  auto constexpr kDeadLetterDeliveryAttempts = 15;

  std::cout << "\nRunning CreateDeadLetterSubscription() sample" << std::endl;
  CreateDeadLetterSubscription(
      subscription_admin_client,
      {project_id, topic_id, dead_letter_subscription_id, dead_letter_topic_id,
       std::to_string(kDeadLetterDeliveryAttempts)});
  cleanup.Defer([subscription_admin_client, topic_admin_client, project_id,
                 dead_letter_topic, dead_letter_subscription_id]() mutable {
    // You must delete the subscription before the topic.
    std::cout << "\nDelete subscription (" << dead_letter_subscription_id << ")"
              << std::endl;
    subscription_admin_client.DeleteSubscription(
        pubsub::Subscription(project_id, dead_letter_subscription_id)
            .FullName());
    std::cout << "\nDelete topic (" << dead_letter_topic.topic_id() << ")"
              << std::endl;
    (void)topic_admin_client.DeleteTopic(dead_letter_topic.FullName());
  });

  std::cout << "\nRunning RemoveDeadLetterPolicy() sample" << std::endl;
  ignore_emulator_failures([&] {
    RemoveDeadLetterPolicy(subscription_admin_client,
                           {project_id, dead_letter_subscription_id});
  });

  std::cout
      << "\nRunning CreateSubscriptionWithExactlyOnceDelivery() sample [1]"
      << std::endl;
  CreateSubscriptionWithExactlyOnceDelivery(
      subscription_admin_client,
      {project_id, topic_id, exactly_once_subscription_id});
  cleanup.Defer([subscription_admin_client, project_id,
                 exactly_once_subscription_id]() mutable {
    std::cout << "\nDelete subscription (" << exactly_once_subscription_id
              << ")" << std::endl;
    subscription_admin_client.DeleteSubscription(
        pubsub::Subscription(project_id, exactly_once_subscription_id)
            .FullName());
  });

  std::cout
      << "\nRunning CreateSubscriptionWithExactlyOnceDelivery() sample [2]"
      << std::endl;
  CreateSubscriptionWithExactlyOnceDelivery(
      subscription_admin_client,
      {project_id, topic_id, exactly_once_subscription_id});

  std::cout << "\nRunning CreateFilteredSubscription() sample [1]" << std::endl;
  CreateFilteredSubscription(subscription_admin_client,
                             {project_id, topic_id, filtered_subscription_id});
  cleanup.Defer([subscription_admin_client, project_id,
                 filtered_subscription_id]() mutable {
    std::cout << "\nDelete subscription (" << filtered_subscription_id << ")"
              << std::endl;
    subscription_admin_client.DeleteSubscription(
        google::cloud::pubsub::Subscription(project_id,
                                            filtered_subscription_id)
            .FullName());
  });

  std::cout << "\nRunning CreateFilteredSubscription() sample [2]" << std::endl;
  CreateFilteredSubscription(subscription_admin_client,
                             {project_id, topic_id, filtered_subscription_id});
  std::cout << "\nRunning CreateOrderingSubscription() sample" << std::endl;
  CreateOrderingSubscription(
      subscription_admin_client,
      {project_id, ordering_topic_id, ordering_subscription_id});
  cleanup.Defer([subscription_admin_client, project_id,
                 ordering_subscription_id]() mutable {
    std::cout << "\nDelete subscription (" << ordering_subscription_id << ")"
              << std::endl;
    subscription_admin_client.DeleteSubscription(
        pubsub::Subscription(project_id, ordering_subscription_id).FullName());
  });
  auto const endpoint1 = "https://" + project_id + ".appspot.com/push1";
  auto const endpoint2 = "https://" + project_id + ".appspot.com/push2";
  std::cout << "\nRunning CreatePushSubscription() sample [1]" << std::endl;
  CreatePushSubscription(
      subscription_admin_client,
      {project_id, topic_id, push_subscription_id, endpoint1});
  cleanup.Defer(
      [subscription_admin_client, project_id, push_subscription_id]() mutable {
        std::cout << "\nDelete subscription (" << push_subscription_id << ")"
                  << std::endl;
        subscription_admin_client.DeleteSubscription(
            pubsub::Subscription(project_id, push_subscription_id).FullName());
      });

  std::cout << "\nRunning CreatePushSubscription() sample [2]" << std::endl;
  CreatePushSubscription(
      subscription_admin_client,
      {project_id, topic_id, push_subscription_id, endpoint1});

  std::cout << "\nRunning CreateUnwrappedPushSubscription() sample [3]"
            << std::endl;
  CreateUnwrappedPushSubscription(
      subscription_admin_client,
      {project_id, topic_id, unwrapped_push_subscription_id, endpoint1});
  cleanup.Defer([subscription_admin_client, project_id,
                 unwrapped_push_subscription_id]() mutable {
    std::cout << "\nDelete subscription (" << unwrapped_push_subscription_id
              << ")" << std::endl;
    subscription_admin_client.DeleteSubscription(
        pubsub::Subscription(project_id, unwrapped_push_subscription_id)
            .FullName());
  });

  std::cout << "\nAutoRun done" << std::endl;
}

}  // namespace

int main(int argc, char* argv[]) {  // NOLINT(bugprone-exception-escape)
  using ::google::cloud::testing_util::Example;

  Example example({
      CreateSubscriptionAdminCommand(
          "create-subscription", {"project-id", "topic-id", "subscription-id"},
          CreateSubscription),
      CreateSubscriptionAdminCommand(
          "create-bigquery-subscription",
          {"project-id", "topic-id", "subscription-id", "table-id"},
          CreateBigQuerySubscription),
      CreateSubscriptionAdminCommand(
          "create-cloud-storage-subscription",
          {"project-id", "topic-id", "subscription-id", "bucket"},
          CreateCloudStorageSubscription),
      CreateSubscriptionAdminCommand(
          "create-dead-letter-subscription",
          {"project-id", "topic-id", "subscription-id", "dead-letter-topic-id",
           "dead-letter-delivery-attempts"},
          CreateDeadLetterSubscription),
      CreateSubscriptionAdminCommand(
          "create-subscription-with-exactly-once-delivery",
          {"project-id", "topic-id", "subscription-id"},
          CreateSubscriptionWithExactlyOnceDelivery),
      CreateSubscriptionAdminCommand(
          "create-filtered-subscription",
          {"project-id", "topic-id", "subscription-id"},
          CreateFilteredSubscription),
      CreateSubscriptionAdminCommand(
          "create-ordering-subscription",
          {"project-id", "topic-id", "subscription-id"},
          CreateOrderingSubscription),
      CreateSubscriptionAdminCommand(
          "create-push-subscription",
          {"project-id", "topic-id", "subscription-id", "endpoint"},
          CreatePushSubscription),
      CreateSubscriptionAdminCommand(
          "create-unwrapped-push-subscription",
          {"project-id", "topic-id", "subscription-id", "endpoint"},
          CreateUnwrappedPushSubscription),
      CreateSubscriptionAdminCommand("remove-dead-letter-policy",
                                     {"project-id", "subscription-id"},
                                     RemoveDeadLetterPolicy),
      CreateSubscriptionAdminCommand("delete-subscription",
                                     {"project-id", "subscription-id"},
                                     DeleteSubscription),
      {"auto", AutoRun},
  });

  return example.Run(argc, argv);
}
