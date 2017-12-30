#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolFeaturedModesFeaturedModesConfig { 
    bool NotificationsEnabled;
    uint32_t MaxNotificationSaveDelayMinutes;
    uint32_t QueueToggleNotificationMinutesThreshold; 
  };
  inline void to_json(json& j, const LolFeaturedModesFeaturedModesConfig& v) {
    j["NotificationsEnabled"] = v.NotificationsEnabled; 
    j["MaxNotificationSaveDelayMinutes"] = v.MaxNotificationSaveDelayMinutes; 
    j["QueueToggleNotificationMinutesThreshold"] = v.QueueToggleNotificationMinutesThreshold; 
  }
  inline void from_json(const json& j, LolFeaturedModesFeaturedModesConfig& v) {
    v.NotificationsEnabled = j.at("NotificationsEnabled").get<bool>(); 
    v.MaxNotificationSaveDelayMinutes = j.at("MaxNotificationSaveDelayMinutes").get<uint32_t>(); 
    v.QueueToggleNotificationMinutesThreshold = j.at("QueueToggleNotificationMinutesThreshold").get<uint32_t>(); 
  }
}