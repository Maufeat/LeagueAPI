#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootLootGrantNotification.hpp>
namespace lol {
  inline Result<std::vector<LolLootLootGrantNotification>> GetLolLootV1LootGrants(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLootLootGrantNotification>> {
        _client_.request("get", "/lol-loot/v1/loot-grants?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootLootGrantNotification>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}