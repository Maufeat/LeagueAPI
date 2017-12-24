#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyChampSelectTimer { 
    int64_t totalTimeInPhase;
    std::string phase;
    int64_t timeLeftInPhase;
    bool isInfinite;
    int64_t adjustedTimeLeftInPhase;
    uint64_t internalNowInEpochMs;
    int32_t adjustedTimeLeftInPhaseInSec;
    int32_t timeLeftInPhaseInSec; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectTimer& v) {
    j["totalTimeInPhase"] = v.totalTimeInPhase; 
    j["phase"] = v.phase; 
    j["timeLeftInPhase"] = v.timeLeftInPhase; 
    j["isInfinite"] = v.isInfinite; 
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase; 
    j["internalNowInEpochMs"] = v.internalNowInEpochMs; 
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec; 
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectTimer& v) {
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>(); 
    v.phase = j.at("phase").get<std::string>(); 
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>(); 
    v.isInfinite = j.at("isInfinite").get<bool>(); 
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>(); 
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>(); 
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>(); 
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>(); 
  }
}