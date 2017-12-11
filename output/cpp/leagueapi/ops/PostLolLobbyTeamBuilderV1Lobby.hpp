#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobby.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderLobby> PostLolLobbyTeamBuilderV1Lobby (const https::Info& _info_,
      const LolLobbyTeamBuilderLobby& lobby /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/lobby?", { 
    }, { 
    },lobby) };
  }
} 