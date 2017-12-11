#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampSelectAction.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolLobbyTeamBuilderChampSelectV1SessionActionsById (const https::Info& _info_,
      const int32_t& id /**/,
      const LolLobbyTeamBuilderChampSelectAction& data /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-lobby-team-builder/champ-select/v1/session/actions/"+to_string(id)+"?", { 
    }, { 
    },data) };
  }
} 