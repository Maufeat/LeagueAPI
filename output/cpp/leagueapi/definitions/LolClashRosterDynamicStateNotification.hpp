#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashRosterNotifyReason.hpp>
#include <leagueapi/definitions/RosterDynamicStateDTO.hpp>

namespace leagueapi {
  struct LolClashRosterDynamicStateNotification { /**/ 
    LolClashRosterNotifyReason notifyReason;/**/
    uint64_t sourcePlayerId;/**/
    RosterDynamicStateDTO rosterDynamicState;/**/
  };
  static void to_json(json& j, const LolClashRosterDynamicStateNotification& v) { 
    j["notifyReason"] = v.notifyReason;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["rosterDynamicState"] = v.rosterDynamicState;
  }
  static void from_json(const json& j, LolClashRosterDynamicStateNotification& v) { 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO>(); 
  }
} 