#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLobbyV1ReceivedInvitationsById (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby/v1/received-invitations/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 