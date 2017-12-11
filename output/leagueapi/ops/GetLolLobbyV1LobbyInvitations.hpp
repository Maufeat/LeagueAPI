#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitation.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyInvitation>> GetLolLobbyV1LobbyInvitations (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby/invitations?", { 
    }, { 
    },"") };
  }
} 