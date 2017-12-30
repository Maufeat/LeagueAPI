#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyGameflowPhase.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowGameData.hpp"
namespace lol {
  struct LolChampSelectLegacyGameflowSession { 
    LolChampSelectLegacyGameflowGameClient gameClient;
    LolChampSelectLegacyGameflowGameData gameData;
    LolChampSelectLegacyGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
  }
}