#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootInventoryOwnership.hpp>
namespace lol {
  struct LolLootCollectionsEmote { 
    LolLootInventoryOwnership ownershipType;
    int64_t itemId; 
  };
  void to_json(json& j, const LolLootCollectionsEmote& v) {
  j["ownershipType"] = v.ownershipType; 
  j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, LolLootCollectionsEmote& v) {
  v.ownershipType = j.at("ownershipType").get<LolLootInventoryOwnership>(); 
  v.itemId = j.at("itemId").get<int64_t>(); 
  }
}