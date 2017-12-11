#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MissionRequirementDTO { /**/ 
    std::string type;/**/
    std::string description;/**/
  };
  static void to_json(json& j, const MissionRequirementDTO& v) { 
    j["type"] = v.type;
    j["description"] = v.description;
  }
  static void from_json(const json& j, MissionRequirementDTO& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
  }
} 