#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitation.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyInvitation> PostLolLobbyV1LobbyInvitations (const https::Info& _info_,
      const LolLobbyLobbyInvitation& invitation /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby/invitations?", { 
    }, { 
    },invitation) };
  }
} 