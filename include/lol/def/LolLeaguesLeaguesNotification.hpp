#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesSeverity.hpp"
#include "LolLeaguesLeagueNotificationItem.hpp"
namespace lol {
  struct LolLeaguesLeaguesNotification { 
    uint64_t id;
    std::string type;
    std::string titleType;
    LolLeaguesSeverity severity;
    LolLeaguesLeagueNotificationItem data;
    uint64_t priority;
    bool acknowledgedByPlayer; 
  };
  inline void to_json(json& j, const LolLeaguesLeaguesNotification& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["titleType"] = v.titleType; 
    j["severity"] = v.severity; 
    j["data"] = v.data; 
    j["priority"] = v.priority; 
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer; 
  }
  inline void from_json(const json& j, LolLeaguesLeaguesNotification& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.titleType = j.at("titleType").get<std::string>(); 
    v.severity = j.at("severity").get<LolLeaguesSeverity>(); 
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>(); 
    v.priority = j.at("priority").get<uint64_t>(); 
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>(); 
  }
}