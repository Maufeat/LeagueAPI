#pragma once
#include "../base_def.hpp" 
#include "LolChatGameflowGameData.hpp"
#include "LolChatGameflowPhase.hpp"
#include "LolChatGameflowGameMap.hpp"
namespace lol {
  struct LolChatGameflowSession { 
    LolChatGameflowGameData gameData;
    LolChatGameflowGameMap map;
    LolChatGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolChatGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["map"] = v.map; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolChatGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>(); 
    v.map = j.at("map").get<LolChatGameflowGameMap>(); 
    v.phase = j.at("phase").get<LolChatGameflowPhase>(); 
  }
}