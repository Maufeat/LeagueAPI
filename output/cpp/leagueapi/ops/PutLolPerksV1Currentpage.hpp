#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolPerksV1Currentpage (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-perks/v1/currentpage?", { 
    }, { 
    },id) };
  }
} 