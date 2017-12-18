#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp>
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus { 
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> currentLobbyStatus; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
    if(v.lastQueuedLobbyStatus)
      j["lastQueuedLobbyStatus"] = *v.lastQueuedLobbyStatus;
    if(v.currentLobbyStatus)
      j["currentLobbyStatus"] = *v.currentLobbyStatus;
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
    if(auto it = j.find("lastQueuedLobbyStatus"); it != j.end() && !it->is_null())
      v.lastQueuedLobbyStatus = it->get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
    if(auto it = j.find("currentLobbyStatus"); it != j.end() && !it->is_null())
      v.currentLobbyStatus = it->get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  }
}