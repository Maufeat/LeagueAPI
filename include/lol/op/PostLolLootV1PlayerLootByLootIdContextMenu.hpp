#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootContextMenu.hpp"
namespace lol {
  inline Result<std::vector<LolLootContextMenu>> PostLolLootV1PlayerLootByLootIdContextMenu(LeagueClient& _client, const std::string& lootId)
  {
    try {
      return ToResult<std::vector<LolLootContextMenu>>(_client.https.request("post", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/context-menu?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootContextMenu>>(e.code());
    }
  }
  inline void PostLolLootV1PlayerLootByLootIdContextMenu(LeagueClient& _client, const std::string& lootId, std::function<void(LeagueClient&, const Result<std::vector<LolLootContextMenu>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/context-menu?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLootContextMenu>>(e));
            else
              cb(_client, ToResult<std::vector<LolLootContextMenu>>(response));
        });
  }
}