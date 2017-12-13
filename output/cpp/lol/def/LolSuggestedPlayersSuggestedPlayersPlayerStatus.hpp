#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp>
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus { 
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> currentLobbyStatus;
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> lastQueuedLobbyStatus; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  }
}