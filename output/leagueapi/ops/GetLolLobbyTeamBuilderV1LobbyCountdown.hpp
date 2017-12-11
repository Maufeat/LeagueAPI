#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyCountdownTimer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderLobbyCountdownTimer> GetLolLobbyTeamBuilderV1LobbyCountdown (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/v1/lobby/countdown?", { 
    }, { 
    },"") };
  }
} 