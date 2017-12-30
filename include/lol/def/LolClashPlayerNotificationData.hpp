#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerNotification.hpp"
#include "LolClashNotifyReason.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace lol {
  struct LolClashPlayerNotificationData { 
    uint64_t sourceSummonerId;
    uint64_t targetSummonerId;
    LolClashRosterNotifyReason rosterNotifyReason;
    LolClashNotifyReason notifyReason;
    LolClashPlayerNotification notification; 
  };
  inline void to_json(json& j, const LolClashPlayerNotificationData& v) {
    j["sourceSummonerId"] = v.sourceSummonerId; 
    j["targetSummonerId"] = v.targetSummonerId; 
    j["rosterNotifyReason"] = v.rosterNotifyReason; 
    j["notifyReason"] = v.notifyReason; 
    j["notification"] = v.notification; 
  }
  inline void from_json(const json& j, LolClashPlayerNotificationData& v) {
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>(); 
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>(); 
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
    v.notification = j.at("notification").get<LolClashPlayerNotification>(); 
  }
}