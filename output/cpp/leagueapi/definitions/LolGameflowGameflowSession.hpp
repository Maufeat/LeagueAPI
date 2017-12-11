#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameflowGameflowPhase.hpp>
#include <leagueapi/definitions/LolGameflowGameflowGameData.hpp>
#include <leagueapi/definitions/LolGameflowGameflowGameClient.hpp>
#include <leagueapi/definitions/LolGameflowGameflowGameDodge.hpp>
#include <leagueapi/definitions/LolGameflowGameflowGameMap.hpp>

namespace leagueapi {
  struct LolGameflowGameflowSession { /**/ 
    LolGameflowGameflowGameMap map;/**/
    LolGameflowGameflowPhase phase;/**/
    LolGameflowGameflowGameClient gameClient;/**/
    LolGameflowGameflowGameData gameData;/**/
    LolGameflowGameflowGameDodge gameDodge;/**/
  };
  static void to_json(json& j, const LolGameflowGameflowSession& v) { 
    j["map"] = v.map;
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
  }
  static void from_json(const json& j, LolGameflowGameflowSession& v) { 
    v.map = j.at("map").get<LolGameflowGameflowGameMap>(); 
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>(); 
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>(); 
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>(); 
  }
} 