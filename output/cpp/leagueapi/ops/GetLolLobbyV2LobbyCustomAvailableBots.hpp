#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyBotChampion.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyBotChampion>> GetLolLobbyV2LobbyCustomAvailableBots (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/lobby/custom/available-bots?", { 
    }, { 
    }) };
  }
} 