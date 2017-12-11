#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyLobbyCustomFailedPlayer.hpp>

namespace leagueapi {
  struct LolLobbyLobbyCustomChampSelectStartResponse { /**/ 
    std::vector<LolLobbyLobbyCustomFailedPlayer> failedPlayers;/**/
    bool success;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyCustomChampSelectStartResponse& v) { 
    j["failedPlayers"] = v.failedPlayers;
    j["success"] = v.success;
  }
  static void from_json(const json& j, LolLobbyLobbyCustomChampSelectStartResponse& v) { 
    v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer>>(); 
    v.success = j.at("success").get<bool>(); 
  }
} 