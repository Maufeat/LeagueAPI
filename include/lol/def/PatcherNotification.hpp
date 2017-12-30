#pragma once
#include "../base_def.hpp" 
#include "PatcherNotificationId.hpp"
namespace lol {
  struct PatcherNotification { 
    PatcherNotificationId notificationId;
    std::string id; 
  };
  inline void to_json(json& j, const PatcherNotification& v) {
    j["notificationId"] = v.notificationId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, PatcherNotification& v) {
    v.notificationId = j.at("notificationId").get<PatcherNotificationId>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}