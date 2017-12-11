#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootRecipe.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLootRecipe>> GetLolLootV1RecipesInitialItemByLootId (const https::Info& _info_,
      const std::string& lootId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?", { 
    }, { 
    },"") };
  }
} 