#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyV1LobbyCustomSwitchTeams (const https::Info& _info_ ,
      const std::optional<std::string>& team = std::nullopt /**/)
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v1/lobby/custom/switch-teams?", { 
      { "team", to_string(team) },
    }, { 
    }) };
  }
} 