#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectBannableChampions.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderChampSelectBannableChampions> GetLolLobbyTeamBuilderChampSelectV1BannableChampions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/bannable-champions?", { 
    }, { 
    }) };
  }
} 