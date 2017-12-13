#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesFeaturedModesConfig { 
    uint32_t MaxNotificationSaveDelayMinutes;
    bool NotificationsEnabled;
    uint32_t QueueToggleNotificationMinutesThreshold; 
  };
  void to_json(json& j, const LolFeaturedModesFeaturedModesConfig& v) {
  j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes; 
  j["NotificationsEnabled"] = v.NotificationsEnabled; 
  j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold; 
  }
  void from_json(const json& j, LolFeaturedModesFeaturedModesConfig& v) {
  v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>(); 
  v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>(); 
  v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>(); 
  }
}