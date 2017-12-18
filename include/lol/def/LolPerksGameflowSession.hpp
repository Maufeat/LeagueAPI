#pragma once
#include "../base_def.hpp" 
#include "LolPerksGameflowGameData.hpp"
#include "LolPerksGameflowPhase.hpp"
namespace lol {
  struct LolPerksGameflowSession { 
    LolPerksGameflowPhase phase;
    LolPerksGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolPerksGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolPerksGameflowSession& v) {
    v.phase = j.at("phase").get<LolPerksGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData>(); 
  }
}