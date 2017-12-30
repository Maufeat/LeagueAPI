#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLoot.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLootPlayerLoot>> GetLolLootV1PlayerLoot(T& _client)
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
  template<typename T>
  inline void GetLolLootV1PlayerLoot(T& _client, std::function<void(T&, const Result<std::vector<LolLootPlayerLoot>>&)> cb)
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