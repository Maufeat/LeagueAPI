#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLootUpdate.hpp>
namespace lol {
  Result<LolLootPlayerLootUpdate> PostLolLootV1PlayerLootByLootNameRedeem(const LeagueClient& _client, const std::string& lootName)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loot/v1/player-loot/"+to_string(lootName)+"/redeem?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}