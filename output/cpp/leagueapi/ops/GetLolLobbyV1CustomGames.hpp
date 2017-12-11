#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyCustomGame.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyCustomGame>> GetLolLobbyV1CustomGames (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/custom-games?", { 
    }, { 
    }) };
  }
} 