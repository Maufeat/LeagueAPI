#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLootNotification.hpp>
namespace lol {
  Result<std::vector<LolLootPlayerLootNotification>> GetLolLootV1PlayerLootNotifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/player-loot-notifications?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}