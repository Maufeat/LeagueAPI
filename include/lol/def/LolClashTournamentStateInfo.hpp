#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashTournamentStateInfo { 
    int64_t tournamentId;
    LolClashTournamentState state;
    int64_t currentPhaseId;
    int64_t nextPhaseId;
    int64_t nextStateChangeTime;
    int32_t numRemainingPeriods; 
  };
  inline void to_json(json& j, const LolClashTournamentStateInfo& v) {
    j["tournamentId"] = v.tournamentId; 
    j["state"] = v.state; 
    j["currentPhaseId"] = v.currentPhaseId; 
    j["nextPhaseId"] = v.nextPhaseId; 
    j["nextStateChangeTime"] = v.nextStateChangeTime; 
    j["numRemainingPeriods"] = v.numRemainingPeriods; 
  }
  inline void from_json(const json& j, LolClashTournamentStateInfo& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.state = j.at("state").get<LolClashTournamentState>(); 
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t>(); 
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t>(); 
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>(); 
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>(); 
  }
}