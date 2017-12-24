#pragma once
#include "../base_def.hpp" 
#include "LolLootLootRecipeGdsResource.hpp"
#include "LolLootLootItemGdsResource.hpp"
namespace lol {
  struct LolLootLootDataGdsResource { 
    std::vector<LolLootLootRecipeGdsResource> LootRecipes;
    std::vector<LolLootLootItemGdsResource> LootItems; 
  };
  inline void to_json(json& j, const LolLootLootDataGdsResource& v) {
    j["LootRecipes"] = v.LootRecipes; 
    j["LootItems"] = v.LootItems; 
  }
  inline void from_json(const json& j, LolLootLootDataGdsResource& v) {
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource>>(); 
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource>>(); 
  }
}