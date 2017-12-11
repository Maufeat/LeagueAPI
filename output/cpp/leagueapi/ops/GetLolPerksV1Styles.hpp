#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPerkUIStyle.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolPerksPerkUIStyle>> GetLolPerksV1Styles (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/styles?", { 
    }, { 
    }) };
  }
} 