#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1LobbyMembersByIdGrantInvite (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby/members/"+to_string(id)+"/grant-invite?", { 
    }, { 
    },"") };
  }
} 