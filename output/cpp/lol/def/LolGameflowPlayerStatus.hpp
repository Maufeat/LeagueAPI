#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowLobbyStatus.hpp>
namespace lol {
  struct LolGameflowPlayerStatus { 
    std::optional<LolGameflowLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolGameflowLobbyStatus> currentLobbyStatus;
    bool canInviteOthersAtEog; 
  };
  void to_json(json& j, const LolGameflowPlayerStatus& v) {
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
  }
  void from_json(const json& j, LolGameflowPlayerStatus& v) {
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolGameflowLobbyStatus>>(); 
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolGameflowLobbyStatus>>(); 
  v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
  }
}