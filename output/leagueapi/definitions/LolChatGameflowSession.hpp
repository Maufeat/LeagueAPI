#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChatGameflowGameData.hpp>"
#include "<leagueapi/definitions/LolChatGameflowGameMap.hpp>"
#include "<leagueapi/definitions/LolChatGameflowPhase.hpp>"

namespace leagueapi {
  struct LolChatGameflowSession { /**/ 
    LolChatGameflowGameMap map;/**/
    LolChatGameflowPhase phase;/**/
    LolChatGameflowGameData gameData;/**/
  };
  static void to_json(json& j, const LolChatGameflowSession& v) { 
    j["map"] = v.map;
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }
  static void from_json(const json& j, LolChatGameflowSession& v) { 
    v.map = j.at("map").get<LolChatGameflowGameMap>(); 
    v.phase = j.at("phase").get<LolChatGameflowPhase>(); 
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>(); 
  }
} 