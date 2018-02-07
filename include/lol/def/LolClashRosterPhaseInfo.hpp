#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterPhaseInfo { 
    int64_t phaseId;
    int32_t period;
    bool isBracketComplete; 
  };
  inline void to_json(json& j, const LolClashRosterPhaseInfo& v) {
    j["phaseId"] = v.phaseId; 
    j["period"] = v.period; 
    j["isBracketComplete"] = v.isBracketComplete; 
  }
  inline void from_json(const json& j, LolClashRosterPhaseInfo& v) {
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.isBracketComplete = j.at("isBracketComplete").get<bool>(); 
  }
}