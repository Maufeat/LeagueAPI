#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPerksGameflowPhase.hpp>
#include <leagueapi/definitions/LolPerksGameflowGameData.hpp>

namespace leagueapi {
  struct LolPerksGameflowSession { /**/ 
    LolPerksGameflowPhase phase;/**/
    LolPerksGameflowGameData gameData;/**/
  };
  static void to_json(json& j, const LolPerksGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }
  static void from_json(const json& j, LolPerksGameflowSession& v) { 
    v.phase = j.at("phase").get<LolPerksGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData>(); 
  }
} 