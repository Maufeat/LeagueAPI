#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyGameflowGameClient.hpp>
#include <lol/def/LolChampSelectLegacyGameflowPhase.hpp>
#include <lol/def/LolChampSelectLegacyGameflowGameData.hpp>
namespace lol {
  struct LolChampSelectLegacyGameflowSession { 
    LolChampSelectLegacyGameflowGameData gameData;
    LolChampSelectLegacyGameflowPhase phase;
    LolChampSelectLegacyGameflowGameClient gameClient; 
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["gameData"] = v.gameData; 
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
  }
}