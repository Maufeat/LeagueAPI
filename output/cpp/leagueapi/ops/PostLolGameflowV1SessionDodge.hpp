#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowGameflowGameDodge.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1SessionDodge (const https::Info& _info_,
      const LolGameflowGameflowGameDodge& dodgeData /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/session/dodge?", { 
    }, { 
    },dodgeData) };
  }
} 