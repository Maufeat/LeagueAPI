#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderGameflowGameClient.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderGameflowSession { /**/ 
    LolLobbyTeamBuilderGameflowGameClient gameClient;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderGameflowSession& v) { 
    j["gameClient"] = v.gameClient;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderGameflowSession& v) { 
    v.gameClient = j.at("gameClient").get<LolLobbyTeamBuilderGameflowGameClient>(); 
  }
} 