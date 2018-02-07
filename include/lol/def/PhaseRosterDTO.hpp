#pragma once
#include "../base_def.hpp" 
#include "Bracket.hpp"
#include "PhaseRosterSubDTO.hpp"
namespace lol {
  struct PhaseRosterDTO { 
    int64_t phaseId;
    int32_t period;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    std::optional<Bracket> bracketDTO; 
  };
  inline void to_json(json& j, const PhaseRosterDTO& v) {
    j["phaseId"] = v.phaseId; 
    j["period"] = v.period; 
    j["phaseRosterSubs"] = v.phaseRosterSubs; 
    if(v.bracketDTO)
      j["bracketDTO"] = *v.bracketDTO;
  }
  inline void from_json(const json& j, PhaseRosterDTO& v) {
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    if(auto it = j.find("bracketDTO"); it != j.end() && !it->is_null())
      v.bracketDTO = it->get<std::optional<Bracket>>(); 
  }
}