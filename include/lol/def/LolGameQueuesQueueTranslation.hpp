#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameQueuesQueueTranslation { 
    std::string name;
    std::string shortName;
    std::string description;
    std::string detailedDescription; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueTranslation& v) {
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["description"] = v.description; 
    j["detailedDescription"] = v.detailedDescription; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueTranslation& v) {
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
  }
}