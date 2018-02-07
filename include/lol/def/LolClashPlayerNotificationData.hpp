#pragma once
#include "../base_def.hpp" 
#include "LolClashNotifyReason.hpp"
#include "LolClashRosterNotifyReason.hpp"
#include "LolClashPlayerNotification.hpp"
namespace lol {
  struct LolClashPlayerNotificationData { 
    LolClashNotifyReason notifyReason;
    LolClashRosterNotifyReason rosterNotifyReason;
    uint64_t sourceSummonerId;
    uint64_t targetSummonerId;
    LolClashPlayerNotification notification; 
  };
  inline void to_json(json& j, const LolClashPlayerNotificationData& v) {
    j["notifyReason"] = v.notifyReason; 
    j["rosterNotifyReason"] = v.rosterNotifyReason; 
    j["sourceSummonerId"] = v.sourceSummonerId; 
    j["targetSummonerId"] = v.targetSummonerId; 
    j["notification"] = v.notification; 
  }
  inline void from_json(const json& j, LolClashPlayerNotificationData& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>(); 
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>(); 
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>(); 
    v.notification = j.at("notification").get<LolClashPlayerNotification>(); 
  }
}