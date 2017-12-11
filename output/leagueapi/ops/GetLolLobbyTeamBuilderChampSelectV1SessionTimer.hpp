#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectTimer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderChampSelectTimer> GetLolLobbyTeamBuilderChampSelectV1SessionTimer (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/session/timer?", { 
    }, { 
    },"") };
  }
} 