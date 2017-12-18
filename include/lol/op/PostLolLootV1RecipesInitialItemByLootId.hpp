#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootRecipe.hpp"
namespace lol {
  inline Result<std::vector<LolLootRecipe>> PostLolLootV1RecipesInitialItemByLootId(LeagueClient& _client, const std::string& lootId)
  {
    try {
      return ToResult<std::vector<LolLootRecipe>>(_client.https.request("post", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootRecipe>>(e.code());
    }
  }
  inline void PostLolLootV1RecipesInitialItemByLootId(LeagueClient& _client, const std::string& lootId, std::function<void(LeagueClient&, const Result<std::vector<LolLootRecipe>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLootRecipe>>(e));
            else
              cb(_client, ToResult<std::vector<LolLootRecipe>>(response));
        });
  }
}