#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderMatchmakingSearchResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderMatchmakingSearchResource> PostLolLobbyTeamBuilderV1MatchmakingSearch (const https::Info& _info_,
      const std::string& leaverBusterToken /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/matchmaking/search?", { 
    }, { 
    },leaverBusterToken) };
  }
} 