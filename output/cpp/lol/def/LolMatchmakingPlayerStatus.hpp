#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingLobbyStatus.hpp>
namespace lol {
  struct LolMatchmakingPlayerStatus { 
    std::optional<LolMatchmakingLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolMatchmakingLobbyStatus> currentLobbyStatus; 
  };
  inline void to_json(json& j, const LolMatchmakingPlayerStatus& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
  }
  inline void from_json(const json& j, LolMatchmakingPlayerStatus& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolMatchmakingLobbyStatus>>(); 
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolMatchmakingLobbyStatus>>(); 
  }
}