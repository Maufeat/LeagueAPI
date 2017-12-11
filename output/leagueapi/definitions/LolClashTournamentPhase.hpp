#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashTournamentPhase { /**/ 
    int64_t scoutingStartTime;/**/
    int64_t lockinStartTime;/**/
    int64_t id;/**/
    int32_t period;/**/
    int64_t tournamentId;/**/
  };
  static void to_json(json& j, const LolClashTournamentPhase& v) { 
    j["scoutingStartTime"] = v.scoutingStartTime;
    j["lockinStartTime"] = v.lockinStartTime;
    j["id"] = v.id;
    j["period"] = v.period;
    j["tournamentId"] = v.tournamentId;
  }
  static void from_json(const json& j, LolClashTournamentPhase& v) { 
    v.scoutingStartTime = j.at("scoutingStartTime").get<int64_t>(); 
    v.lockinStartTime = j.at("lockinStartTime").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
} 