#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameQueuesQueueTranslation { 
    std::string detailedDescription;
    std::string description;
    std::string name;
    std::string shortName; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueTranslation& v) {
    j["detailedDescription"] = v.detailedDescription; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueTranslation& v) {
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
  }
}