#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitationDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyInvitationDto>> GetLolLobbyV2LobbyInvitations (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/lobby/invitations?", { 
    }, { 
    },"") };
  }
} 