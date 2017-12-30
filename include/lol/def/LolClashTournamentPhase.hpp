#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentPhase { 
    int32_t period;
    int64_t tournamentId;
    int64_t id;
    int64_t lockinStartTime;
    int64_t scoutingStartTime; 
  };
  inline void to_json(json& j, const LolClashTournamentPhase& v) {
    j["period"] = v.period; 
    j["tournamentId"] = v.tournamentId; 
    j["id"] = v.id; 
    j["lockinStartTime"] = v.lockinStartTime; 
    j["scoutingStartTime"] = v.scoutingStartTime; 
  }
  inline void from_json(const json& j, LolClashTournamentPhase& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.lockinStartTime = j.at("lockinStartTime").get<int64_t>(); 
    v.scoutingStartTime = j.at("scoutingStartTime").get<int64_t>(); 
  }
}