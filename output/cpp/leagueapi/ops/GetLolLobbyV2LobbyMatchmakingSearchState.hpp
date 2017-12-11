#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyMatchmakingSearchResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyMatchmakingSearchResource> GetLolLobbyV2LobbyMatchmakingSearchState (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/lobby/matchmaking/search-state?", { 
    }, { 
    }) };
  }
} 