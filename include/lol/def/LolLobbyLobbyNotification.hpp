#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyNotification { 
    std::string notificationId;
    uint64_t timestamp;
    std::string notificationReason;
    std::vector<uint64_t> summonerIds; 
  };
  inline void to_json(json& j, const LolLobbyLobbyNotification& v) {
    j["notificationId"] = v.notificationId; 
    j["timestamp"] = v.timestamp; 
    j["notificationReason"] = v.notificationReason; 
    j["summonerIds"] = v.summonerIds; 
  }
  inline void from_json(const json& j, LolLobbyLobbyNotification& v) {
    v.notificationId = j.at("notificationId").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.notificationReason = j.at("notificationReason").get<std::string>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  }
}