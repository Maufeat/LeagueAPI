#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootContextMenu.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLootContextMenu>> GetLolLootV1PlayerLootByLootIdContextMenu(T& _client, const std::string& lootId)
  {
    try {
      return ToResult<std::vector<LolLootContextMenu>>(_client.https.request("get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/context-menu?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootContextMenu>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLootV1PlayerLootByLootIdContextMenu(T& _client, const std::string& lootId, std::function<void(T&, const Result<std::vector<LolLootContextMenu>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/context-menu?" +
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