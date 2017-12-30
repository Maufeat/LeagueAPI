#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesSeverity.hpp"
#include "LolLeaguesLeagueNotificationItem.hpp"
namespace lol {
  struct LolLeaguesLeaguesNotification { 
    LolLeaguesLeagueNotificationItem data;
    std::string titleType;
    uint64_t id;
    bool acknowledgedByPlayer;
    std::string type;
    uint64_t priority;
    LolLeaguesSeverity severity; 
  };
  inline void to_json(json& j, const LolLeaguesLeaguesNotification& v) {
    j["data"] = v.data; 
    j["titleType"] = v.titleType; 
    j["id"] = v.id; 
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer; 
    j["type"] = v.type; 
    j["priority"] = v.priority; 
    j["severity"] = v.severity; 
  }
  inline void from_json(const json& j, LolLeaguesLeaguesNotification& v) {
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>(); 
    v.titleType = j.at("titleType").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.priority = j.at("priority").get<uint64_t>(); 
    v.severity = j.at("severity").get<LolLeaguesSeverity>(); 
  }
}