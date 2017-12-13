#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyNotification { 
    uint64_t timestamp;
    std::string notificationId;
    std::string notificationReason;
    std::vector<uint64_t> summonerIds; 
  };
  void to_json(json& j, const LolLobbyLobbyNotification& v) {
  j["timestamp"] = v.timestamp; 
  j["notificationId"] = v.notificationId; 
  j["notificationReason"] = v.notificationReason; 
  j["summonerIds"] = v.summonerIds; 
  }
  void from_json(const json& j, LolLobbyLobbyNotification& v) {
  v.timestamp = j.at("timestamp").get<uint64_t>(); 
  v.notificationId = j.at("notificationId").get<std::string>(); 
  v.notificationReason = j.at("notificationReason").get<std::string>(); 
  v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  }
}