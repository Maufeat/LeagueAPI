#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyGameflowGameDodge.hpp>
#include <lol/def/LolLobbyGameflowPhase.hpp>
#include <lol/def/LolLobbyGameflowGameClient.hpp>
namespace lol {
  struct LolLobbyGameflowSession { 
    LolLobbyGameflowPhase phase;
    LolLobbyGameflowGameDodge gameDodge;
    LolLobbyGameflowGameClient gameClient; 
  };
  void to_json(json& j, const LolLobbyGameflowSession& v) {
  j["phase"] = v.phase; 
  j["gameDodge"] = v.gameDodge; 
  j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolLobbyGameflowSession& v) {
  v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
  v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>(); 
  v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>(); 
  }
}