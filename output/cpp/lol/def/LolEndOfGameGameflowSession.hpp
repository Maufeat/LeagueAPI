#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameGameflowGameData.hpp>
#include <lol/def/LolEndOfGameGameflowClient.hpp>
#include <lol/def/LolEndOfGameGameflowPhase.hpp>
namespace lol {
  struct LolEndOfGameGameflowSession { 
    LolEndOfGameGameflowGameData gameData;
    LolEndOfGameGameflowPhase phase;
    LolEndOfGameGameflowClient gameClient; 
  };
  void to_json(json& j, const LolEndOfGameGameflowSession& v) {
  j["gameData"] = v.gameData; 
  j["phase"] = v.phase; 
  j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolEndOfGameGameflowSession& v) {
  v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
  v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
  v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
  }
}