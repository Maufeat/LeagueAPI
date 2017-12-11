#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectPickableChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderChampSelectPickableChampions> GetLolLobbyTeamBuilderChampSelectV1PickableChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/pickable-champions?", { 
    }, { 
    }) };
  }
} 