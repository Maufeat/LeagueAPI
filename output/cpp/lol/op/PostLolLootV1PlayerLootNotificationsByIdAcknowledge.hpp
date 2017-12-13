#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PostLolLootV1PlayerLootNotificationsByIdAcknowledge(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loot/v1/player-loot-notifications/"+to_string(id)+"/acknowledge?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}