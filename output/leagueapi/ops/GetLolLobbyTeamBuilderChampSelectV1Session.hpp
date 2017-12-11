#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderChampSelectSession> GetLolLobbyTeamBuilderChampSelectV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/session?", { 
    }, { 
    },"") };
  }
} 