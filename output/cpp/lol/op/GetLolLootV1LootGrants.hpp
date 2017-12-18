#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootLootGrantNotification.hpp"
namespace lol {
  inline Result<std::vector<LolLootLootGrantNotification>> GetLolLootV1LootGrants(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLootLootGrantNotification>> {
        _client.https.request("get", "/lol-loot/v1/loot-grants?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootLootGrantNotification>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLootV1LootGrants(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLootLootGrantNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/loot-grants?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLootLootGrantNotification>> { response });
          else
            cb(_client,Result<std::vector<LolLootLootGrantNotification>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}