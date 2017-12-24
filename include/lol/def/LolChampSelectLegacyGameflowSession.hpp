#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyGameflowGameData.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
namespace lol {
  struct LolChampSelectLegacyGameflowSession { 
    LolChampSelectLegacyGameflowGameClient gameClient;
    LolChampSelectLegacyGameflowPhase phase;
    LolChampSelectLegacyGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
    j["phase"] = v.phase; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
  }
}