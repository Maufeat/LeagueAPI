#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolLobbyV2LobbyCustomBotsEnabled (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/lobby/custom/bots-enabled?", { 
    }, { 
    },"") };
  }
} 