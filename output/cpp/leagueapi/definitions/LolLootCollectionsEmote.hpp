#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLootInventoryOwnership.hpp>

namespace leagueapi {
  struct LolLootCollectionsEmote { /**/ 
    int64_t itemId;/**/
    LolLootInventoryOwnership ownershipType;/**/
  };
  static void to_json(json& j, const LolLootCollectionsEmote& v) { 
    j["itemId"] = v.itemId;
    j["ownershipType"] = v.ownershipType;
  }
  static void from_json(const json& j, LolLootCollectionsEmote& v) { 
    v.itemId = j.at("itemId").get<int64_t>(); 
    v.ownershipType = j.at("ownershipType").get<LolLootInventoryOwnership>(); 
  }
} 