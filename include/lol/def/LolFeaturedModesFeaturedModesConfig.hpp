#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolFeaturedModesFeaturedModesConfig { 
    uint32_t QueueToggleNotificationMinutesThreshold;
    uint32_t MaxNotificationSaveDelayMinutes;
    bool NotificationsEnabled; 
  };
  inline void to_json(json& j, const LolFeaturedModesFeaturedModesConfig& v) {
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold; 
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes; 
    j["NotificationsEnabled"] = v.NotificationsEnabled; 
  }
  inline void from_json(const json& j, LolFeaturedModesFeaturedModesConfig& v) {
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>(); 
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>(); 
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>(); 
  }
}