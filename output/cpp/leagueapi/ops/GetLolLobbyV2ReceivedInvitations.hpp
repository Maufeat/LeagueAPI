#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyReceivedInvitationDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyReceivedInvitationDto>> GetLolLobbyV2ReceivedInvitations (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/received-invitations?", { 
    }, { 
    }) };
  }
} 