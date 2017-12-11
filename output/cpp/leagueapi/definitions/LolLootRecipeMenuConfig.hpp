#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootRecipeMenuConfig { /**/ 
    bool enabled;/**/
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;/**/
    std::vector<std::string> alwaysShowLootIds;/**/
  };
  static void to_json(json& j, const LolLootRecipeMenuConfig& v) { 
    j["enabled"] = v.enabled;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
    j["alwaysShowLootIds"] = v.alwaysShowLootIds;
  }
  static void from_json(const json& j, LolLootRecipeMenuConfig& v) { 
    v.enabled = j.at("enabled").get<bool>(); 
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>(); 
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>(); 
  }
} 