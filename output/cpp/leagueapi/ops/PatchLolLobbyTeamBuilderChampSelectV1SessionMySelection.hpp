#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectMySelection.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolLobbyTeamBuilderChampSelectV1SessionMySelection (const https::Info& _info_,
      const LolLobbyTeamBuilderChampSelectMySelection& selection /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-lobby-team-builder/champ-select/v1/session/my-selection?", { 
    }, { 
    },selection) };
  }
} 