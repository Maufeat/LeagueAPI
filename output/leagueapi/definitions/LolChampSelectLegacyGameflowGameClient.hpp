#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameClient { /**/ 
    bool running;/**/
    bool visible;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyGameflowGameClient& v) { 
    j["running"] = v.running;
    j["visible"] = v.visible;
  }
  static void from_json(const json& j, LolChampSelectLegacyGameflowGameClient& v) { 
    v.running = j.at("running").get<bool>(); 
    v.visible = j.at("visible").get<bool>(); 
  }
} 