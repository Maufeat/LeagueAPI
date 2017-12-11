#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksPlayerInventory { /**/ 
    uint32_t ownedPageCount;/**/
  };
  static void to_json(json& j, const LolPerksPlayerInventory& v) { 
    j["ownedPageCount"] = v.ownedPageCount;
  }
  static void from_json(const json& j, LolPerksPlayerInventory& v) { 
    v.ownedPageCount = j.at("ownedPageCount").get<uint32_t>(); 
  }
} 