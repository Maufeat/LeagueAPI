#pragma once
#include "../base_def.hpp" 
#include "PatcherNotificationId.hpp"
namespace lol {
  struct PatcherNotification { 
    std::string id;
    PatcherNotificationId notificationId; 
  };
  inline void to_json(json& j, const PatcherNotification& v) {
    j["id"] = v.id; 
    j["notificationId"] = v.notificationId; 
  }
  inline void from_json(const json& j, PatcherNotification& v) {
    v.id = j.at("id").get<std::string>(); 
    v.notificationId = j.at("notificationId").get<PatcherNotificationId>(); 
  }
}