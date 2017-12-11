#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolBannersLoadoutsSlot { /**/ 
    int64_t itemId;/**/
    std::string inventoryType;/**/
  };
  static void to_json(json& j, const LolBannersLoadoutsSlot& v) { 
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
  }
  static void from_json(const json& j, LolBannersLoadoutsSlot& v) { 
    v.itemId = j.at("itemId").get<int64_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
} 