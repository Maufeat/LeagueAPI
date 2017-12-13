#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatLobbyStatus.hpp>
namespace lol {
  struct LolChatLobbyPlayerStatus { 
    std::optional<LolChatLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolChatLobbyStatus> currentLobbyStatus; 
  };
  void to_json(json& j, const LolChatLobbyPlayerStatus& v) {
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  }
  void from_json(const json& j, LolChatLobbyPlayerStatus& v) {
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolChatLobbyStatus>>(); 
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolChatLobbyStatus>>(); 
  }
}