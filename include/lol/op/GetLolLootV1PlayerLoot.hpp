#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLoot.hpp"
namespace lol {
  inline Result<std::vector<LolLootPlayerLoot>> GetLolLootV1PlayerLoot(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLootPlayerLoot>>(_client.https.request("get", "/lol-loot/v1/player-loot?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootPlayerLoot>>(e.code());
    }
  }
  inline void GetLolLootV1PlayerLoot(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLootPlayerLoot>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/player-loot?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLootPlayerLoot>>(e));
            else
              cb(_client, ToResult<std::vector<LolLootPlayerLoot>>(response));
        });
  }
}