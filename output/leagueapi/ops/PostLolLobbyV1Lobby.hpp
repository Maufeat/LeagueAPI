#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobby.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobby> PostLolLobbyV1Lobby (const https::Info& _info_,
      const LolLobbyLobby& lobby /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby?", { 
    }, { 
    },lobby) };
  }
} 