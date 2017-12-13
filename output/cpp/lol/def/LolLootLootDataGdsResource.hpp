#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootLootRecipeGdsResource.hpp>
#include <lol/def/LolLootLootItemGdsResource.hpp>
namespace lol {
  struct LolLootLootDataGdsResource { 
    std::vector<LolLootLootRecipeGdsResource> LootRecipes;
    std::vector<LolLootLootItemGdsResource> LootItems; 
  };
  void to_json(json& j, const LolLootLootDataGdsResource& v) {
  j["LootRecipes"] = v.LootRecipes; 
  j["LootItems"] = v.LootItems; 
  }
  void from_json(const json& j, LolLootLootDataGdsResource& v) {
  v.LootRecipes = j.at("LootRecipes").get<std::vector<LolLootLootRecipeGdsResource>>(); 
  v.LootItems = j.at("LootItems").get<std::vector<LolLootLootItemGdsResource>>(); 
  }
}