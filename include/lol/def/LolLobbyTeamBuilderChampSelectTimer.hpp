#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectTimer { 
    int64_t timeLeftInPhase;
    int64_t adjustedTimeLeftInPhase;
    int32_t timeLeftInPhaseInSec;
    int32_t adjustedTimeLeftInPhaseInSec;
    int64_t totalTimeInPhase;
    std::string phase;
    bool isInfinite;
    uint64_t internalNowInEpochMs; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectTimer& v) {
    j["timeLeftInPhase"] = v.timeLeftInPhase; 
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase; 
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec; 
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec; 
    j["totalTimeInPhase"] = v.totalTimeInPhase; 
    j["phase"] = v.phase; 
    j["isInfinite"] = v.isInfinite; 
    j["internalNowInEpochMs"] = v.internalNowInEpochMs; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectTimer& v) {
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>(); 
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>(); 
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>(); 
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>(); 
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>(); 
    v.phase = j.at("phase").get<std::string>(); 
    v.isInfinite = j.at("isInfinite").get<bool>(); 
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>(); 
  }
}