#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubName { /**/ 
    std::string name;/**/
  };
  static void to_json(json& j, const ClubName& v) { 
    j["name"] = v.name;
  }
  static void from_json(const json& j, ClubName& v) { 
    v.name = j.at("name").get<std::string>(); 
  }
} 