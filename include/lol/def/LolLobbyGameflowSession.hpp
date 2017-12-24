#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameflowPhase.hpp"
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowGameClient.hpp"
namespace lol {
  struct LolLobbyGameflowSession { 
    LolLobbyGameflowGameClient gameClient;
    LolLobbyGameflowGameDodge gameDodge;
    LolLobbyGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolLobbyGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
    j["gameDodge"] = v.gameDodge; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolLobbyGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>(); 
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>(); 
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
  }
}