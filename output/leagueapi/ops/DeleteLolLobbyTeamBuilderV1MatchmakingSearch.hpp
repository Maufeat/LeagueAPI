#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLobbyTeamBuilderV1MatchmakingSearch (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby-team-builder/v1/matchmaking/search?", { 
    }, { 
    },"") };
  }
} 