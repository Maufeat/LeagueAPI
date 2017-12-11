#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolBannersInventoryItemsByType.hpp>

namespace leagueapi {
  struct LolBannersInventoryResponse { /**/ 
    LolBannersInventoryItemsByType items;/**/
  };
  static void to_json(json& j, const LolBannersInventoryResponse& v) { 
    j["items"] = v.items;
  }
  static void from_json(const json& j, LolBannersInventoryResponse& v) { 
    v.items = j.at("items").get<LolBannersInventoryItemsByType>(); 
  }
} 