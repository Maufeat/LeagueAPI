#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterPhaseInfo { 
    int32_t period;
    bool isBracketComplete;
    int64_t phaseId; 
  };
  inline void to_json(json& j, const LolClashRosterPhaseInfo& v) {
    j["period"] = v.period; 
    j["isBracketComplete"] = v.isBracketComplete; 
    j["phaseId"] = v.phaseId; 
  }
  inline void from_json(const json& j, LolClashRosterPhaseInfo& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.isBracketComplete = j.at("isBracketComplete").get<bool>(); 
    v.phaseId = j.at("phaseId").get<int64_t>(); 
  }
}