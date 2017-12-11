#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLobbyV1Lobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby/v1/lobby?", { 
    }, { 
    },"") };
  }
} 