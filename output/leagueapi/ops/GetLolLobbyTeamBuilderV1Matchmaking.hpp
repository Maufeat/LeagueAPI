#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderMatchmakingSearchResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderMatchmakingSearchResource> GetLolLobbyTeamBuilderV1Matchmaking (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/v1/matchmaking?", { 
    }, { 
    },"") };
  }
} 