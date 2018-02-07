#pragma once
#include "../base_def.hpp" 
#include "LolLootInventoryOwnership.hpp"
namespace lol {
  struct LolLootCollectionsEmote { 
    int64_t itemId;
    LolLootInventoryOwnership ownershipType; 
  };
  inline void to_json(json& j, const LolLootCollectionsEmote& v) {
    j["itemId"] = v.itemId; 
    j["ownershipType"] = v.ownershipType; 
  }
  inline void from_json(const json& j, LolLootCollectionsEmote& v) {
    v.itemId = j.at("itemId").get<int64_t>(); 
    v.ownershipType = j.at("ownershipType").get<LolLootInventoryOwnership>(); 
  }
}