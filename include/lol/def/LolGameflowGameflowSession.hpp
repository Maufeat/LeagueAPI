#pragma once
#include "../base_def.hpp" 
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowGameDodge.hpp"
namespace lol {
  struct LolGameflowGameflowSession { 
    LolGameflowGameflowGameData gameData;
    LolGameflowGameflowGameClient gameClient;
    LolGameflowGameflowGameMap map;
    LolGameflowGameflowPhase phase;
    LolGameflowGameflowGameDodge gameDodge; 
  };
  inline void to_json(json& j, const LolGameflowGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["gameClient"] = v.gameClient; 
    j["map"] = v.map; 
    j["phase"] = v.phase; 
    j["gameDodge"] = v.gameDodge; 
  }
  inline void from_json(const json& j, LolGameflowGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>(); 
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>(); 
    v.map = j.at("map").get<LolGameflowGameflowGameMap>(); 
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>(); 
  }
}