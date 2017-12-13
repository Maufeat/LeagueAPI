#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaverBusterNotificationType.hpp>
namespace lol {
  struct LeaverBusterNotificationResource { 
    LeaverBusterNotificationType type;
    std::string msgId;
    int32_t punishedGamesRemaining;
    uint32_t id; 
  };
  void to_json(json& j, const LeaverBusterNotificationResource& v) {
  j["type"] = v.type; 
  j["msgId"] = v.msgId; 
  j["punishedGamesRemaining"] = v.punishedGamesRemaining; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LeaverBusterNotificationResource& v) {
  v.type = j.at("type").get<LeaverBusterNotificationType>(); 
  v.msgId = j.at("msgId").get<std::string>(); 
  v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>(); 
  v.id = j.at("id").get<uint32_t>(); 
  }
}