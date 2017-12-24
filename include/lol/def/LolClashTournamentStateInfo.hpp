#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashTournamentStateInfo { 
    int64_t nextStateChangeTime;
    int64_t tournamentId;
    int64_t nextPhaseId;
    LolClashTournamentState state;
    int32_t numRemainingPeriods;
    int64_t currentPhaseId; 
  };
  inline void to_json(json& j, const LolClashTournamentStateInfo& v) {
    j["nextStateChangeTime"] = v.nextStateChangeTime; 
    j["tournamentId"] = v.tournamentId; 
    j["nextPhaseId"] = v.nextPhaseId; 
    j["state"] = v.state; 
    j["numRemainingPeriods"] = v.numRemainingPeriods; 
    j["currentPhaseId"] = v.currentPhaseId; 
  }
  inline void from_json(const json& j, LolClashTournamentStateInfo& v) {
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t>(); 
    v.state = j.at("state").get<LolClashTournamentState>(); 
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>(); 
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t>(); 
  }
}