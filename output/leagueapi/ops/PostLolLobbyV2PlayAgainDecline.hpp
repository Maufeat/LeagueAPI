#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV2PlayAgainDecline (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/play-again-decline?", { 
    }, { 
    },"") };
  }
} 