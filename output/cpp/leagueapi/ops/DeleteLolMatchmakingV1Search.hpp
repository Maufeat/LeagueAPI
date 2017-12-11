#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolMatchmakingV1Search (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-matchmaking/v1/search?", { 
    }, { 
    }) };
  }
} 