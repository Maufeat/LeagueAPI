#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyGameflowPhase.hpp>
#include <lol/def/LolLobbyGameflowGameClient.hpp>
#include <lol/def/LolLobbyGameflowGameDodge.hpp>
namespace lol {
  struct LolLobbyGameflowSession { 
    LolLobbyGameflowGameDodge gameDodge;
    LolLobbyGameflowPhase phase;
    LolLobbyGameflowGameClient gameClient; 
  };
  void to_json(json& j, const LolLobbyGameflowSession& v) {
    j["gameDodge"] = v.gameDodge; 
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolLobbyGameflowSession& v) {
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>(); 
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>(); 
  }
}