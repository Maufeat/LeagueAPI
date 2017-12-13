#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherNotificationId.hpp>
namespace lol {
  Result<void> PostPatcherV1Notifications(const LeagueClient& _client, const PatcherNotificationId& notificationId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/patcher/v1/notifications?" + SimpleWeb::QueryString::create(Args2Headers({ { "notificationId", to_string(notificationId) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}