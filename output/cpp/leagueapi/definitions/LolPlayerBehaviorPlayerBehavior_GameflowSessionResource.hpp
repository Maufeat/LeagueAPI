#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorGameflowPhase.hpp>

namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_GameflowSessionResource { /**/ 
    LolPlayerBehaviorGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) { 
    v.phase = j.at("phase").get<LolPlayerBehaviorGameflowPhase>(); 
  }
} 