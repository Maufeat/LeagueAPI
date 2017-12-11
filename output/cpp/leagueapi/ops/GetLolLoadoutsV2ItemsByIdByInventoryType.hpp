#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolLoadoutsV2ItemsByIdByInventoryType (const https::Info& _info_,
      const uint32_t& id /**/,
      const std::string& inventoryType /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-loadouts/v2/items/"+to_string(id)+"/"+to_string(inventoryType)+"?", { 
    }, { 
    }) };
  }
} 