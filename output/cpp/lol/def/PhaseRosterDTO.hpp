#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Bracket.hpp>
#include <lol/def/PhaseRosterSubDTO.hpp>
namespace lol {
  struct PhaseRosterDTO { 
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    int64_t phaseId;
    int32_t period;
    std::optional<Bracket> bracketDTO; 
  };
  void to_json(json& j, const PhaseRosterDTO& v) {
  j["phaseRosterSubs"] = v.phaseRosterSubs; 
  j["phaseId"] = v.phaseId; 
  j["period"] = v.period; 
  j["bracketDTO"] = v.bracketDTO; 
  }
  void from_json(const json& j, PhaseRosterDTO& v) {
  v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
  v.phaseId = j.at("phaseId").get<int64_t>(); 
  v.period = j.at("period").get<int32_t>(); 
  v.bracketDTO = j.at("bracketDTO").get<std::optional<Bracket>>(); 
  }
}