#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderV1ReadyCheckDecline (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/ready-check/decline?", { 
    }, { 
    },"") };
  }
} 