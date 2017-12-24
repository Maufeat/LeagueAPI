#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyCustomFailedPlayer.hpp"
namespace lol {
  struct LolLobbyLobbyCustomChampSelectStartResponse { 
    bool success;
    std::vector<LolLobbyLobbyCustomFailedPlayer> failedPlayers; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomChampSelectStartResponse& v) {
    j["success"] = v.success; 
    j["failedPlayers"] = v.failedPlayers; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomChampSelectStartResponse& v) {
    v.success = j.at("success").get<bool>(); 
    v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer>>(); 
  }
}