#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolLobbyV2ReceivedInvitationsByInvitationIdDecline (const https::Info& _info_,
      const std::string& invitationId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/received-invitations/"+to_string(invitationId)+"/decline?", { 
    }, { 
    },"") };
  }
} 