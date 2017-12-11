#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolInventoryRmsEntitlementPayload { /**/ 
    std::string itemId;/**/
    std::string itemTypeId;/**/
  };
  static void to_json(json& j, const LolInventoryRmsEntitlementPayload& v) { 
    j["itemId"] = v.itemId;
    j["itemTypeId"] = v.itemTypeId;
  }
  static void from_json(const json& j, LolInventoryRmsEntitlementPayload& v) { 
    v.itemId = j.at("itemId").get<std::string>(); 
    v.itemTypeId = j.at("itemTypeId").get<std::string>(); 
  }
} 