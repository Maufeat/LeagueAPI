#pragma once
#include "../base_def.hpp" 
#include "LolInventoryItemOwnershipType.hpp"
namespace lol {
  struct LolInventoryInventoryItem { 
    LolInventoryItemOwnershipType ownershipType;
    int32_t itemId;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolInventoryInventoryItem& v) {
    j["ownershipType"] = v.ownershipType; 
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolInventoryInventoryItem& v) {
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}