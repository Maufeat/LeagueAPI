#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreOrderNotificationResource { 
    std::string eventTypeId;
    uint64_t id;
    std::string status;
    std::string eventType; 
  };
  inline void to_json(json& j, const LolStoreOrderNotificationResource& v) {
    j["eventTypeId"] = v.eventTypeId; 
    j["id"] = v.id; 
    j["status"] = v.status; 
    j["eventType"] = v.eventType; 
  }
  inline void from_json(const json& j, LolStoreOrderNotificationResource& v) {
    v.eventTypeId = j.at("eventTypeId").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.status = j.at("status").get<std::string>(); 
    v.eventType = j.at("eventType").get<std::string>(); 
  }
}