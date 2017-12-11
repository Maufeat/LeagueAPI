#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoadoutsItemKey { /**/ 
    int32_t itemId;/**/
    std::string inventoryType;/**/
  };
  static void to_json(json& j, const LolLoadoutsItemKey& v) { 
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
  }
  static void from_json(const json& j, LolLoadoutsItemKey& v) { 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
} 