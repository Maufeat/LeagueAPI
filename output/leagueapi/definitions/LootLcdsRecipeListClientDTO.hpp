#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LootLcdsRecipeClientDTO.hpp>"

namespace leagueapi {
  struct LootLcdsRecipeListClientDTO { /**/ 
    std::vector<LootLcdsRecipeClientDTO> recipes;/**/
    int64_t lastUpdate;/**/
  };
  static void to_json(json& j, const LootLcdsRecipeListClientDTO& v) { 
    j["recipes"] = v.recipes;
    j["lastUpdate"] = v.lastUpdate;
  }
  static void from_json(const json& j, LootLcdsRecipeListClientDTO& v) { 
    v.recipes = j.at("recipes").get<std::vector<LootLcdsRecipeClientDTO>>(); 
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
  }
} 