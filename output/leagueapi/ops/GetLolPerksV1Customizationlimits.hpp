#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksCustomizationLimits.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksCustomizationLimits> GetLolPerksV1Customizationlimits (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/customizationlimits?", { 
    }, { 
    },"") };
  }
} 