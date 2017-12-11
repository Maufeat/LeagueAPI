#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGameQueuesQueueTranslation { /**/ 
    std::string detailedDescription;/**/
    std::string shortName;/**/
    std::string description;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolGameQueuesQueueTranslation& v) { 
    j["detailedDescription"] = v.detailedDescription;
    j["shortName"] = v.shortName;
    j["description"] = v.description;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolGameQueuesQueueTranslation& v) { 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 