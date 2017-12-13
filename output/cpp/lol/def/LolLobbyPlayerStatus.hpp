#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyStatus.hpp>
namespace lol {
  struct LolLobbyPlayerStatus { 
    std::optional<LolLobbyLobbyStatus> currentLobbyStatus;
    std::optional<LolLobbyLobbyStatus> lastQueuedLobbyStatus;
    bool canInviteOthersAtEog; 
  };
  void to_json(json& j, const LolLobbyPlayerStatus& v) {
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
  }
  void from_json(const json& j, LolLobbyPlayerStatus& v) {
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolLobbyLobbyStatus>>(); 
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolLobbyLobbyStatus>>(); 
  v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
  }
}