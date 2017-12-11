#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct TournamentPhaseDTO { /**/ 
    int64_t registrationTime;/**/
    int64_t startTime;/**/
    int64_t id;/**/
    int32_t period;/**/
    int64_t tournamentId;/**/
  };
  static void to_json(json& j, const TournamentPhaseDTO& v) { 
    j["registrationTime"] = v.registrationTime;
    j["startTime"] = v.startTime;
    j["id"] = v.id;
    j["period"] = v.period;
    j["tournamentId"] = v.tournamentId;
  }
  static void from_json(const json& j, TournamentPhaseDTO& v) { 
    v.registrationTime = j.at("registrationTime").get<int64_t>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
} 