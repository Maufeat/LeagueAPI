#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyLobbyStatus.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyPlayerStatus { /**/ 
    std::optional<LolChampSelectLegacyLobbyStatus> currentLobbyStatus;/**/
    std::optional<LolChampSelectLegacyLobbyStatus> lastQueuedLobbyStatus;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyPlayerStatus& v) { 
    j["currentLobbyStatus"] = v.currentLobbyStatus;
    j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus;
  }
  static void from_json(const json& j, LolChampSelectLegacyPlayerStatus& v) { 
    v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
    v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
  }
} 