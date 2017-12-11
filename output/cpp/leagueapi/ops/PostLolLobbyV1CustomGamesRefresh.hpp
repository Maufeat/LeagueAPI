#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1CustomGamesRefresh (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/custom-games/refresh?", { 
    }, { 
    }) };
  }
} 