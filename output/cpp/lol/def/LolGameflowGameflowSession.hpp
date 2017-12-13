#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowGameflowGameClient.hpp>
#include <lol/def/LolGameflowGameflowGameMap.hpp>
#include <lol/def/LolGameflowGameflowPhase.hpp>
#include <lol/def/LolGameflowGameflowGameData.hpp>
#include <lol/def/LolGameflowGameflowGameDodge.hpp>
namespace lol {
  struct LolGameflowGameflowSession { 
    LolGameflowGameflowGameMap map;
    LolGameflowGameflowPhase phase;
    LolGameflowGameflowGameClient gameClient;
    LolGameflowGameflowGameData gameData;
    LolGameflowGameflowGameDodge gameDodge; 
  };
  void to_json(json& j, const LolGameflowGameflowSession& v) {
  j["map"] = v.map; 
  j["phase"] = v.phase; 
  j["gameClient"] = v.gameClient; 
  j["gameData"] = v.gameData; 
  j["gameDodge"] = v.gameDodge; 
  }
  void from_json(const json& j, LolGameflowGameflowSession& v) {
  v.map = j.at("map").get<LolGameflowGameflowGameMap>(); 
  v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
  v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>(); 
  v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>(); 
  v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>(); 
  }
}