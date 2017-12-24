#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameQueuesQueueTranslation { 
    std::string description;
    std::string shortName;
    std::string detailedDescription;
    std::string name; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueTranslation& v) {
    j["description"] = v.description; 
    j["shortName"] = v.shortName; 
    j["detailedDescription"] = v.detailedDescription; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueTranslation& v) {
    v.description = j.at("description").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}