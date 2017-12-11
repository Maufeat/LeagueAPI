#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolInventoryCatalogItem { /**/ 
    int32_t itemId;/**/
    std::string inventoryType;/**/
    std::optional<std::string> itemInstanceId;/**/
  };
  static void to_json(json& j, const LolInventoryCatalogItem& v) { 
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["itemInstanceId"] = v.itemInstanceId;
  }
  static void from_json(const json& j, LolInventoryCatalogItem& v) { 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemInstanceId = j.at("itemInstanceId").get<std::optional<std::string>>(); 
  }
} 