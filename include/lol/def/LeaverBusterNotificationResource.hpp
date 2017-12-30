#pragma once
#include "../base_def.hpp" 
#include "LeaverBusterNotificationType.hpp"
namespace lol {
  struct LeaverBusterNotificationResource { 
    int32_t punishedGamesRemaining;
    LeaverBusterNotificationType type;
    uint32_t id;
    std::string msgId; 
  };
  inline void to_json(json& j, const LeaverBusterNotificationResource& v) {
    j["punishedGamesRemaining"] = v.punishedGamesRemaining; 
    j["type"] = v.type; 
    j["id"] = v.id; 
    j["msgId"] = v.msgId; 
  }
  inline void from_json(const json& j, LeaverBusterNotificationResource& v) {
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>(); 
    v.type = j.at("type").get<LeaverBusterNotificationType>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
  }
}