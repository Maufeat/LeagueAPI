#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLoot.hpp"
namespace lol {
  inline Result<std::map<std::string, LolLootPlayerLoot>> GetLolLootV1PlayerLootMap(LeagueClient& _client)
  {
    try {
      return ToResult<std::map<std::string, LolLootPlayerLoot>>(_client.https.request("get", "/lol-loot/v1/player-loot-map?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::map<std::string, LolLootPlayerLoot>>(e.code());
    }
  }
  inline void GetLolLootV1PlayerLootMap(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::map<std::string, LolLootPlayerLoot>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/player-loot-map?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::map<std::string, LolLootPlayerLoot>>(e));
            else
              cb(_client, ToResult<std::map<std::string, LolLootPlayerLoot>>(response));
        });
  }
}