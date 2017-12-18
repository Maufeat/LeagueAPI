#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MissionRequirementDTO { 
    std::string description;
    std::string type; 
  };
  inline void to_json(json& j, const MissionRequirementDTO& v) {
    j["description"] = v.description; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, MissionRequirementDTO& v) {
    v.description = j.at("description").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}