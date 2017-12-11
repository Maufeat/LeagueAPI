#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderGameflowGameClient { /**/ 
    bool running;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderGameflowGameClient& v) { 
    j["running"] = v.running;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderGameflowGameClient& v) { 
    v.running = j.at("running").get<bool>(); 
  }
} 