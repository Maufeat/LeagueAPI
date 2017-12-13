#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolInventoryItemOwnershipType.hpp>
namespace lol {
  struct LolInventoryInventoryItem { 
    int32_t itemId;
    LolInventoryItemOwnershipType ownershipType;
    std::string inventoryType; 
  };
  void to_json(json& j, const LolInventoryInventoryItem& v) {
  j["itemId"] = v.itemId; 
  j["ownershipType"] = v.ownershipType; 
  j["inventoryType"] = v.inventoryType; 
  }
  void from_json(const json& j, LolInventoryInventoryItem& v) {
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}