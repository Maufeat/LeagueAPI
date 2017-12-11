#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolLobbyV2Lobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby/v2/lobby?", { 
    }, { 
    }) };
  }
} 