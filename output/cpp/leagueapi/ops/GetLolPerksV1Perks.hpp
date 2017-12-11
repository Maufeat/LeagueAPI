#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPerkUIPerk.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolPerksPerkUIPerk>> GetLolPerksV1Perks (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/perks?", { 
    }, { 
    }) };
  }
} 