#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerNotification.hpp"
#include "LolClashRosterNotifyReason.hpp"
#include "LolClashNotifyReason.hpp"
namespace lol {
  struct LolClashPlayerNotificationData { 
    uint64_t sourceSummonerId;
    LolClashNotifyReason notifyReason;
    LolClashRosterNotifyReason rosterNotifyReason;
    LolClashPlayerNotification notification;
    uint64_t targetSummonerId; 
  };
  inline void to_json(json& j, const LolClashPlayerNotificationData& v) {
    j["sourceSummonerId"] = v.sourceSummonerId; 
    j["notifyReason"] = v.notifyReason; 
    j["rosterNotifyReason"] = v.rosterNotifyReason; 
    j["notification"] = v.notification; 
    j["targetSummonerId"] = v.targetSummonerId; 
  }
  inline void from_json(const json& j, LolClashPlayerNotificationData& v) {
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>(); 
    v.notification = j.at("notification").get<LolClashPlayerNotification>(); 
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>(); 
  }
}