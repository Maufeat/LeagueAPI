#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesFeaturedModesConfig { 
    uint32_t QueueToggleNotificationMinutesThreshold;
    bool NotificationsEnabled;
    uint32_t MaxNotificationSaveDelayMinutes; 
  };
  inline void to_json(json& j, const LolFeaturedModesFeaturedModesConfig& v) {
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold; 
    j["NotificationsEnabled"] = v.NotificationsEnabled; 
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes; 
  }
  inline void from_json(const json& j, LolFeaturedModesFeaturedModesConfig& v) {
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>(); 
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>(); 
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>(); 
  }
}