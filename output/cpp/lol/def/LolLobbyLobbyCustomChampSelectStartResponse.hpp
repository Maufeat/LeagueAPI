#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyCustomFailedPlayer.hpp>
namespace lol {
  struct LolLobbyLobbyCustomChampSelectStartResponse { 
    std::vector<LolLobbyLobbyCustomFailedPlayer> failedPlayers;
    bool success; 
  };
  void to_json(json& j, const LolLobbyLobbyCustomChampSelectStartResponse& v) {
  j["failedPlayers"] = v.failedPlayers; 
  j["success"] = v.success; 
  }
  void from_json(const json& j, LolLobbyLobbyCustomChampSelectStartResponse& v) {
  v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer>>(); 
  v.success = j.at("success").get<bool>(); 
  }
}