#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootLootItem.hpp"
namespace lol {
  inline Result<std::vector<LolLootLootItem>> GetLolLootV1LootItems(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLootLootItem>>(_client.https.request("get", "/lol-loot/v1/loot-items?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootLootItem>>(e.code());
    }
  }
  inline void GetLolLootV1LootItems(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLootLootItem>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/loot-items?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLootLootItem>>(e));
            else
              cb(_client, ToResult<std::vector<LolLootLootItem>>(response));
        });
  }
}