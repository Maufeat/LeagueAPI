#pragma once
#include "../base_def.hpp" 
#include "LolChatLobbyStatus.hpp"
namespace lol {
  struct LolChatLobbyPlayerStatus { 
    std::optional<LolChatLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolChatLobbyStatus> currentLobbyStatus; 
  };
  inline void to_json(json& j, const LolChatLobbyPlayerStatus& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
  }
  inline void from_json(const json& j, LolChatLobbyPlayerStatus& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolChatLobbyStatus>>(); 
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolChatLobbyStatus>>(); 
  }
}