#pragma once
#include "../base_op.hpp" 
#include "../def/LolLootPlayerLoot.hpp"
namespace lol {
  inline Result<std::map<std::string, LolLootPlayerLoot>> GetLolLootV1PlayerLootMap(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::map<std::string, LolLootPlayerLoot>> {
        _client_.request("get", "/lol-loot/v1/player-loot-map?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::map<std::string, LolLootPlayerLoot>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}