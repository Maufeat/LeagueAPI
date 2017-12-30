#pragma once
#include "../base_def.hpp" 
#include "PhaseRosterSubDTO.hpp"
#include "Bracket.hpp"
namespace lol {
  struct PhaseRosterDTO { 
    int32_t period;
    std::optional<Bracket> bracketDTO;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    int64_t phaseId; 
  };
  inline void to_json(json& j, const PhaseRosterDTO& v) {
    j["period"] = v.period; 
    if(v.bracketDTO)
      j["bracketDTO"] = *v.bracketDTO;
    j["phaseRosterSubs"] = v.phaseRosterSubs; 
    j["phaseId"] = v.phaseId; 
  }
  inline void from_json(const json& j, PhaseRosterDTO& v) {
    v.period = j.at("period").get<int32_t>(); 
    if(auto it = j.find("bracketDTO"); it != j.end() && !it->is_null())
      v.bracketDTO = it->get<std::optional<Bracket>>(); 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    v.phaseId = j.at("phaseId").get<int64_t>(); 
  }
}