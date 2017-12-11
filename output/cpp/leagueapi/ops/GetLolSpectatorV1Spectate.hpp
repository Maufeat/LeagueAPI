#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SpectateGameInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<SpectateGameInfo> GetLolSpectatorV1Spectate (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-spectator/v1/spectate?", { 
    }, { 
    }) };
  }
} 