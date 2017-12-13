#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLootUpdate.hpp>
namespace lol {
  Result<LolLootPlayerLootUpdate> PostLolLootV1RecipesByRecipeNameCraft(const LeagueClient& _client, const std::string& recipeName, const std::vector<std::string>& playerLootList, const std::optional<int32_t>& repeat = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLootPlayerLootUpdate> {
        _client_.request("post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "repeat", to_string(repeat) }, })), 
          json(playerLootList).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLootPlayerLootUpdate> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}