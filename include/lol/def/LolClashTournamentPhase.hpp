#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentPhase { 
    int64_t id;
    int64_t tournamentId;
    int32_t period;
    int64_t lockinStartTime;
    int64_t scoutingStartTime; 
  };
  inline void to_json(json& j, const LolClashTournamentPhase& v) {
    j["id"] = v.id; 
    j["tournamentId"] = v.tournamentId; 
    j["period"] = v.period; 
    j["lockinStartTime"] = v.lockinStartTime; 
    j["scoutingStartTime"] = v.scoutingStartTime; 
  }
  inline void from_json(const json& j, LolClashTournamentPhase& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.lockinStartTime = j.at("lockinStartTime").get<int64_t>(); 
    v.scoutingStartTime = j.at("scoutingStartTime").get<int64_t>(); 
  }
}