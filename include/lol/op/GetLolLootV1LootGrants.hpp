#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootLootGrantNotification.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLootLootGrantNotification>> GetLolLootV1LootGrants(T& _client)
  {
    try {
      return ToResult<std::vector<LolLootLootGrantNotification>>(_client.https.request("get", "/lol-loot/v1/loot-grants?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootLootGrantNotification>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLootV1LootGrants(T& _client, std::function<void(T&, const Result<std::vector<LolLootLootGrantNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/loot-grants?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLootLootGrantNotification>>(e));
            else
              cb(_client, ToResult<std::vector<LolLootLootGrantNotification>>(response));
        });
  }
}