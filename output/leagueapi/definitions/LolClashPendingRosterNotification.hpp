#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashNotifyReason.hpp>"
#include "<leagueapi/definitions/PendingRosterDTO.hpp>"

namespace leagueapi {
  struct LolClashPendingRosterNotification { /**/ 
    uint64_t targetPlayerId;/**/
    uint64_t sourcePlayerId;/**/
    PendingRosterDTO pendingRoster;/**/
    LolClashNotifyReason notifyReason;/**/
  };
  static void to_json(json& j, const LolClashPendingRosterNotification& v) { 
    j["targetPlayerId"] = v.targetPlayerId;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["pendingRoster"] = v.pendingRoster;
    j["notifyReason"] = v.notifyReason;
  }
  static void from_json(const json& j, LolClashPendingRosterNotification& v) { 
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
  }
} 