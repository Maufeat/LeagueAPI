#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTeamBoost.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderTeamBoost> GetLolLobbyTeamBuilderChampSelectV1TeamBoost (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/team-boost?", { 
    }, { 
    },"") };
  }
} 