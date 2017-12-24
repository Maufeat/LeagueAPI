#pragma once
#include "../base_def.hpp" 
#include "LeaverBusterNotificationType.hpp"
namespace lol {
  struct LeaverBusterNotificationResource { 
    uint32_t id;
    std::string msgId;
    LeaverBusterNotificationType type;
    int32_t punishedGamesRemaining; 
  };
  inline void to_json(json& j, const LeaverBusterNotificationResource& v) {
    j["id"] = v.id; 
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["punishedGamesRemaining"] = v.punishedGamesRemaining; 
  }
  inline void from_json(const json& j, LeaverBusterNotificationResource& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<LeaverBusterNotificationType>(); 
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>(); 
  }
}