#pragma once
#include "../base_def.hpp" 
#include "Bracket.hpp"
#include "PhaseRosterSubDTO.hpp"
namespace lol {
  struct PhaseRosterDTO { 
    int64_t phaseId;
    std::optional<Bracket> bracketDTO;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    int32_t period; 
  };
  inline void to_json(json& j, const PhaseRosterDTO& v) {
    j["phaseId"] = v.phaseId; 
    if(v.bracketDTO)
      j["bracketDTO"] = *v.bracketDTO;
    j["phaseRosterSubs"] = v.phaseRosterSubs; 
    j["period"] = v.period; 
  }
  inline void from_json(const json& j, PhaseRosterDTO& v) {
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    if(auto it = j.find("bracketDTO"); it != j.end() && !it->is_null())
      v.bracketDTO = it->get<std::optional<Bracket>>(); 
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
    v.period = j.at("period").get<int32_t>(); 
  }
}