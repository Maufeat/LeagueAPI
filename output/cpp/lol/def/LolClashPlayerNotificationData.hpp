#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashNotifyReason.hpp>
#include <lol/def/LolClashPlayerNotification.hpp>
#include <lol/def/LolClashRosterNotifyReason.hpp>
namespace lol {
  struct LolClashPlayerNotificationData { 
    uint64_t sourceSummonerId;
    LolClashPlayerNotification notification;
    LolClashRosterNotifyReason rosterNotifyReason;
    uint64_t targetSummonerId;
    LolClashNotifyReason notifyReason; 
  };
  void to_json(json& j, const LolClashPlayerNotificationData& v) {
  j["sourceSummonerId"] = v.sourceSummonerId; 
  j["notification"] = v.notification; 
  j["rosterNotifyReason"] = v.rosterNotifyReason; 
  j["targetSummonerId"] = v.targetSummonerId; 
  j["notifyReason"] = v.notifyReason; 
  }
  void from_json(const json& j, LolClashPlayerNotificationData& v) {
  v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>(); 
  v.notification = j.at("notification").get<LolClashPlayerNotification>(); 
  v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>(); 
  v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>(); 
  v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
  }
}