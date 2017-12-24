#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueNotificationItem.hpp"
#include "LolLeaguesSeverity.hpp"
namespace lol {
  struct LolLeaguesLeaguesNotification { 
    std::string titleType;
    LolLeaguesSeverity severity;
    uint64_t id;
    bool acknowledgedByPlayer;
    std::string type;
    LolLeaguesLeagueNotificationItem data;
    uint64_t priority; 
  };
  inline void to_json(json& j, const LolLeaguesLeaguesNotification& v) {
    j["titleType"] = v.titleType; 
    j["severity"] = v.severity; 
    j["id"] = v.id; 
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer; 
    j["type"] = v.type; 
    j["data"] = v.data; 
    j["priority"] = v.priority; 
  }
  inline void from_json(const json& j, LolLeaguesLeaguesNotification& v) {
    v.titleType = j.at("titleType").get<std::string>(); 
    v.severity = j.at("severity").get<LolLeaguesSeverity>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>(); 
    v.priority = j.at("priority").get<uint64_t>(); 
  }
}