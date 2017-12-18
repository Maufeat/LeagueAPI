#pragma once
#include "../base_op.hpp" 
#include "../def/LolLootLootItem.hpp"
namespace lol {
  inline Result<std::vector<LolLootLootItem>> GetLolLootV1LootItems(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLootLootItem>> {
        _client_.request("get", "/lol-loot/v1/loot-items?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootLootItem>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}