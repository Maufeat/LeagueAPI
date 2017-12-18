#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashRosterPhaseInfo { 
    int64_t phaseId;
    bool isBracketComplete;
    int32_t period; 
  };
  inline void to_json(json& j, const LolClashRosterPhaseInfo& v) {
    j["phaseId"] = v.phaseId; 
    j["isBracketComplete"] = v.isBracketComplete; 
    j["period"] = v.period; 
  }
  inline void from_json(const json& j, LolClashRosterPhaseInfo& v) {
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.isBracketComplete = j.at("isBracketComplete").get<bool>(); 
    v.period = j.at("period").get<int32_t>(); 
  }
}