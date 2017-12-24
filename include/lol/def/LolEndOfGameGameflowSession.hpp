#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowClient.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
namespace lol {
  struct LolEndOfGameGameflowSession { 
    LolEndOfGameGameflowClient gameClient;
    LolEndOfGameGameflowPhase phase;
    LolEndOfGameGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
  }
}