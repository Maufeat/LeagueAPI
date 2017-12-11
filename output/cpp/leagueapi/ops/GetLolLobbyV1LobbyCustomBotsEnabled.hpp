#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolLobbyV1LobbyCustomBotsEnabled (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby/custom/bots-enabled?", { 
    }, { 
    }) };
  }
} 