#pragma once
#include "../base_def.hpp" 
#include "LolLoadoutsGameflowGameData.hpp"
#include "LolLoadoutsGameflowPhase.hpp"
namespace lol {
  struct LolLoadoutsGameflowSession { 
    LolLoadoutsGameflowGameData gameData;
    LolLoadoutsGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolLoadoutsGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolLoadoutsGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData>(); 
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase>(); 
  }
}