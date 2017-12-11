#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchmakingLobbyStatus.hpp>

namespace leagueapi {
  struct LolMatchmakingPlayerStatus { /**/ 
    std::optional<LolMatchmakingLobbyStatus> currentLobbyStatus;/**/
    std::optional<LolMatchmakingLobbyStatus> lastQueuedLobbyStatus;/**/
  };
  static void to_json(json& j, const LolMatchmakingPlayerStatus& v) { 
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }
  static void from_json(const json& j, LolMatchmakingPlayerStatus& v) { 
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolMatchmakingLobbyStatus>>(); 
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolMatchmakingLobbyStatus>>(); 
  }
} 