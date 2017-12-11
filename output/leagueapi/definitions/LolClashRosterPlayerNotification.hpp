#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashRosterNotifyReason.hpp>"
#include "<leagueapi/definitions/RosterDTO.hpp>"
#include "<leagueapi/definitions/PlayerDTO.hpp>"

namespace leagueapi {
  struct LolClashRosterPlayerNotification { /**/ 
    uint64_t sourcePlayerId;/**/
    PlayerDTO player;/**/
    RosterDTO roster;/**/
    LolClashRosterNotifyReason notifyReason;/**/
  };
  static void to_json(json& j, const LolClashRosterPlayerNotification& v) { 
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["player"] = v.player;
    j["roster"] = v.roster;
    j["notifyReason"] = v.notifyReason;
  }
  static void from_json(const json& j, LolClashRosterPlayerNotification& v) { 
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.roster = j.at("roster").get<RosterDTO>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>(); 
  }
} 