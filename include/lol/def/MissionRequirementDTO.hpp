#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MissionRequirementDTO { 
    std::string expression; 
  };
  inline void to_json(json& j, const MissionRequirementDTO& v) {
    j["expression"] = v.expression; 
  }
  inline void from_json(const json& j, MissionRequirementDTO& v) {
    v.expression = j.at("expression").get<std::string>(); 
  }
}