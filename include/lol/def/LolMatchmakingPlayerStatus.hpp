#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingLobbyStatus.hpp"
namespace lol {
  struct LolMatchmakingPlayerStatus { 
    std::optional<LolMatchmakingLobbyStatus> currentLobbyStatus;
    std::optional<LolMatchmakingLobbyStatus> lastQueuedLobbyStatus; 
  };
  inline void to_json(json& j, const LolMatchmakingPlayerStatus& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }
  inline void from_json(const json& j, LolMatchmakingPlayerStatus& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolMatchmakingLobbyStatus>>(); 
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolMatchmakingLobbyStatus>>(); 
  }
}