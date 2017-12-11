#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderLobbyPositionPreferencesV2.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderV2PositionPreferences (const https::Info& _info_,
      const LolLobbyTeamBuilderLobbyPositionPreferencesV2& positionPreferences /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v2/position-preferences?", { 
    }, { 
    },positionPreferences) };
  }
} 