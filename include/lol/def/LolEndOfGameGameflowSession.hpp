#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowClient.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
namespace lol {
  struct LolEndOfGameGameflowSession { 
    LolEndOfGameGameflowClient gameClient;
    LolEndOfGameGameflowGameData gameData;
    LolEndOfGameGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
  }
}