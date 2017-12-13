#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLoot.hpp>
namespace lol {
  Result<LolLootPlayerLoot> GetLolLootV1PlayerLootByLootId(const LeagueClient& _client, const std::string& lootId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}