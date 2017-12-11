#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1LobbyCustomCancelChampSelect (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby/custom/cancel-champ-select?", { 
    }, { 
    },"") };
  }
} 