#pragma once
#include "../base_def.hpp" 
#include "LolLoadoutsGameflowPhase.hpp"
#include "LolLoadoutsGameflowGameData.hpp"
namespace lol {
  struct LolLoadoutsGameflowSession { 
    LolLoadoutsGameflowPhase phase;
    LolLoadoutsGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolLoadoutsGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolLoadoutsGameflowSession& v) {
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData>(); 
  }
}