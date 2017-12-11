#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLootV1LootGrantsById (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-loot/v1/loot-grants/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 