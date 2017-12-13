#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherNotificationId.hpp>
namespace lol {
  struct PatcherNotification { 
    PatcherNotificationId notificationId;
    std::string id; 
  };
  void to_json(json& j, const PatcherNotification& v) {
    j["notificationId"] = v.notificationId; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, PatcherNotification& v) {
    v.notificationId = j.at("notificationId").get<PatcherNotificationId>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}