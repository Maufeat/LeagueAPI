#pragma once
#include "../base_def.hpp" 
#include "LolChatGameflowPhase.hpp"
#include "LolChatGameflowGameData.hpp"
#include "LolChatGameflowGameMap.hpp"
namespace lol {
  struct LolChatGameflowSession { 
    LolChatGameflowGameMap map;
    LolChatGameflowPhase phase;
    LolChatGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolChatGameflowSession& v) {
    j["map"] = v.map; 
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolChatGameflowSession& v) {
    v.map = j.at("map").get<LolChatGameflowGameMap>(); 
    v.phase = j.at("phase").get<LolChatGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>(); 
  }
}