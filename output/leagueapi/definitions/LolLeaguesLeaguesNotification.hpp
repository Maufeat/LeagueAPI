#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesLeagueNotificationItem.hpp>"
#include "<leagueapi/definitions/LolLeaguesSeverity.hpp>"

namespace leagueapi {
  struct LolLeaguesLeaguesNotification { /**/ 
    std::string titleType;/**/
    uint64_t priority;/**/
    uint64_t id;/**/
    LolLeaguesLeagueNotificationItem data;/**/
    std::string type;/**/
    bool acknowledgedByPlayer;/**/
    LolLeaguesSeverity severity;/**/
  };
  static void to_json(json& j, const LolLeaguesLeaguesNotification& v) { 
    j["titleType"] = v.titleType;
    j["priority"] = v.priority;
    j["id"] = v.id;
    j["data"] = v.data;
    j["type"] = v.type;
    j["acknowledgedByPlayer"] = v.acknowledgedByPlayer;
    j["severity"] = v.severity;
  }
  static void from_json(const json& j, LolLeaguesLeaguesNotification& v) { 
    v.titleType = j.at("titleType").get<std::string>(); 
    v.priority = j.at("priority").get<uint64_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.data = j.at("data").get<LolLeaguesLeagueNotificationItem>(); 
    v.type = j.at("type").get<std::string>(); 
    v.acknowledgedByPlayer = j.at("acknowledgedByPlayer").get<bool>(); 
    v.severity = j.at("severity").get<LolLeaguesSeverity>(); 
  }
} 