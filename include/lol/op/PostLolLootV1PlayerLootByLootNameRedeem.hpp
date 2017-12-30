#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLootUpdate.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLootPlayerLootUpdate> PostLolLootV1PlayerLootByLootNameRedeem(T& _client, const std::string& lootName)
  {
    try {
      return ToResult<LolLootPlayerLootUpdate>(_client.https.request("post", "/lol-loot/v1/player-loot/"+to_string(lootName)+"/redeem?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLootPlayerLootUpdate>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLootV1PlayerLootByLootNameRedeem(T& _client, const std::string& lootName, std::function<void(T&, const Result<LolLootPlayerLootUpdate>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/player-loot/"+to_string(lootName)+"/redeem?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLootPlayerLootUpdate>(e));
            else
              cb(_client, ToResult<LolLootPlayerLootUpdate>(response));
        });
  }
}