#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueNotificationItem.hpp>
#include <lol/def/LolLeaguesSeverity.hpp>
namespace lol {
  struct LolLeaguesLeaguesNotification { 
    std::string type;
    LolLeaguesSeverity severity;
    std::string titleType;
    uint64_t priority;
    bool acknowledgedByPlayer;
    LolLeaguesLeagueNotificationItem data;
    uint64_t id; 
  };
  void to_json(json& j, const LolLeaguesLeaguesNotification& v) {
    j["type"] = v.type; 
    j["severity"] = v.severity; 
    j["titleType"] = v.titleType; 
    j["priority"] = v.priority; 
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer; 
    j["data"] = v.data; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolLeaguesLeaguesNotification& v) {
    v.type = j.at("type").get<std::string>(); 
    v.severity = j.at("severity").get<LolLeaguesSeverity>(); 
    v.titleType = j.at("titleType").get<std::string>(); 
    v.priority = j.at("priority").get<uint64_t>(); 
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>(); 
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}