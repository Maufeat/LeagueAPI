#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SpectateGameInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolSpectatorV1SpectateLaunch (const https::Info& _info_,
      const SpectateGameInfo& spectateGameInfo /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-spectator/v1/spectate/launch?", { 
    }, { 
    },spectateGameInfo) };
  }
} 