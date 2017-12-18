#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectChampSelectTimer { 
    int32_t adjustedTimeLeftInPhaseInSec;
    std::string phase;
    int64_t adjustedTimeLeftInPhase;
    int64_t timeLeftInPhase;
    int64_t totalTimeInPhase;
    bool isInfinite;
    int32_t timeLeftInPhaseInSec;
    uint64_t internalNowInEpochMs; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectTimer& v) {
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec; 
    j["phase"] = v.phase; 
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase; 
    j["timeLeftInPhase"] = v.timeLeftInPhase; 
    j["totalTimeInPhase"] = v.totalTimeInPhase; 
    j["isInfinite"] = v.isInfinite; 
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec; 
    j["internalNowInEpochMs"] = v.internalNowInEpochMs; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectTimer& v) {
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>(); 
    v.phase = j.at("phase").get<std::string>(); 
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>(); 
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>(); 
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>(); 
    v.isInfinite = j.at("isInfinite").get<bool>(); 
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>(); 
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>(); 
  }
}