#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MissionRequirementDTO { 
    std::string type;
    std::string description; 
  };
  void to_json(json& j, const MissionRequirementDTO& v) {
  j["type"] = v.type; 
  j["description"] = v.description; 
  }
  void from_json(const json& j, MissionRequirementDTO& v) {
  v.type = j.at("type").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  }
}