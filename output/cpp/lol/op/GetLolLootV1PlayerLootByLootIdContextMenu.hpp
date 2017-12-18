#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootContextMenu.hpp>
namespace lol {
  inline Result<std::vector<LolLootContextMenu>> GetLolLootV1PlayerLootByLootIdContextMenu(const LeagueClient& _client, const std::string& lootId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLootContextMenu>> {
        _client_.request("get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/context-menu?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootContextMenu>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}