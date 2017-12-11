#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksUISettings.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksUISettings> GetLolPerksV1Settings (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/settings?", { 
    }, { 
    },"") };
  }
} 