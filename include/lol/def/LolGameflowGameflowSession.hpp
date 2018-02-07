#pragma once
#include "../base_def.hpp" 
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameClient.hpp"
namespace lol {
  struct LolGameflowGameflowSession { 
    LolGameflowGameflowPhase phase;
    LolGameflowGameflowGameData gameData;
    LolGameflowGameflowGameClient gameClient;
    LolGameflowGameflowGameMap map;
    LolGameflowGameflowGameDodge gameDodge; 
  };
  inline void to_json(json& j, const LolGameflowGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
    j["gameClient"] = v.gameClient; 
    j["map"] = v.map; 
    j["gameDodge"] = v.gameDodge; 
  }
  inline void from_json(const json& j, LolGameflowGameflowSession& v) {
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>(); 
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>(); 
    v.map = j.at("map").get<LolGameflowGameflowGameMap>(); 
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>(); 
  }
}