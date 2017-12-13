#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingLobbyStatus.hpp>
namespace lol {
  struct LolMatchmakingPlayerStatus { 
    std::optional<LolMatchmakingLobbyStatus> currentLobbyStatus;
    std::optional<LolMatchmakingLobbyStatus> lastQueuedLobbyStatus; 
  };
  void to_json(json& j, const LolMatchmakingPlayerStatus& v) {
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  }
  void from_json(const json& j, LolMatchmakingPlayerStatus& v) {
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolMatchmakingLobbyStatus>>(); 
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolMatchmakingLobbyStatus>>(); 
  }
}