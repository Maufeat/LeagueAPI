#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolReplaysGameflowGameClient { /**/ 
    bool running;/**/
  };
  static void to_json(json& j, const LolReplaysGameflowGameClient& v) { 
    j["running"] = v.running;
  }
  static void from_json(const json& j, LolReplaysGameflowGameClient& v) { 
    v.running = j.at("running").get<bool>(); 
  }
} 