#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyPositionPreferences.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderV1PositionPreferences (const https::Info& _info_,
      const LolLobbyTeamBuilderLobbyPositionPreferences& positionPreferences /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/position-preferences?", { 
    }, { 
    },positionPreferences) };
  }
} 