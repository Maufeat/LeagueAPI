#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksUISettings.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolPerksV1Settings (const https::Info& _info_,
      const LolPerksUISettings& showLongDescriptions /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-perks/v1/settings?", { 
    }, { 
    },showLongDescriptions) };
  }
} 