#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderGameflowGameClient.hpp"
namespace lol {
  struct LolLobbyTeamBuilderGameflowSession { 
    LolLobbyTeamBuilderGameflowGameClient gameClient; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyTeamBuilderGameflowGameClient>(); 
  }
}