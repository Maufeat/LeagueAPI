#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus { /**/ 
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> currentLobbyStatus;/**/
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> lastQueuedLobbyStatus;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) { 
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) { 
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  }
} 