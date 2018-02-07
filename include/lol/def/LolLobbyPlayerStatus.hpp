#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyStatus.hpp"
namespace lol {
  struct LolLobbyPlayerStatus { 
    std::optional<LolLobbyLobbyStatus> currentLobbyStatus;
    std::optional<LolLobbyLobbyStatus> lastQueuedLobbyStatus;
    bool canInviteOthersAtEog; 
  };
  inline void to_json(json& j, const LolLobbyPlayerStatus& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
  }
  inline void from_json(const json& j, LolLobbyPlayerStatus& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolLobbyLobbyStatus>>(); 
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolLobbyLobbyStatus>>(); 
    v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
  }
}