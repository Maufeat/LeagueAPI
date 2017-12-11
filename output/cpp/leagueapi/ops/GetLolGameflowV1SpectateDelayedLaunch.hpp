#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> GetLolGameflowV1SpectateDelayedLaunch (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/spectate/delayed-launch?", { 
    }, { 
    }) };
  }
} 