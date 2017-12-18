#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterNotifyReason.hpp"
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
namespace lol {
  struct LolClashPlayerNotificationData { 
    uint64_t sourceSummonerId;
    LolClashPlayerNotification notification;
    LolClashRosterNotifyReason rosterNotifyReason;
    uint64_t targetSummonerId;
    LolClashNotifyReason notifyReason; 
  };
  inline void to_json(json& j, const LolClashPlayerNotificationData& v) {
    j["sourceSummonerId"] = v.sourceSummonerId; 
    j["notification"] = v.notification; 
    j["rosterNotifyReason"] = v.rosterNotifyReason; 
    j["targetSummonerId"] = v.targetSummonerId; 
    j["notifyReason"] = v.notifyReason; 
  }
  inline void from_json(const json& j, LolClashPlayerNotificationData& v) {
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>(); 
    v.notification = j.at("notification").get<LolClashPlayerNotification>(); 
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>(); 
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
  }
}