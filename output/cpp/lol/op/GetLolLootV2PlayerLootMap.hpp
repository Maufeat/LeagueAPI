#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLootMap.hpp>
namespace lol {
  Result<LolLootPlayerLootMap> GetLolLootV2PlayerLootMap(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLootPlayerLootMap> {
        _client_.request("get", "/lol-loot/v2/player-loot-map?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLootPlayerLootMap> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}