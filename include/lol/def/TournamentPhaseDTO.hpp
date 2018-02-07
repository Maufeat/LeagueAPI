#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct TournamentPhaseDTO { 
    int64_t id;
    int64_t tournamentId;
    int64_t registrationTime;
    int64_t startTime;
    int32_t period; 
  };
  inline void to_json(json& j, const TournamentPhaseDTO& v) {
    j["id"] = v.id; 
    j["tournamentId"] = v.tournamentId; 
    j["registrationTime"] = v.registrationTime; 
    j["startTime"] = v.startTime; 
    j["period"] = v.period; 
  }
  inline void from_json(const json& j, TournamentPhaseDTO& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.registrationTime = j.at("registrationTime").get<int64_t>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
  }
}