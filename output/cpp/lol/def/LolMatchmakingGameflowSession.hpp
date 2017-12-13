#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingGameflowGameDodge.hpp>
#include <lol/def/LolMatchmakingGameflowGameData.hpp>
#include <lol/def/LolMatchmakingGameflowPhase.hpp>
namespace lol {
  struct LolMatchmakingGameflowSession { 
    LolMatchmakingGameflowPhase phase;
    LolMatchmakingGameflowGameDodge gameDodge;
    LolMatchmakingGameflowGameData gameData; 
  };
  void to_json(json& j, const LolMatchmakingGameflowSession& v) {
  j["phase"] = v.phase; 
  j["gameDodge"] = v.gameDodge; 
  j["gameData"] = v.gameData; 
  }
  void from_json(const json& j, LolMatchmakingGameflowSession& v) {
  v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>(); 
  v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>(); 
  v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>(); 
  }
}