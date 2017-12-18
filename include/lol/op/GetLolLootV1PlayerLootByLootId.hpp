#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLoot.hpp"
namespace lol {
  inline Result<LolLootPlayerLoot> GetLolLootV1PlayerLootByLootId(LeagueClient& _client, const std::string& lootId)
  {
    try {
      return ToResult<LolLootPlayerLoot>(_client.https.request("get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLootPlayerLoot>(e.code());
    }
  }
  inline void GetLolLootV1PlayerLootByLootId(LeagueClient& _client, const std::string& lootId, std::function<void(LeagueClient&, const Result<LolLootPlayerLoot>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLootPlayerLoot>(e));
            else
              cb(_client, ToResult<LolLootPlayerLoot>(response));
        });
  }
}