#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobby.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobby> PostLolLobbyV1LastQueuedLobbyPlayAgain (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/last-queued-lobby/play-again?", { 
    }, { 
    },"") };
  }
} 