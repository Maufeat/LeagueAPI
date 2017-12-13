#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksGameflowPhase.hpp>
#include <lol/def/LolPerksGameflowGameData.hpp>
namespace lol {
  struct LolPerksGameflowSession { 
    LolPerksGameflowPhase phase;
    LolPerksGameflowGameData gameData; 
  };
  void to_json(json& j, const LolPerksGameflowSession& v) {
  j["phase"] = v.phase; 
  j["gameData"] = v.gameData; 
  }
  void from_json(const json& j, LolPerksGameflowSession& v) {
  v.phase = j.at("phase").get<LolPerksGameflowPhase>(); 
  v.gameData = j.at("gameData").get<LolPerksGameflowGameData>(); 
  }
}