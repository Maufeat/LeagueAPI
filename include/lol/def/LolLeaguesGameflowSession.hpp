#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesGameflowPhase.hpp"
#include "LolLeaguesGameflowGameData.hpp"
namespace lol {
  struct LolLeaguesGameflowSession { 
    LolLeaguesGameflowGameData gameData;
    LolLeaguesGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolLeaguesGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolLeaguesGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData>(); 
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase>(); 
  }
}