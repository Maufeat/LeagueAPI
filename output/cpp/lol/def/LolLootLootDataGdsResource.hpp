#pragma once
#include "../base_def.hpp" 
#include "LolLootLootItemGdsResource.hpp"
#include "LolLootLootRecipeGdsResource.hpp"
namespace lol {
  struct LolLootLootDataGdsResource { 
    std::vector<LolLootLootItemGdsResource> LootItems;
    std::vector<LolLootLootRecipeGdsResource> LootRecipes; 
  };
  inline void to_json(json& j, const LolLootLootDataGdsResource& v) {
    j["LootItems"] = v.LootItems; 
    j["LootRecipes"] = v.LootRecipes; 
  }
  inline void from_json(const json& j, LolLootLootDataGdsResource& v) {
    v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource>>(); 
    v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource>>(); 
  }
}