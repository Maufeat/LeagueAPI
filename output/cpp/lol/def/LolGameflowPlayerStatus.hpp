#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowLobbyStatus.hpp>
namespace lol {
  struct LolGameflowPlayerStatus { 
    std::optional<LolGameflowLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolGameflowLobbyStatus> currentLobbyStatus;
    bool canInviteOthersAtEog; 
  };
  inline void to_json(json& j, const LolGameflowPlayerStatus& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
  }
  inline void from_json(const json& j, LolGameflowPlayerStatus& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolGameflowLobbyStatus>>(); 
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolGameflowLobbyStatus>>(); 
    v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
  }
}