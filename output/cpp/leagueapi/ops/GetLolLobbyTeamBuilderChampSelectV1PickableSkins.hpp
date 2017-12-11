#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectPickableSkins.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderChampSelectPickableSkins> GetLolLobbyTeamBuilderChampSelectV1PickableSkins (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/pickable-skins?", { 
    }, { 
    }) };
  }
} 