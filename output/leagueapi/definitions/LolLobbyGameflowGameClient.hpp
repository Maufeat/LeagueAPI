#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyGameflowGameClient { /**/ 
    bool running;/**/
  };
  static void to_json(json& j, const LolLobbyGameflowGameClient& v) { 
    j["running"] = v.running;
  }
  static void from_json(const json& j, LolLobbyGameflowGameClient& v) { 
    v.running = j.at("running").get<bool>(); 
  }
} 