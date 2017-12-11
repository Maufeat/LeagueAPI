#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashPlayerNotification.hpp>
#include <leagueapi/definitions/LolClashNotifyReason.hpp>
#include <leagueapi/definitions/LolClashRosterNotifyReason.hpp>

namespace leagueapi {
  struct LolClashPlayerNotificationData { /**/ 
    uint64_t sourceSummonerId;/**/
    uint64_t targetSummonerId;/**/
    LolClashRosterNotifyReason rosterNotifyReason;/**/
    LolClashPlayerNotification notification;/**/
    LolClashNotifyReason notifyReason;/**/
  };
  static void to_json(json& j, const LolClashPlayerNotificationData& v) { 
    j["sourceSummonerId"] = v.sourceSummonerId;
    j["targetSummonerId"] = v.targetSummonerId;
    j["rosterNotifyReason"] = v.rosterNotifyReason;
    j["notification"] = v.notification;
    j["notifyReason"] = v.notifyReason;
  }
  static void from_json(const json& j, LolClashPlayerNotificationData& v) { 
    v.sourceSummonerId = j.at("sourceSummonerId").get<uint64_t>(); 
    v.targetSummonerId = j.at("targetSummonerId").get<uint64_t>(); 
    v.rosterNotifyReason = j.at("rosterNotifyReason").get<LolClashRosterNotifyReason>(); 
    v.notification = j.at("notification").get<LolClashPlayerNotification>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
  }
} 