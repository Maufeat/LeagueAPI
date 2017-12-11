#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerLevelUpEvent.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerLevelUpEvent> GetLolPlayerLevelUpV1LevelUp (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-level-up/v1/level-up?", { 
    }, { 
    }) };
  }
} 