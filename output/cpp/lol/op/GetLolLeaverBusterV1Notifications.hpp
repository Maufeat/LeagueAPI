#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LeaverBusterNotificationResource.hpp>
namespace lol {
  Result<std::vector<LeaverBusterNotificationResource>> GetLolLeaverBusterV1Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leaver-buster/v1/notifications?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}