#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootRecipeMenuConfig { 
    std::vector<std::string> alwaysShowLootIds;
    bool enabled;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu; 
  };
  inline void to_json(json& j, const LolLootRecipeMenuConfig& v) {
    j["alwaysShowLootIds"] = v.alwaysShowLootIds; 
    j["enabled"] = v.enabled; 
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu; 
  }
  inline void from_json(const json& j, LolLootRecipeMenuConfig& v) {
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>(); 
  }
}