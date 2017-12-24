#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterPhaseInfo { 
    int32_t period;
    int64_t phaseId;
    bool isBracketComplete; 
  };
  inline void to_json(json& j, const LolClashRosterPhaseInfo& v) {
    j["period"] = v.period; 
    j["phaseId"] = v.phaseId; 
    j["isBracketComplete"] = v.isBracketComplete; 
  }
  inline void from_json(const json& j, LolClashRosterPhaseInfo& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.isBracketComplete = j.at("isBracketComplete").get<bool>(); 
  }
}