#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LeaverBusterNotificationResource.hpp>
namespace lol {
  Result<LeaverBusterNotificationResource> GetLolLeaverBusterV1NotificationsById(const LeagueClient& _client, const uint32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}