#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
namespace lol {
  struct LolMatchmakingGameflowSession { 
    LolMatchmakingGameflowGameData gameData;
    LolMatchmakingGameflowGameDodge gameDodge;
    LolMatchmakingGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolMatchmakingGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["gameDodge"] = v.gameDodge; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolMatchmakingGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>(); 
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>(); 
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>(); 
  }
}