#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPerkPageResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksPerkPageResource> GetLolPerksV1Currentpage (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/currentpage?", { 
    }, { 
    }) };
  }
} 