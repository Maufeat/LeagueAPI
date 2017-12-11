#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMatchmakingGameflowPhase.hpp>"
#include "<leagueapi/definitions/LolMatchmakingGameflowGameDodge.hpp>"
#include "<leagueapi/definitions/LolMatchmakingGameflowGameData.hpp>"

namespace leagueapi {
  struct LolMatchmakingGameflowSession { /**/ 
    LolMatchmakingGameflowPhase phase;/**/
    LolMatchmakingGameflowGameDodge gameDodge;/**/
    LolMatchmakingGameflowGameData gameData;/**/
  };
  static void to_json(json& j, const LolMatchmakingGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
    j["gameData"] = v.gameData;
  }
  static void from_json(const json& j, LolMatchmakingGameflowSession& v) { 
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>(); 
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>(); 
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>(); 
  }
} 