#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyPlayerDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyPlayerDto> GetLolLobbyV1PartiesPlayer (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/parties/player?", { 
    }, { 
    }) };
  }
} 