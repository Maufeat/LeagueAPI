#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyGameflowGameClient.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyGameflowPhase.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyGameflowGameData.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyGameflowSession { /**/ 
    LolChampSelectLegacyGameflowPhase phase;/**/
    LolChampSelectLegacyGameflowGameData gameData;/**/
    LolChampSelectLegacyGameflowGameClient gameClient;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
    j["gameClient"] = v.gameClient;
  }
  static void from_json(const json& j, LolChampSelectLegacyGameflowSession& v) { 
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>(); 
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>(); 
  }
} 