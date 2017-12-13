#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLoot.hpp>
namespace lol {
  Result<std::map<std::string, LolLootPlayerLoot>> GetLolLootV1PlayerLootMap(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/player-loot-map?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}