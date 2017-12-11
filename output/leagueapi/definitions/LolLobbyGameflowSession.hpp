#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyGameflowPhase.hpp>"
#include "<leagueapi/definitions/LolLobbyGameflowGameDodge.hpp>"
#include "<leagueapi/definitions/LolLobbyGameflowGameClient.hpp>"

namespace leagueapi {
  struct LolLobbyGameflowSession { /**/ 
    LolLobbyGameflowPhase phase;/**/
    LolLobbyGameflowGameDodge gameDodge;/**/
    LolLobbyGameflowGameClient gameClient;/**/
  };
  static void to_json(json& j, const LolLobbyGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
    j["gameClient"] = v.gameClient;
  }
  static void from_json(const json& j, LolLobbyGameflowSession& v) { 
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>(); 
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>(); 
  }
} 