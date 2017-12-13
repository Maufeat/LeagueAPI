#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PhaseRosterSubDTO.hpp>
#include <lol/def/Bracket.hpp>
namespace lol {
  struct PhaseRosterDTO { 
    int64_t phaseId;
    std::optional<Bracket> bracketDTO;
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    int32_t period; 
  };
  void to_json(json& j, const PhaseRosterDTO& v) {
  j["phaseId"] = v.phaseId; 
  j["bracketDTO"] = v.bracketDTO; 
  j["phaseRosterSubs"] = v.phaseRosterSubs; 
  j["period"] = v.period; 
  }
  void from_json(const json& j, PhaseRosterDTO& v) {
  v.phaseId = j.at("phaseId").get<int64_t>(); 
  v.bracketDTO = j.at("bracketDTO").get<std::optional<Bracket>>(); 
  v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>(); 
  v.period = j.at("period").get<int32_t>(); 
  }
}