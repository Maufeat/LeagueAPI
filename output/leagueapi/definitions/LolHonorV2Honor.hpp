#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2Honor { /**/ 
    std::string honorCategory;/**/
    std::string voterRelationship;/**/
  };
  static void to_json(json& j, const LolHonorV2Honor& v) { 
    j["honorCategory"] = v.honorCategory;
    j["voterRelationship"] = v.voterRelationship;
  }
  static void from_json(const json& j, LolHonorV2Honor& v) { 
    v.honorCategory = j.at("honorCategory").get<std::string>(); 
    v.voterRelationship = j.at("voterRelationship").get<std::string>(); 
  }
} 