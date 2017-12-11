#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<int64_t> GetLolLobbyV1LobbyCountdown (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby/countdown?", { 
    }, { 
    }) };
  }
} 