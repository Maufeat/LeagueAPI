#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectChampSelectTimer { 
    uint64_t internalNowInEpochMs;
    int64_t timeLeftInPhase;
    int64_t totalTimeInPhase;
    int32_t adjustedTimeLeftInPhaseInSec;
    std::string phase;
    int64_t adjustedTimeLeftInPhase;
    bool isInfinite;
    int32_t timeLeftInPhaseInSec; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectTimer& v) {
    j["internalNowInEpochMs"] = v.internalNowInEpochMs; 
    j["timeLeftInPhase"] = v.timeLeftInPhase; 
    j["totalTimeInPhase"] = v.totalTimeInPhase; 
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec; 
    j["phase"] = v.phase; 
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase; 
    j["isInfinite"] = v.isInfinite; 
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectTimer& v) {
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>(); 
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>(); 
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>(); 
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>(); 
    v.phase = j.at("phase").get<std::string>(); 
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>(); 
    v.isInfinite = j.at("isInfinite").get<bool>(); 
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>(); 
  }
}