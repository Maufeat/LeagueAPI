#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyCustomGame.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyCustomGame> GetLolLobbyV1CustomGamesById (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/custom-games/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 