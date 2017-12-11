#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLeaguesGameflowGameData.hpp>
#include <leagueapi/definitions/LolLeaguesGameflowPhase.hpp>

namespace leagueapi {
  struct LolLeaguesGameflowSession { /**/ 
    LolLeaguesGameflowPhase phase;/**/
    LolLeaguesGameflowGameData gameData;/**/
  };
  static void to_json(json& j, const LolLeaguesGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }
  static void from_json(const json& j, LolLeaguesGameflowSession& v) { 
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData>(); 
  }
} 