#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameGameflowClient.hpp>
#include <lol/def/LolEndOfGameGameflowPhase.hpp>
#include <lol/def/LolEndOfGameGameflowGameData.hpp>
namespace lol {
  struct LolEndOfGameGameflowSession { 
    LolEndOfGameGameflowPhase phase;
    LolEndOfGameGameflowGameData gameData;
    LolEndOfGameGameflowClient gameClient; 
  };
  void to_json(json& j, const LolEndOfGameGameflowSession& v) {
  j["phase"] = v.phase; 
  j["gameData"] = v.gameData; 
  j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolEndOfGameGameflowSession& v) {
  v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
  v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
  v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
  }
}