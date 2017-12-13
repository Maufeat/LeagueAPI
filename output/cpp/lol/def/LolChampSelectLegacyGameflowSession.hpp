#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyGameflowGameData.hpp>
#include <lol/def/LolChampSelectLegacyGameflowGameClient.hpp>
#include <lol/def/LolChampSelectLegacyGameflowPhase.hpp>
namespace lol {
  struct LolChampSelectLegacyGameflowSession { 
    LolChampSelectLegacyGameflowPhase phase;
    LolChampSelectLegacyGameflowGameData gameData;
    LolChampSelectLegacyGameflowGameClient gameClient; 
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) {
  j["phase"] = v.phase; 
  j["gameData"] = v.gameData; 
  j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) {
  v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
  v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
  v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
  }
}