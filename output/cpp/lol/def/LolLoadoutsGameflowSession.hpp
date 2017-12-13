#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoadoutsGameflowPhase.hpp>
#include <lol/def/LolLoadoutsGameflowGameData.hpp>
namespace lol {
  struct LolLoadoutsGameflowSession { 
    LolLoadoutsGameflowPhase phase;
    LolLoadoutsGameflowGameData gameData; 
  };
  void to_json(json& j, const LolLoadoutsGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  void from_json(const json& j, LolLoadoutsGameflowSession& v) {
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData>(); 
  }
}