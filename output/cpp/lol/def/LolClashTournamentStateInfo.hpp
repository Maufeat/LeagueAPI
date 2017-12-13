#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashTournamentState.hpp>
namespace lol {
  struct LolClashTournamentStateInfo { 
    LolClashTournamentState state;
    int32_t numRemainingPeriods;
    int64_t currentPhaseId;
    int64_t nextPhaseId;
    int64_t tournamentId;
    int64_t nextStateChangeTime; 
  };
  void to_json(json& j, const LolClashTournamentStateInfo& v) {
  j["state"] = v.state; 
  j["numRemainingPeriods"] = v.numRemainingPeriods; 
  j["currentPhaseId"] = v.currentPhaseId; 
  j["nextPhaseId"] = v.nextPhaseId; 
  j["tournamentId"] = v.tournamentId; 
  j["nextStateChangeTime"] = v.nextStateChangeTime; 
  }
  void from_json(const json& j, LolClashTournamentStateInfo& v) {
  v.state = j.at("state").get<LolClashTournamentState>(); 
  v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>(); 
  v.currentPhaseId = j.at("currentPhaseId").get<int64_t>(); 
  v.nextPhaseId = j.at("nextPhaseId").get<int64_t>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>(); 
  }
}