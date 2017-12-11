#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyMember.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobbyMember> GetLolLobbyV1LobbyMembersById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby/members/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 