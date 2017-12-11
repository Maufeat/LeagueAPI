#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashPresenceState.hpp>"

namespace leagueapi {
  struct LolClashPlaymodeRestrictedInfo { /**/ 
    LolClashPresenceState presenceState;/**/
    bool isRestricted;/**/
    int64_t tournamentId;/**/
  };
  static void to_json(json& j, const LolClashPlaymodeRestrictedInfo& v) { 
    j["presenceState"] = v.presenceState;
    j["isRestricted"] = v.isRestricted;
    j["tournamentId"] = v.tournamentId;
  }
  static void from_json(const json& j, LolClashPlaymodeRestrictedInfo& v) { 
    v.presenceState = j.at("presenceState").get<LolClashPresenceState>(); 
    v.isRestricted = j.at("isRestricted").get<bool>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
} 