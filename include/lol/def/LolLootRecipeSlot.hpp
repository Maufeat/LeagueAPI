#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootRecipeSlot { 
    int32_t slotNumber;
    std::vector<std::string> lootIds;
    std::string tags;
    int32_t quantity; 
  };
  inline void to_json(json& j, const LolLootRecipeSlot& v) {
    j["slotNumber"] = v.slotNumber; 
    j["lootIds"] = v.lootIds; 
    j["tags"] = v.tags; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, LolLootRecipeSlot& v) {
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
  }
}