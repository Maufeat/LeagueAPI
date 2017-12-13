#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersLobbyStatus.hpp>
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus { 
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus> currentLobbyStatus; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersPlayerStatus& v) {
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolSuggestedPlayersSuggestedPlayersLobbyStatus>>(); 
  }
}