#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPftGameflowGameDodge.hpp>"
#include "<leagueapi/definitions/LolPftGameflowPhase.hpp>"

namespace leagueapi {
  struct LolPftGameflowSession { /**/ 
    LolPftGameflowPhase phase;/**/
    LolPftGameflowGameDodge gameDodge;/**/
  };
  static void to_json(json& j, const LolPftGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
  }
  static void from_json(const json& j, LolPftGameflowSession& v) { 
    v.phase = j.at("phase").get<LolPftGameflowPhase>(); 
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>(); 
  }
} 