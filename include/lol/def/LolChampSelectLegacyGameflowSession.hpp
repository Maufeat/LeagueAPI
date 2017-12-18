#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyGameflowGameData.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
namespace lol {
  struct LolChampSelectLegacyGameflowSession { 
    LolChampSelectLegacyGameflowGameData gameData;
    LolChampSelectLegacyGameflowPhase phase;
    LolChampSelectLegacyGameflowGameClient gameClient; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
  }
}