#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLobbyV2LobbyMatchmakingSearch (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby/v2/lobby/matchmaking/search?", { 
    }, { 
    }) };
  }
} 