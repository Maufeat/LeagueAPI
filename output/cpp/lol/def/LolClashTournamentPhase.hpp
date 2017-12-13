#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashTournamentPhase { 
    int64_t scoutingStartTime;
    int64_t tournamentId;
    int64_t lockinStartTime;
    int32_t period;
    int64_t id; 
  };
  void to_json(json& j, const LolClashTournamentPhase& v) {
    j["scoutingStartTime"] = v.scoutingStartTime; 
    j["tournamentId"] = v.tournamentId; 
    j["lockinStartTime"] = v.lockinStartTime; 
    j["period"] = v.period; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolClashTournamentPhase& v) {
    v.scoutingStartTime = j.at("scoutingStartTime").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.lockinStartTime = j.at("lockinStartTime").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}