#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyMember.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyMember>> GetLolLobbyV1LobbyMembers (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby/members?", { 
    }, { 
    },"") };
  }
} 