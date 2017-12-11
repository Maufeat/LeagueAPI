#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyLastQueuedLobby.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyLastQueuedLobby> GetLolLobbyV1LastQueuedLobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/last-queued-lobby?", { 
    }, { 
    },"") };
  }
} 