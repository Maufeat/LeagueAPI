#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> PostLolGameSettingsV1Save (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-game-settings/v1/save?", { 
    }, { 
    }) };
  }
} 