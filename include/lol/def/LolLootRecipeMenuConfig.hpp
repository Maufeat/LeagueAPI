#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootRecipeMenuConfig { 
    bool enabled;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    std::vector<std::string> alwaysShowLootIds; 
  };
  inline void to_json(json& j, const LolLootRecipeMenuConfig& v) {
    j["enabled"] = v.enabled; 
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu; 
    j["alwaysShowLootIds"] = v.alwaysShowLootIds; 
  }
  inline void from_json(const json& j, LolLootRecipeMenuConfig& v) {
    v.enabled = j.at("enabled").get<bool>(); 
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>(); 
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>(); 
  }
}