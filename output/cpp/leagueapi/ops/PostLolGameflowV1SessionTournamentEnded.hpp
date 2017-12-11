#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1SessionTournamentEnded (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/session/tournament-ended?", { 
    }, { 
    }) };
  }
} 