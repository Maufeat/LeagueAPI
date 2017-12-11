#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV2LobbyMatchmakingSearch (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/lobby/matchmaking/search?", { 
    }, { 
    },"") };
  }
} 