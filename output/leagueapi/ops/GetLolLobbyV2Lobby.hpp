#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyDto> GetLolLobbyV2Lobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/lobby?", { 
    }, { 
    },"") };
  }
} 