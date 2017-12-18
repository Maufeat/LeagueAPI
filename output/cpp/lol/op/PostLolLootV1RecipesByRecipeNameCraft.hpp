#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLootUpdate.hpp"
namespace lol {
  inline Result<LolLootPlayerLootUpdate> PostLolLootV1RecipesByRecipeNameCraft(LeagueClient& _client, const std::string& recipeName, const std::vector<std::string>& playerLootList, const std::optional<int32_t>& repeat = std::nullopt)
  {
    try {
      return Result<LolLootPlayerLootUpdate> {
        _client.https.request("post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "repeat", to_string(repeat) }, })), 
          json(playerLootList).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLootPlayerLootUpdate> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLootV1RecipesByRecipeNameCraft(LeagueClient& _client, const std::string& recipeName, const std::vector<std::string>& playerLootList, const std::optional<int32_t>& repeat = std::nullopt, std::function<void(LeagueClient&,const Result<LolLootPlayerLootUpdate>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "repeat", to_string(repeat) }, })), 
          json(playerLootList).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLootPlayerLootUpdate> { response });
          else
            cb(_client,Result<LolLootPlayerLootUpdate> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}