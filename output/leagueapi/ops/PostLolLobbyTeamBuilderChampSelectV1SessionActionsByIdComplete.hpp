#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderChampSelectV1SessionActionsByIdComplete (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/champ-select/v1/session/actions/"+to_string(id)+"/complete?", { 
    }, { 
    },"") };
  }
} 