#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootLootGrantNotification.hpp>
namespace lol {
  Result<std::vector<LolLootLootGrantNotification>> GetLolLootV1LootGrants(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/loot-grants?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}