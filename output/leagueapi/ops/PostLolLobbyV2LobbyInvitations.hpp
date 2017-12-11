#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitationDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyInvitationDto>> PostLolLobbyV2LobbyInvitations (const https::Info& _info_,
      const std::vector<LolLobbyLobbyInvitationDto>& invitations /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/lobby/invitations?", { 
    }, { 
    },invitations) };
  }
} 