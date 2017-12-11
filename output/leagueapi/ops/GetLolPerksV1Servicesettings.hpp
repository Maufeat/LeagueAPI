#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksServiceSettings.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksServiceSettings> GetLolPerksV1Servicesettings (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/servicesettings?", { 
    }, { 
    },"") };
  }
} 