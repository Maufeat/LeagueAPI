#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameSettingsV1ReloadPostGame (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-game-settings/v1/reload-post-game?", { 
    }, { 
    }) };
  }
} 