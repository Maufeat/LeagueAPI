#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatLobbyStatus.hpp>
namespace lol {
  struct LolChatLobbyPlayerStatus { 
    std::optional<LolChatLobbyStatus> currentLobbyStatus;
    std::optional<LolChatLobbyStatus> lastQueuedLobbyStatus; 
  };
  void to_json(json& j, const LolChatLobbyPlayerStatus& v) {
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  }
  void from_json(const json& j, LolChatLobbyPlayerStatus& v) {
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolChatLobbyStatus>>(); 
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolChatLobbyStatus>>(); 
  }
}