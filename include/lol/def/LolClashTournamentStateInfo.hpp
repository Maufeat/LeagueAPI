#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashTournamentStateInfo { 
    int64_t tournamentId;
    int64_t nextStateChangeTime;
    int32_t numRemainingPeriods;
    LolClashTournamentState state;
    int64_t nextPhaseId;
    int64_t currentPhaseId; 
  };
  inline void to_json(json& j, const LolClashTournamentStateInfo& v) {
    j["tournamentId"] = v.tournamentId; 
    j["nextStateChangeTime"] = v.nextStateChangeTime; 
    j["numRemainingPeriods"] = v.numRemainingPeriods; 
    j["state"] = v.state; 
    j["nextPhaseId"] = v.nextPhaseId; 
    j["currentPhaseId"] = v.currentPhaseId; 
  }
  inline void from_json(const json& j, LolClashTournamentStateInfo& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>(); 
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>(); 
    v.state = j.at("state").get<LolClashTournamentState>(); 
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t>(); 
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t>(); 
  }
}