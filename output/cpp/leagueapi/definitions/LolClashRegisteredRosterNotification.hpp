#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashRosterNotifyReason.hpp>
#include <leagueapi/definitions/RosterDTO.hpp>

namespace leagueapi {
  struct LolClashRegisteredRosterNotification { /**/ 
    RosterDTO roster;/**/
    LolClashRosterNotifyReason notifyReason;/**/
  };
  static void to_json(json& j, const LolClashRegisteredRosterNotification& v) { 
    j["roster"] = v.roster;
    j["notifyReason"] = v.notifyReason;
  }
  static void from_json(const json& j, LolClashRegisteredRosterNotification& v) { 
    v.roster = j.at("roster").get<RosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
} 