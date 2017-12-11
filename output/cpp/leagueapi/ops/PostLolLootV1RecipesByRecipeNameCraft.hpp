#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootPlayerLootUpdate.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLootPlayerLootUpdate> PostLolLootV1RecipesByRecipeNameCraft (const https::Info& _info_,
      const std::string& recipeName /**/,
      const std::vector<std::string>& playerLootList /**/ ,
      const std::optional<int32_t>& repeat = std::nullopt /**/)
  { 
    return { https::Do(_info_, "post", "/lol-loot/v1/recipes/"+to_string(recipeName)+"/craft?", { 
      { "repeat", to_string(repeat) },
    }, { 
    },playerLootList) };
  }
} 