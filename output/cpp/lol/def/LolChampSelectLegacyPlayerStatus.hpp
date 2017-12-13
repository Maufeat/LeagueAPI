#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyLobbyStatus.hpp>
namespace lol {
  struct LolChampSelectLegacyPlayerStatus { 
    std::optional<LolChampSelectLegacyLobbyStatus> lastQueuedLobbyStatus;
    std::optional<LolChampSelectLegacyLobbyStatus> currentLobbyStatus; 
  };
  void to_json(json& j, const LolChampSelectLegacyPlayerStatus& v) {
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  }
  void from_json(const json& j, LolChampSelectLegacyPlayerStatus& v) {
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
  }
}