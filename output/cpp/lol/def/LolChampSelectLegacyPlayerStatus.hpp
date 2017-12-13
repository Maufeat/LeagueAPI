#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyLobbyStatus.hpp>
namespace lol {
  struct LolChampSelectLegacyPlayerStatus { 
    std::optional<LolChampSelectLegacyLobbyStatus> currentLobbyStatus;
    std::optional<LolChampSelectLegacyLobbyStatus> lastQueuedLobbyStatus; 
  };
  void to_json(json& j, const LolChampSelectLegacyPlayerStatus& v) {
  j["currentLobbyStatus"] = v.currentLobbyStatus; 
  j["lastQueuedLobbyStatus"] = v.lastQueuedLobbyStatus; 
  }
  void from_json(const json& j, LolChampSelectLegacyPlayerStatus& v) {
  v.currentLobbyStatus = j.at("currentLobbyStatus").get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
  v.lastQueuedLobbyStatus = j.at("lastQueuedLobbyStatus").get<std::optional<LolChampSelectLegacyLobbyStatus>>(); 
  }
}