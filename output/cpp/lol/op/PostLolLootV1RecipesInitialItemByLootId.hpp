#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootRecipe.hpp>
namespace lol {
  Result<std::vector<LolLootRecipe>> PostLolLootV1RecipesInitialItemByLootId(const LeagueClient& _client, const std::string& lootId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}