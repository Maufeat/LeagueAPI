#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyLobbyStatus.hpp"
namespace lol {
  struct LolChampSelectLegacyPlayerStatus { 
    std::optional<LolChampSelectLegacyLobbyStatus> currentLobbyStatus;
    std::optional<LolChampSelectLegacyLobbyStatus> lastQueuedLobbyStatus; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyPlayerStatus& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }
  inline void from_json(const json& j, LolChampSelectLegacyPlayerStatus& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
  }
}