#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1ReceivedInvitationsByIdDecline (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/received-invitations/"+to_string(id)+"/decline?", { 
    }, { 
    },"") };
  }
} 