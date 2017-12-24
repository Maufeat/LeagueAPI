#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootRecipeSlot { 
    int32_t slotNumber;
    int32_t quantity;
    std::string tags;
    std::vector<std::string> lootIds; 
  };
  inline void to_json(json& j, const LolLootRecipeSlot& v) {
    j["slotNumber"] = v.slotNumber; 
    j["quantity"] = v.quantity; 
    j["tags"] = v.tags; 
    j["lootIds"] = v.lootIds; 
  }
  inline void from_json(const json& j, LolLootRecipeSlot& v) {
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>(); 
  }
}