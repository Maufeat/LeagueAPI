#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyParticipantDto.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyLobbyParticipantDto>> GetLolLobbyV2LobbyMembers (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/lobby/members?", { 
    }, { 
    },"") };
  }
} 