#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootRecipe.hpp"
namespace lol {
  inline Result<std::vector<LolLootRecipe>> PostLolLootV1RecipesInitialItemByLootId(LeagueClient& _client, const std::string& lootId)
  {
    try {
      return Result<std::vector<LolLootRecipe>> {
        _client.https.request("post", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLootRecipe>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLootV1RecipesInitialItemByLootId(LeagueClient& _client, const std::string& lootId, std::function<void(LeagueClient&,const Result<std::vector<LolLootRecipe>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLootRecipe>> { response });
          else
            cb(_client,Result<std::vector<LolLootRecipe>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}