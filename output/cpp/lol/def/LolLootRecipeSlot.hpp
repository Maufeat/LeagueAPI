#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootRecipeSlot { 
    int32_t quantity;
    std::vector<std::string> lootIds;
    std::string tags;
    int32_t slotNumber; 
  };
  void to_json(json& j, const LolLootRecipeSlot& v) {
  j["quantity"] = v.quantity; 
  j["lootIds"] = v.lootIds; 
  j["tags"] = v.tags; 
  j["slotNumber"] = v.slotNumber; 
  }
  void from_json(const json& j, LolLootRecipeSlot& v) {
  v.quantity = j.at("quantity").get<int32_t>(); 
  v.lootIds = j.at("lootIds").get<std::vector<std::string>>(); 
  v.tags = j.at("tags").get<std::string>(); 
  v.slotNumber = j.at("slotNumber").get<int32_t>(); 
  }
}