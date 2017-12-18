#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2Honor { 
    std::string honorCategory;
    std::string voterRelationship; 
  };
  inline void to_json(json& j, const LolHonorV2Honor& v) {
    j["honorCategory"] = v.honorCategory; 
    j["voterRelationship"] = v.voterRelationship; 
  }
  inline void from_json(const json& j, LolHonorV2Honor& v) {
    v.honorCategory = j.at("honorCategory").get<std::string>(); 
    v.voterRelationship = j.at("voterRelationship").get<std::string>(); 
  }
}