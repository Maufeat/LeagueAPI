#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameflowPhase.hpp"
#include "LolLobbyGameflowGameClient.hpp"
#include "LolLobbyGameflowGameDodge.hpp"
namespace lol {
  struct LolLobbyGameflowSession { 
    LolLobbyGameflowPhase phase;
    LolLobbyGameflowGameClient gameClient;
    LolLobbyGameflowGameDodge gameDodge; 
  };
  inline void to_json(json& j, const LolLobbyGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
    j["gameDodge"] = v.gameDodge; 
  }
  inline void from_json(const json& j, LolLobbyGameflowSession& v) {
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>(); 
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>(); 
  }
}