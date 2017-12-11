#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolStoreOrderNotificationResource { /**/ 
    std::string eventTypeId;/**/
    std::string eventType;/**/
    uint64_t id;/**/
    std::string status;/**/
  };
  static void to_json(json& j, const LolStoreOrderNotificationResource& v) { 
    j["eventTypeId"] = v.eventTypeId;
    j["eventType"] = v.eventType;
    j["id"] = v.id;
    j["status"] = v.status;
  }
  static void from_json(const json& j, LolStoreOrderNotificationResource& v) { 
    v.eventTypeId = j.at("eventTypeId").get<std::string>(); 
    v.eventType = j.at("eventType").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.status = j.at("status").get<std::string>(); 
  }
} 