#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatGameflowGameMap.hpp>
#include <lol/def/LolChatGameflowPhase.hpp>
#include <lol/def/LolChatGameflowGameData.hpp>
namespace lol {
  struct LolChatGameflowSession { 
    LolChatGameflowGameMap map;
    LolChatGameflowPhase phase;
    LolChatGameflowGameData gameData; 
  };
  void to_json(json& j, const LolChatGameflowSession& v) {
    j["map"] = v.map; 
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  void from_json(const json& j, LolChatGameflowSession& v) {
    v.map = j.at("map").get<LolChatGameflowGameMap>(); 
    v.phase = j.at("phase").get<LolChatGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>(); 
  }
}