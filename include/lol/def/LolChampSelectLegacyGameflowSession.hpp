#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyGameflowPhase.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowGameData.hpp"
namespace lol {
  struct LolChampSelectLegacyGameflowSession { 
    LolChampSelectLegacyGameflowPhase phase;
    LolChampSelectLegacyGameflowGameClient gameClient;
    LolChampSelectLegacyGameflowGameData gameData; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
    j["gameData"] = v.gameData; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) {
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
  }
}