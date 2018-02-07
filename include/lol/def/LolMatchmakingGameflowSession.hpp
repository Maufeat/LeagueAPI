#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingGameflowGameDodge.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
#include "LolMatchmakingGameflowPhase.hpp"
namespace lol {
  struct LolMatchmakingGameflowSession { 
    LolMatchmakingGameflowPhase phase;
    LolMatchmakingGameflowGameData gameData;
    LolMatchmakingGameflowGameDodge gameDodge; 
  };
  inline void to_json(json& j, const LolMatchmakingGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
    j["gameDodge"] = v.gameDodge; 
  }
  inline void from_json(const json& j, LolMatchmakingGameflowSession& v) {
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>(); 
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>(); 
  }
}