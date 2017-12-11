#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLoadoutsV2ItemsById (const https::Info& _info_,
      const uint32_t& id /**/,
      const std::string& inventoryType /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-loadouts/v2/items/"+to_string(id)+"?", { 
      { "inventoryType", to_string(inventoryType) },
    }, { 
    }) };
  }
} 