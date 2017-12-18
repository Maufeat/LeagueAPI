#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesGameflowPhase.hpp"
#include "LolLeaguesGameflowGameData.hpp"
namespace lol {
  struct LolLeaguesGameflowSession { 
    LolLeaguesGameflowPhase phase;
    LolLeaguesGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolLeaguesGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolLeaguesGameflowSession& v) {
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData>(); 
  }
}