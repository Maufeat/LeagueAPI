#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowClient.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
namespace lol {
  struct LolEndOfGameGameflowSession { 
    LolEndOfGameGameflowPhase phase;
    LolEndOfGameGameflowClient gameClient;
    LolEndOfGameGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowSession& v) {
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
  }
}