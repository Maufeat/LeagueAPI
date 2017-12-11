#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootRecipeSlot { /**/ 
    int32_t quantity;/**/
    std::vector<std::string> lootIds;/**/
    std::string tags;/**/
    int32_t slotNumber;/**/
  };
  static void to_json(json& j, const LolLootRecipeSlot& v) { 
    j["quantity"] = v.quantity;
    j["lootIds"] = v.lootIds;
    j["tags"] = v.tags;
    j["slotNumber"] = v.slotNumber;
  }
  static void from_json(const json& j, LolLootRecipeSlot& v) { 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
  }
} 