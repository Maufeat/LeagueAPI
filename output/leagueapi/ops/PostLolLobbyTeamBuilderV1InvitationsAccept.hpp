#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyInvitation.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderV1InvitationsAccept (const https::Info& _info_,
      const LolLobbyTeamBuilderLobbyInvitation& invitation /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/invitations/accept?", { 
    }, { 
    },invitation) };
  }
} 