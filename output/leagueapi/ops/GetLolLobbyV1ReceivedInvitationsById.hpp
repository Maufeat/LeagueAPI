#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyInvitation.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyInvitation> GetLolLobbyV1ReceivedInvitationsById (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/received-invitations/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 