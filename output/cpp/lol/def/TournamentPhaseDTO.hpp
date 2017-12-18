#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct TournamentPhaseDTO { 
    int32_t period;
    int64_t startTime;
    int64_t tournamentId;
    int64_t registrationTime;
    int64_t id; 
  };
  inline void to_json(json& j, const TournamentPhaseDTO& v) {
    j["period"] = v.period; 
    j["startTime"] = v.startTime; 
    j["tournamentId"] = v.tournamentId; 
    j["registrationTime"] = v.registrationTime; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, TournamentPhaseDTO& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.registrationTime = j.at("registrationTime").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}