#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2Honor { 
    std::string voterRelationship;
    std::string honorCategory; 
  };
  inline void to_json(json& j, const LolHonorV2Honor& v) {
    j["voterRelationship"] = v.voterRelationship; 
    j["honorCategory"] = v.honorCategory; 
  }
  inline void from_json(const json& j, LolHonorV2Honor& v) {
    v.voterRelationship = j.at("voterRelationship").get<std::string>(); 
    v.honorCategory = j.at("honorCategory").get<std::string>(); 
  }
}