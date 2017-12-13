#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootLootItem.hpp>
namespace lol {
  Result<std::vector<LolLootLootItem>> GetLolLootV1LootItems(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/loot-items?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}