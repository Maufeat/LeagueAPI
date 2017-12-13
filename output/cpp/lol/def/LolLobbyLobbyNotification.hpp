#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyNotification { 
    std::vector<uint64_t> summonerIds;
    uint64_t timestamp;
    std::string notificationReason;
    std::string notificationId; 
  };
  void to_json(json& j, const LolLobbyLobbyNotification& v) {
  j["summonerIds"] = v.summonerIds; 
  j["timestamp"] = v.timestamp; 
  j["notificationReason"] = v.notificationReason; 
  j["notificationId"] = v.notificationId; 
  }
  void from_json(const json& j, LolLobbyLobbyNotification& v) {
  v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  v.timestamp = j.at("timestamp").get<uint64_t>(); 
  v.notificationReason = j.at("notificationReason").get<std::string>(); 
  v.notificationId = j.at("notificationId").get<std::string>(); 
  }
}