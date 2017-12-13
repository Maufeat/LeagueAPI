#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLootUpdate.hpp>
namespace lol {
  Result<LolLootPlayerLootUpdate> PostLolLootV1RecipesByRecipeNameCraft(const LeagueClient& _client, const std::string& recipeName, const std::vector<std::string>& playerLootList, const std::optional<int32_t>& repeat = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?" + SimpleWeb::QueryString::create(Args2Headers({ { "repeat", to_string(repeat) } })), json(playerLootList).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}