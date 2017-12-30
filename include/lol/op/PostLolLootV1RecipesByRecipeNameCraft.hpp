#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootPlayerLootUpdate.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLootPlayerLootUpdate> PostLolLootV1RecipesByRecipeNameCraft(T& _client, const std::string& recipeName, const std::vector<std::string>& playerLootList, const std::optional<int32_t>& repeat = std::nullopt)
  {
    try {
      return ToResult<LolLootPlayerLootUpdate>(_client.https.request("post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "repeat", to_string(repeat) }, })), 
        json(playerLootList).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLootPlayerLootUpdate>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLootV1RecipesByRecipeNameCraft(T& _client, const std::string& recipeName, const std::vector<std::string>& playerLootList, const std::optional<int32_t>& repeat = std::nullopt, std::function<void(T&, const Result<LolLootPlayerLootUpdate>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "repeat", to_string(repeat) }, })), 
        json(playerLootList).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLootPlayerLootUpdate>(e));
            else
              cb(_client, ToResult<LolLootPlayerLootUpdate>(response));
        });
  }
}