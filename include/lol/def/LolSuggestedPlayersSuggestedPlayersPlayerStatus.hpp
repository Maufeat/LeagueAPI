#pragma once
#include "../base_def.hpp" 
#include "LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp"
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus { 
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> currentLobbyStatus;
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> lastQueuedLobbyStatus; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  }
}