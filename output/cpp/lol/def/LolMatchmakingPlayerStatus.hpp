#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingLobbyStatus.hpp>
namespace lol {
  struct LolMatchmakingPlayerStatus { 
    std::optional<LolMatchmakingLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolMatchmakingLobbyStatus> currentLobbyStatus; 
  };
  void to_json(json& j, const LolMatchmakingPlayerStatus& v) {
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  }
  void from_json(const json& j, LolMatchmakingPlayerStatus& v) {
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolMatchmakingLobbyStatus>>(); 
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolMatchmakingLobbyStatus>>(); 
  }
}