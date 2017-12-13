#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesGameflowPhase.hpp>
#include <lol/def/LolLeaguesGameflowGameData.hpp>
namespace lol {
  struct LolLeaguesGameflowSession { 
    LolLeaguesGameflowPhase phase;
    LolLeaguesGameflowGameData gameData; 
  };
  void to_json(json& j, const LolLeaguesGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  void from_json(const json& j, LolLeaguesGameflowSession& v) {
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData>(); 
  }
}