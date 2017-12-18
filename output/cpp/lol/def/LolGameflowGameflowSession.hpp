#pragma once
#include "../base_def.hpp" 
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowGameClient.hpp"
namespace lol {
  struct LolGameflowGameflowSession { 
    LolGameflowGameflowGameMap map;
    LolGameflowGameflowGameClient gameClient;
    LolGameflowGameflowGameDodge gameDodge;
    LolGameflowGameflowPhase phase;
    LolGameflowGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolGameflowGameflowSession& v) {
    j["map"] = v.map; 
    j["gameClient"] = v.gameClient; 
    j["gameDodge"] = v.gameDodge; 
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolGameflowGameflowSession& v) {
    v.map = j.at("map").get<LolGameflowGameflowGameMap>(); 
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>(); 
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>(); 
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>(); 
  }
}