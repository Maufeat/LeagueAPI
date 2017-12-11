#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyDto.hpp>
#include <leagueapi/definitions/LolLobbyLobbyChangeGameDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyDto> PostLolLobbyV2Lobby (const https::Info& _info_,
      const LolLobbyLobbyChangeGameDto& lobbyChange /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/lobby?", { 
    }, { 
    },lobbyChange) };
  }
} 