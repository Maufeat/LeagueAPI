#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreOrderNotificationResource { 
    std::string eventType;
    std::string eventTypeId;
    std::string status;
    uint64_t id; 
  };
  inline void to_json(json& j, const LolStoreOrderNotificationResource& v) {
    j["eventType"] = v.eventType; 
    j["eventTypeId"] = v.eventTypeId; 
    j["status"] = v.status; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolStoreOrderNotificationResource& v) {
    v.eventType = j.at("eventType").get<std::string>(); 
    v.eventTypeId = j.at("eventTypeId").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}