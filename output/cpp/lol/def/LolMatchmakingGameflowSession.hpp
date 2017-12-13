#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingGameflowPhase.hpp>
#include <lol/def/LolMatchmakingGameflowGameData.hpp>
#include <lol/def/LolMatchmakingGameflowGameDodge.hpp>
namespace lol {
  struct LolMatchmakingGameflowSession { 
    LolMatchmakingGameflowGameDodge gameDodge;
    LolMatchmakingGameflowPhase phase;
    LolMatchmakingGameflowGameData gameData; 
  };
  void to_json(json& j, const LolMatchmakingGameflowSession& v) {
    j["gameDodge"] = v.gameDodge; 
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  void from_json(const json& j, LolMatchmakingGameflowSession& v) {
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>(); 
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>(); 
  }
}