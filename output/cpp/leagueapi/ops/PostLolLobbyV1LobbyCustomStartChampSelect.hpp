#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyCustomChampSelectStartResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyCustomChampSelectStartResponse> PostLolLobbyV1LobbyCustomStartChampSelect (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby/custom/start-champ-select?", { 
    }, { 
    }) };
  }
} 