#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootLootItemGdsResource.hpp>"
#include "<leagueapi/definitions/LolLootLootRecipeGdsResource.hpp>"

namespace leagueapi {
  struct LolLootLootDataGdsResource { /**/ 
    std::vector<LolLootLootRecipeGdsResource> LootRecipes;/**/
    std::vector<LolLootLootItemGdsResource> LootItems;/**/
  };
  static void to_json(json& j, const LolLootLootDataGdsResource& v) { 
    j["LootRecipes"] = v.LootRecipes;
    j["LootItems"] = v.LootItems;
  }
  static void from_json(const json& j, LolLootLootDataGdsResource& v) { 
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource>>(); 
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource>>(); 
  }
} 