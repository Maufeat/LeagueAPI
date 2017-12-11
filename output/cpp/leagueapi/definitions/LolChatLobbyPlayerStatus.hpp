#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChatLobbyStatus.hpp>

namespace leagueapi {
  struct LolChatLobbyPlayerStatus { /**/ 
    std::optional<LolChatLobbyStatus> currentLobbyStatus;/**/
    std::optional<LolChatLobbyStatus> lastQueuedLobbyStatus;/**/
  };
  static void to_json(json& j, const LolChatLobbyPlayerStatus& v) { 
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }
  static void from_json(const json& j, LolChatLobbyPlayerStatus& v) { 
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolChatLobbyStatus>>(); 
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolChatLobbyStatus>>(); 
  }
} 