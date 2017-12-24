#pragma once
#include "../base_def.hpp" 
#include "LolGameflowLobbyStatus.hpp"
namespace lol {
  struct LolGameflowPlayerStatus { 
    std::optional<LolGameflowLobbyStatus> currentLobbyStatus;
    bool canInviteOthersAtEog;
    std::optional<LolGameflowLobbyStatus> lastQueuedLobbyStatus; 
  };
  inline void to_json(json& j, const LolGameflowPlayerStatus& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }
  inline void from_json(const json& j, LolGameflowPlayerStatus& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolGameflowLobbyStatus>>(); 
    v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolGameflowLobbyStatus>>(); 
  }
}