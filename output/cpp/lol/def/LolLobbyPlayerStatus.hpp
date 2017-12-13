#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyStatus.hpp>
namespace lol {
  struct LolLobbyPlayerStatus { 
    std::optional<LolLobbyLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolLobbyLobbyStatus> currentLobbyStatus;
    bool canInviteOthersAtEog; 
  };
  void to_json(json& j, const LolLobbyPlayerStatus& v) {
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["canInviteOthersAtEog"] = v.canInviteOthersAtEog; 
  }
  void from_json(const json& j, LolLobbyPlayerStatus& v) {
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolLobbyLobbyStatus>>(); 
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolLobbyLobbyStatus>>(); 
  v.canInviteOthersAtEog = j.at("canInviteOthersAtEog").get<bool>(); 
  }
}