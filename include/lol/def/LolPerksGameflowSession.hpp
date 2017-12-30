#pragma once
#include "../base_def.hpp" 
#include "LolPerksGameflowPhase.hpp"
#include "LolPerksGameflowGameData.hpp"
namespace lol {
  struct LolPerksGameflowSession { 
    LolPerksGameflowGameData gameData;
    LolPerksGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolPerksGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolPerksGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData>(); 
    v.phase = j.at("phase").get<LolPerksGameflowPhase>(); 
  }
}