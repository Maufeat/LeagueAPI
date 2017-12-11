#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLoadoutsV2ItemsById (const https::Info& _info_,
      const uint32_t& id /**/,
      const std::map<std::string, json>& items /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-loadouts/v2/items/"+to_string(id)+"?", { 
    }, { 
    },items) };
  }
} 