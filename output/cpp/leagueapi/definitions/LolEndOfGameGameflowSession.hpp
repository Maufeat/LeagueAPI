#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolEndOfGameGameflowPhase.hpp>
#include <leagueapi/definitions/LolEndOfGameGameflowGameData.hpp>
#include <leagueapi/definitions/LolEndOfGameGameflowClient.hpp>

namespace leagueapi {
  struct LolEndOfGameGameflowSession { /**/ 
    LolEndOfGameGameflowPhase phase;/**/
    LolEndOfGameGameflowGameData gameData;/**/
    LolEndOfGameGameflowClient gameClient;/**/
  };
  static void to_json(json& j, const LolEndOfGameGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
    j["gameClient"] = v.gameClient;
  }
  static void from_json(const json& j, LolEndOfGameGameflowSession& v) { 
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>(); 
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>(); 
  }
} 