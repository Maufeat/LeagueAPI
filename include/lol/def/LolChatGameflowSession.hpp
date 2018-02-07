#pragma once
#include "../base_def.hpp" 
#include "LolChatGameflowGameData.hpp"
#include "LolChatGameflowGameMap.hpp"
#include "LolChatGameflowPhase.hpp"
namespace lol {
  struct LolChatGameflowSession { 
    LolChatGameflowPhase phase;
    LolChatGameflowGameData gameData;
    LolChatGameflowGameMap map; 
  };
  inline void to_json(json& j, const LolChatGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
    j["map"] = v.map; 
  }
  inline void from_json(const json& j, LolChatGameflowSession& v) {
    v.phase = j.at("phase").get<LolChatGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>(); 
    v.map = j.at("map").get<LolChatGameflowGameMap>(); 
  }
}