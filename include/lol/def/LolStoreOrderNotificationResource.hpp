#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreOrderNotificationResource { 
    uint64_t id;
    std::string eventTypeId;
    std::string eventType;
    std::string status; 
  };
  inline void to_json(json& j, const LolStoreOrderNotificationResource& v) {
    j["id"] = v.id; 
    j["eventTypeId"] = v.eventTypeId; 
    j["eventType"] = v.eventType; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, LolStoreOrderNotificationResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.eventTypeId = j.at("eventTypeId").get<std::string>(); 
    v.eventType = j.at("eventType").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
  }
}