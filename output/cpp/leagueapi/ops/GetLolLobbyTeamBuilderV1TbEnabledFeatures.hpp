#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> GetLolLobbyTeamBuilderV1TbEnabledFeatures (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby-team-builder/v1/tb-enabled-features?", { 
    }, { 
    }) };
  }
} 