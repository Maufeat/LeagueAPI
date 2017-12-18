#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameGameflowPhase.hpp"
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowClient.hpp"
namespace lol {
  struct LolEndOfGameGameflowSession { 
    LolEndOfGameGameflowGameData gameData;
    LolEndOfGameGameflowPhase phase;
    LolEndOfGameGameflowClient gameClient; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
  }
}