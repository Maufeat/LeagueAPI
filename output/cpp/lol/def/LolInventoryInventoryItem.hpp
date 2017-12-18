#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolInventoryItemOwnershipType.hpp>
namespace lol {
  struct LolInventoryInventoryItem { 
    LolInventoryItemOwnershipType ownershipType;
    std::string inventoryType;
    int32_t itemId; 
  };
  inline void to_json(json& j, const LolInventoryInventoryItem& v) {
    j["ownershipType"] = v.ownershipType; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, LolInventoryInventoryItem& v) {
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}