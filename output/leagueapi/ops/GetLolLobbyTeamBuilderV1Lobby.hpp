#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobby.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderLobby> GetLolLobbyTeamBuilderV1Lobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/v1/lobby?", { 
    }, { 
    },"") };
  }
} 