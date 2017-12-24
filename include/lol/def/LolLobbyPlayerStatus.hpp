#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyStatus.hpp"
namespace lol {
  struct LolLobbyPlayerStatus { 
    std::optional<LolLobbyLobbyStatus> currentLobbyStatus;
    bool canInviteOthersAtEog;
    std::optional<LolLobbyLobbyStatus> lastQueuedLobbyStatus; 
  };
  inline void to_json(json& j, const LolLobbyPlayerStatus& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }
  inline void from_json(const json& j, LolLobbyPlayerStatus& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolLobbyLobbyStatus>>(); 
    v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolLobbyLobbyStatus>>(); 
  }
}