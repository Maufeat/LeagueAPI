#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLoadoutsGameflowPhase.hpp>"
#include "<leagueapi/definitions/LolLoadoutsGameflowGameData.hpp>"

namespace leagueapi {
  struct LolLoadoutsGameflowSession { /**/ 
    LolLoadoutsGameflowPhase phase;/**/
    LolLoadoutsGameflowGameData gameData;/**/
  };
  static void to_json(json& j, const LolLoadoutsGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }
  static void from_json(const json& j, LolLoadoutsGameflowSession& v) { 
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData>(); 
  }
} 