#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootRecipeMenuConfig { 
    std::vector<std::string> alwaysShowLootIds;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    bool enabled; 
  };
  inline void to_json(json& j, const LolLootRecipeMenuConfig& v) {
    j["alwaysShowLootIds"] = v.alwaysShowLootIds; 
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu; 
    j["enabled"] = v.enabled; 
  }
  inline void from_json(const json& j, LolLootRecipeMenuConfig& v) {
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>(); 
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>(); 
    v.enabled = j.at("enabled").get<bool>(); 
  }
}