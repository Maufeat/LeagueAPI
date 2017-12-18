#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootLootItem.hpp"
namespace lol {
  inline Result<std::vector<LolLootLootItem>> GetLolLootV1LootItems(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLootLootItem>> {
        _client.https.request("get", "/lol-loot/v1/loot-items?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootLootItem>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLootV1LootItems(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLootLootItem>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/loot-items?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLootLootItem>> { response });
          else
            cb(_client,Result<std::vector<LolLootLootItem>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}