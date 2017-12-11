#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolEndOfGameV1StateDismissStats (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-end-of-game/v1/state/dismiss-stats?", { 
    }, { 
    }) };
  }
} 