#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyQueueAvailability.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyQueueAvailability> GetLolLobbyV1LobbyAvailability (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby/availability?", { 
    }, { 
    }) };
  }
} 