#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolLobbyTeamBuilderChampSelectV1ImplementationActive (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/champ-select/v1/implementation-active?", { 
    }, { 
    },"") };
  }
} 