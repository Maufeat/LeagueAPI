#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobbyPositionPreferences.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolLobbyV2LobbyMembersLocalMemberPositionPreferences (const https::Info& _info_,
      const LolLobbyLobbyPositionPreferences& positionPreferences /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-lobby/v2/lobby/members/localMember/position-preferences?", { 
    }, { 
    },positionPreferences) };
  }
} 