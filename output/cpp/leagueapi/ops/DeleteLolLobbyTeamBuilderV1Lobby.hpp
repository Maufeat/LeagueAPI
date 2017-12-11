#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolLobbyTeamBuilderV1Lobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby-team-builder/v1/lobby?", { 
    }, { 
    }) };
  }
} 