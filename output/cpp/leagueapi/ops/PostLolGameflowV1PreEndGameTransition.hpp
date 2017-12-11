#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1PreEndGameTransition (const https::Info& _info_,
      const bool& enabled /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/pre-end-game-transition?", { 
      { "enabled", to_string(enabled) },
    }, { 
    }) };
  }
} 