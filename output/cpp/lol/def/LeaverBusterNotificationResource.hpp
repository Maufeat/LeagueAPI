#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaverBusterNotificationType.hpp>
namespace lol {
  struct LeaverBusterNotificationResource { 
    std::string msgId;
    LeaverBusterNotificationType type;
    int32_t punishedGamesRemaining;
    uint32_t id; 
  };
  void to_json(json& j, const LeaverBusterNotificationResource& v) {
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["punishedGamesRemaining"] = v.punishedGamesRemaining; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LeaverBusterNotificationResource& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<LeaverBusterNotificationType>(); 
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}